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
        
        //set
        //unique
        //sorted

        set<int>st = {1, 2, 3, 1, 4, 7};
        // output -> {1,2,3,4,}

        for(auto item: st){
            cout << item << " ";
        } cout << endl;

        st.insert(5); // O(log(n))
        st.insert(7);
        st.insert(6);
        cout << " After inserting: ";

        for(auto item: st){
            cout << item << " ";
        } cout << endl;
        // is set empty 

        cout << "Is set empty: " << st.empty() <<endl;

        st.erase(3); // O(log(n))
        
        //count 
        cout <<"Count of 1 is: " << st.count(1) << endl;

        // find -> returns pointer
        // iif the item is there it returns its pointer
        // if the item is not there it'll return end() pointer

        if(st.find(4) == st.end()) {
            cout << "Not found" << endl;

        }else{
            
            cout << *st.find(4) << " is found" <<endl;
        }
        
        st.clear(); //clears the set
    }


    return 0;
}