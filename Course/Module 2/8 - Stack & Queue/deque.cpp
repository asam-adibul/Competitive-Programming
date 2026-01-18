#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ull unsigned long long
#define all(x) (x).rbegin(), (x).rend()
#define rall(x) (x).begin(), (x).end()
#define N 1e5 + 7
#define mod 1e9 + 7


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1; 
    //cin >> t;
    while(t--) {
        deque<int> dq;

   
    dq.push_back(10);     
    dq.push_back(20);      
    dq.push_front(5);     

    cout << "After push operations: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // 2. Access elements
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;
    cout << "Element at index 1: " << dq.at(1) << endl;

    // 3. Pop operations
    dq.pop_front();        // removes 5
    dq.pop_back();         // removes 20

    cout << "After pop operations: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // 4. Size & empty
    cout << "Size of deque: " << dq.size() << endl;
    cout << "Is deque empty? " << (dq.empty() ? "Yes" : "No") << endl;

    // 5. Insert at position
    dq.insert(dq.begin(), 100);          // insert at front
    dq.insert(dq.begin() + 1, 200);      // insert at index 1

    cout << "After insert operations: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // 6. Erase operations
    dq.erase(dq.begin());                // erase first element
    dq.erase(dq.begin() + 1);            // erase element at index 1

    cout << "After erase operations: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // 7. Clear deque
    dq.clear();
    cout << "After clear, size: " << dq.size() << endl;
    }


    return 0;
}