
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

int power(int a, int b){
    if(b==0) return 1;

     if(b%2 == 0){
        int x = power(a, b/2);
        return x*x;
    }else{
        return power(a,b-1) * a;
    }

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1; 
    //cin >> t;
    while(t--) {
       int a,b; cin >> a >> b;
       cout << power(a,b) <<endl;
    }


    return 0;
}