#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define ull unsigned long long int

int main()
{
    int n; cin >> n;
    

    int res = n | 1; 
    res = res & (~2);
    res = res ^ (1 << 2);
    cout << res << endl;
    
    return 0;
}