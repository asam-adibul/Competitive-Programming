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
    
    // Problem Link: https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-multiplication/

    int t=1; 
    //cin >> t;
    while(t--) {
        int n; cin >> n;
        priority_queue<int> pq;

        for(int i=0, x; i < n; i++){
            cin >> x;
            pq.push(x);
            if(i < 2){
                cout << -1 <<endl;
            }else{
                int mx=pq.top();
                pq.pop();
                int smx = pq.top();
                pq.pop();
                int tmx = pq.top();
                cout << mx*smx*tmx <<endl;

                pq.push(mx);
                pq.push(smx);
            }
        }
    }


    return 0;
}