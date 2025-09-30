
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int dp[100005]; 

vector<int>coins = {5, 12, 23};

int isPossible(int n){
    if(n < 0) return 0;
    if(n==0) return 1;

    if(dp[n] != -1) return dp[n];

    int res = 0;

    for(int coin: coins){
        if(isPossible(n-coin)){
            res = 1;
            break; 
        }
    }

    return dp[n] = res ;
}
//Complexity -> n*m ;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1; 
    //cin >> t;
    while(t--) {
        memset(dp, -1, sizeof dp);
        int n; cin  >> n;
        cout << isPossible(n) << endl;
    }


    return 0;
} 