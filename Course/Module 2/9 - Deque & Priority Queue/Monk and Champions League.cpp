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
    
    // Problem Link: https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-champions-league/

    int t=1; 
    //cin >> t;
    while(t--) {
        int m, n; cin >> m >> n;
        priority_queue<int> pq;
        for(int i=0; i < m; i++){
            int x; cin >> x;
            pq.push(x);  
        }
        int sum =0; 
        while (n--){
            int k = pq.top();
            sum += k;
            pq.pop();
            k--;
            pq.push(k);
        }
        cout << sum << endl;
    }


    return 0;
}