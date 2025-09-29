
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int fib(int n){
    // if(n==1) return 0;
    // if(n==2) return 1;
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2) ;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1; 
    //cin >> t;
    while(t--) {
        int n; cin >> n;

        cout << fib(6) << endl;
        // for the series

        for(int i = 1; i <= n; i++){
            cout << fib(i) <<" ";
        }
    }


    return 0;
}