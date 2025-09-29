#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define ull unsigned long long int

int main()
{
    int n ,pos;
    cin >> n >> pos;
    int res = (n>>pos)&1;
    cout << res << endl;
    return 0;
}