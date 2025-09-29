
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int dp[100005];

int fib(int n){

    // if(n==1) return 0;
    // if(n==2) return 1;

    if(n <= 1) return n;

    if(dp[n] != -1) return dp[n];

    return dp[n] = fib(n-1) + fib(n-2);

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1; 
    //cin >> t;
    while(t--) {
        memset(dp, -1, sizeof(dp));

        int n; cin >> n;

        cout << fib(n) << endl;
    }


    return 0;
}