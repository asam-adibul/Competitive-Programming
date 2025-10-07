# 📘 Important Functions in `std::vector`

---

## 🧠 Basic Functions and Details

---

### 1. `push_back()`

- **Use:** Inserts a new element at the end.
    

```cpp
v.push_back(10);
```
- **Complexity:** O(1) _(Amortized)_
    
- **Things to Consider:**
    
    - May **reallocate memory** if capacity is full (invalidates pointers/iterators).
        
    - After reallocation, **previous iterators and references become invalid**.
        
    - Very efficient for continuous insertions at the end.
        

---

### 2. `begin()` / `end()`

- **Use:** Return iterators pointing to the start and end (one past the last element).
    

```cpp
for (auto it = v.begin(); it != v.end(); ++it)     cout << *it << " ";
```

- **Complexity:** O(1)
    
- **Things to Consider:**
    
    - `end()` does **not** point to the last element — it’s one position **after** it.
        
    - Iterators become **invalid** after any reallocation or structural change (like insert/erase).
        

---

### 3. `size()`

- **Use:** Returns the number of elements in the vector.
    

```cpp
cout << v.size();
```

- **Complexity:** O(1)
    
- **Things to Consider:**
    
    - Returns `size_t` (an unsigned integer type).
        
    - Safe and fast to use frequently.
        

---

### 4. `back()`

- **Use:** Access the last element.
    

``` cpp
cout << v.back();
```

- **Complexity:** O(1)
    
- **Things to Consider:**
    
    - Must ensure vector is **not empty** before calling, or it causes **undefined behavior**.
        
    - Use `if (!v.empty()) cout << v.back();` to be safe.
        

---

### 5. `pop_back()`

- **Use:** Removes the last element.
    

```cpp
v.pop_back();
```

- **Complexity:** O(1)
    
- **Things to Consider:**
    
    - Does **not** return the removed value — use `back()` before popping.
        
    - Must not call on an **empty vector** (causes crash).
        

---

### 6. `insert()`

- **Use:** Inserts element(s) at a specific position.
    

```cpp
v.insert(v.begin() + 2, 10);  // Insert 10 at index 2
```
- **Complexity:** O(n) _(shifts elements)_
    
- **Things to Consider:**
    
    - May **reallocate** if capacity is full.
        
    - **All iterators and references** may be invalidated after insertion.
        
    - For multiple inserts, use **reserve()** first to prevent repeated reallocations.
        

---

### 7. `erase()`

- **Use:** Removes element(s) from a specific position or range.
    

```cpp
v.erase(v.begin() + 2); 
v.erase(v.begin() + 2, v.begin() + 7);
 // Remove elements from index 2 to 6
```

- **Complexity:** O(n)
    
- **Things to Consider:**
    
    - Elements after erased ones are **shifted** forward.
        
    - **Invalidates iterators** to erased elements and beyond.
        
    - After erase, `v.size()` decreases but `v.capacity()` remains unchanged.
        

---

### 8. `clear()`

- **Use:** Removes all elements from the vector.
    

```cpp
v.clear();
```

- **Complexity:** O(n)
    
- **Things to Consider:**
    
    - All elements are destroyed, but **capacity remains** (memory not freed).
        
    - Use `shrink_to_fit()` if you want to free unused memory.
        
    - Safe to call on an empty vector.
        

---

### 9. `empty()`

- **Use:** Checks whether the vector is empty.
    

`if (v.empty()) cout << "Vector is empty";`

- **Complexity:** O(1)
    
- **Things to Consider:**
    
    - Always check this before accessing `v.back()` or `v.front()`.
        
    - Returns a boolean (`true` or `false`).
        

---

### 10. `reverse()`

- **Use:** Reverses the order of elements in the vector.
    

`reverse(v.begin(), v.end());`

- **Complexity:** O(n)
    
- **Things to Consider:**
    
    - Works **in-place** (no extra vector created).
        
    - Requires the `<algorithm>` header.
        

---

# 📘 Amortized Complexity of `std::vector`

---

## 🧩 What is Amortized Complexity?

Amortized complexity = **average time per operation** over many operations.  
Some operations (like resizing) are expensive, but most are cheap — so the average stays low.

---

## ⚙️ How `std::vector` Resizing Works

|Step|Capacity|Elements Added|Action|
|---|---|---|---|
|1|1|1|Allocate space for 1 element|
|2|2|2|Double capacity (copy 1 element)|
|3|4|3|Double again (copy 2 elements)|
|4|4|4|No reallocation|
|5|8|5|Double again (copy 4 elements)|

When resizing occurs:

- Allocate new memory (**O(n)**)
    
- Copy existing elements (**O(n)**)
    
- Free old memory
    

---

## ⚖️ Why Amortized O(1)?

Even though some `push_back()` calls take O(n),  
over many insertions, the average time is O(1).

Because total copies over N insertions =  
`1 + 2 + 4 + 8 + ... + N/2 < 2N` → **O(N)** total → **O(1)** per operation.

✅ Therefore:  
`vector.push_back()` = **Amortized O(1)**

---

## 🕓 Summary Table

|Operation|Worst Case|Amortized|Things to Consider|
|---|---|---|---|
|push_back()|O(n) (resize)|O(1)|May reallocate; invalidates iterators|
|pop_back()|O(1)|O(1)|Cannot call on empty vector|
|insert()|O(n)|O(n)|Shifts elements; may reallocate|
|erase()|O(n)|O(n)|Shifts elements; invalidates iterators|
|clear()|O(n)|O(n)|Keeps capacity; destroys elements|
|empty()|O(1)|O(1)|Safe way to check before access|
|operator[]|O(1)|O(1)|No bounds checking|
|begin()/end()|O(1)|O(1)|Invalid after modification|

---

## 💡 Analogy

Think of it like driving on a road:

- Most trips = smooth (O(1) operations)
    
- Occasionally, road repair = slowdown (O(n) resize)
    
- On average = still fast (Amortized O(1))
