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
       
    // set vs multiset: a set stores only unique elements (duplicates are ignored),
    //while a multiset allows duplicates and keeps their counts; 
    //examples: set{1,1,2,3} -> {1,2,3}, multiset{1,1,2,3} -> {1,1,2,3}

        int n; cin >> n;
        multiset<int> ms ={1, 4, 1, 1, 2, 2, 5};
        ms.insert(9);
        ms.insert(10);
        ms.insert(9);
        for(auto it: ms){
            cout << it <<" ";
        }cout << endl;
        // keeps duplicates but sorts them
        cout << ms.empty() << endl;
        ms.clear();


        // count -->>> in multiset, count will return how many times it is in the multiset
        // complexity -> O(k + logn)

        if(ms.find(1) == ms.end()){ //less complexity 
            cout << "Exists\n";
        }

        // Erase in Multiset
        multiset<int> ms1 = {1, 2, 1, 1, 2, 2, 4, 5};
        ms1.erase(2); // this will delete all of its occurances


        // Complexity -> log(n)
        cout << "Aster Erasing" <<'\n';
        for(auto it: ms1){
            cout << it <<" ";
        }

        // for deleting an occurance of an item 
        ms1.erase(ms1.find(1)); // this will erase 1st occurance of 1
        cout << "After Erasing 1st occuranceof 1:" <<'\n';
        for(auto it: ms1){
            cout << it <<" ";
        }
        
    }


    return 0;
}