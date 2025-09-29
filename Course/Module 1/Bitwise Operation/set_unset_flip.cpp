#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define ull unsigned long long int

int main()
{
    int n; cin >> n;
    /*
    1 -> Doing OR with 1 will set the first bit
    2 -> If we want to unset the nth bit from the back
    we'll have to perform AND operation with (~n) 
    
    3 -> Flipping nth bit
         if we want to flip the nth bit from the back 
         we have to perform XOR with (1 << n-1)
    */

    int res = n | 1; //setting first bit
    res = res & (~2); // unsettiing 2nd bit 
    res = res ^ (1 << 2); // Flipping 3rd bit  

    cout << res << endl;
    
    return 0;
}