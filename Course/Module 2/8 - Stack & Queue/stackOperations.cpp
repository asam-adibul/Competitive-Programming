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
    
    https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_2_A

    int t=1; 
    //cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;
        stack<int> stk[n];
        for(int i = 0; i < q; i++){
            int tp; cin >> tp; 
            if(tp == 0){
                int t, x;
                cin >> t >> x;  
                stk[t].push(x);
            }else if(tp == 1){
                int t; cin >> t;
                if(stk[t].empty()){

                }else{
                    cout << stk[t].top() <<'\n';
                }
            }else{
                int t; cin >> t;
                if(stk[t].empty()==0){
                    stk[t].pop();
                }
            }
        }
    }


    return 0;
}