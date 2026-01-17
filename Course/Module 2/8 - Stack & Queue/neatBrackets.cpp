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
    
    // Problem link: https://toph.co/p/neat-brackets


    int t=1; 
    //cin >> t;
    while(t--) {
        stack<char>st;
        string s; cin >> s;
        int f = 1;
        int n = s.size();
        for(int i=0; i < n; i++){
            if(s[i]=='('){
                st.push('(');
            }else{
                if(st.empty()){
                    f = 0; 
                    break;
                }st.pop();
            }
        }

        if(st.empty() == 0) {
            f = 0;
        }

        if(f == 1) cout << "Yes" <<endl;
        else cout << "No" << endl;
    }


    return 0;
}