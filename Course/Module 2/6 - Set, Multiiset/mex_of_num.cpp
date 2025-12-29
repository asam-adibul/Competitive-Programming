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
       

        // MEX (Minimum Excluded value):
        // The smallest non-negative integer that does NOT appear in the array.
        //
        // Properties:
        // - MEX >= 0
        // - For an array of size n: 0 ≤ MEX ≤ n
        // - If all values from 0 to n-1 exist, then MEX = n
        //
        // Examples:
        // {0, 2, 3, 4}       -> MEX = 1
        // {0, 1, 2, 5}       -> MEX = 3
        // {0, 1, 2, 3, 4, 5} -> MEX = 6


        set<int> st;
        int n; cin >> n;

        //putting all the values in a set from 1 to n 
        for(int i=0; i <= n; i++){
            st.insert(i);
        }

        // now while taking input we'll delete the number insterted from the set
        // this way the smallest number in the set will be mex

        for(int i=0; i < n; i++){
            int x; cin >> x;

            st.erase(x);
            //cout << *st.begin() << endl; //mex for every iteration
        }

        cout << *st.begin() << endl; //mex for full array

    }


    return 0;
}