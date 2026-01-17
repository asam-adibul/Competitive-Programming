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
    
// Problem Link: https://www.spoj.com/problems/QUEUEEZ/

    int t=1; 
    //cin >> t;
    while(t--) {
        int t; cin >> t;
        queue<int> q;

        for(int i =0; i < t; i++){
            int tp; cin >> tp;

            if(tp==1){
                int n ; cin >> n;
                q.push(n);
            }else if(tp ==2){
                if(q.empty()){

                }else{
                    q.pop();
                }
            }else{
                if(q.empty()){
                    cout << "Empty!" <<endl;
                }else{
                    cout << q.front() <<endl;
                }
            }
        }
    }


    return 0;
}