
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int memo[100005]; // n er value at most 10^5
int mark [100005]; //to check if the value is calculated or not

// not using map because map operation complexity log(n) 

int fib(int n){
    // if(n==1) return 0;
    // if(n==2) return 1;
    if(n <= 1) return n;
  
    if(mark[n] == 1) return memo[n]; 
      
    int res = fib(n-1) + fib(n-2);
    

    memo[n] = res;
    mark[n] = 1;


    return res;
}
 
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1; 
    //cin >> t;
    while(t--) {
       int n; cin >> n;

        cout << fib(5) << endl;
        // for the series

        // for(int i = 1; i <= n; i++){
        //     cout << fib(i) <<" ";
        // }
    }


    return 0;
}