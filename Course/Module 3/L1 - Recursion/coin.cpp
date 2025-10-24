
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

vector<int>coins = {5, 12, 23};

int isPossible(int n){
    if(n < 0) return 0;
    if(n==0) return 1;

    for(int coin: coins){
        if(isPossible(n-coin)) return 1;
    }

    return 0;
}



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1; 
    //cin >> t;
    while(t--) {
       int n; cin  >> n;
       cout << isPossible(n ) << endl;
    }


    return 0;
}