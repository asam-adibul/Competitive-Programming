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
    
    //Problem Link: https://www.spoj.com/problems/REDARR2/

    int t=1; 
    cin >> t;
    while(t--) {
        int n; cin >> n;
        priority_queue<int, vector<int>, greater<int>>pq;
        while(n--){
            long long x; cin >> x;
            pq.push(x);

        }
        long long cost = 0;

        while(pq.size() >= 2){
            long long min = pq.top();
            pq.pop();
            long long s_min = pq.top();
            pq.pop();
            cost += (s_min + min);
            pq.push(min+s_min);
        }
        cout << cost << endl;
    }  


    return 0;
}