
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int fact(int n){
    if(n==1) return 1;
    return n * fact(n-1);       
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1; 
    //cin >> t;
    while(t--) {
       int n; cin >> n;
       cout << fact(n) << endl;
    }


    return 0;
}