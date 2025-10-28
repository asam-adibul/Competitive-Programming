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
        
        map<int, int>mp;
        mp[10] = 6;
        mp[-1] = 7;
        mp[180] = 1000;
        mp[-3030] = 69;

        cout << mp[-1] <<" " << mp[180] <<endl;

        /*  time complexity 
            m[0] = 100 -> log(n)
            cout << m[0]; -> log(n)
        */

        //one key multiple value possible
        map<int, vector<int>> mpp;
        mpp[5].pb(5);
        mpp[5].pb(1000);
        mpp[5].pb(69);
        mpp[2].pb(11);
        mpp[2].pb(-10);

        cout << "Output from vector as value in a map: ";
        for(int a: mpp[5]){
            cout << a << " ";
        }
        cout << "from a specific index: ";
        cout << mpp[5][2] << endl;

    }


    return 0;
}