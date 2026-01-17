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
        stack<int> stk;
        stk.push(1);
        stk.push(5);
        stk.push(9);
        stk.push(100);
        while(!stk.empty()){
            cout << stk.top() <<endl;
            stk.pop();
        }
        cout << "is stack empty? "<< stk.empty() <<endl;

    }


    return 0;
}