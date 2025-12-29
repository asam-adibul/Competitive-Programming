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
    
    int t=1; 
    //cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;

        map <string, string> mp;
        for(int i=0; i < n; i++){
            string s, ip; cin >> s >> ip;
            mp[ip] = s;
        }
        for(int i=0; i < m; i++){
            string s, ip; cin >> s>> ip;
            ip.pop_back();
            cout << s << " " << ip <<"; #"<<mp[ip]<<endl;
        }
    }
    return 0;
}


 