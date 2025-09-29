#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define ull unsigned long long int

int main()
{
    int a,b; cin >> a >> b;
    cout << (a | b) <<'\n';

    /*
    XOR -> Different input -> True
    1 ^ 1 = 0
    1 ^ 0 = 1 
    0 ^ 1 = 1 
    0 ^ 0 = 0
    Property
    ----------
    if  a ^ b = c then a ^ c = b and b ^ c = a 
    */
   cout <<"XOR of a and b " << (a^b) << endl;

   /*
   NOT (~) flips the bits 
   ans = - (n+1) 
   */
   cout << "Not of 3 is " << (~3) << endl;

   /*Shifting
   -----------------
   1. Left Shift (<<)
        Formula:
        n << k = n * (2^k)

        Example:
        5 << 2 = 5 * (2^2) = 5 * 4 = 20

---------------------------------------------------

    2. Right Shift (>>)
        Formula:
        n >> k = floor(n / (2^k))

        Example:
      2  0 >> 2 = floor(20 / 4) = 5

   */
    
   cout <<"6 left shift 1 is " << (6<<1) << endl; //left shift 
   cout << "6 right shift 2 is " << (6>>2) << endl; //Right Shift

   /*
   Bitwise AND
   -----------
   if we bitwise and a number with 1 we will get the last bit
   */
    cout <<"Binary of 13 is: 1101" <<'\n';
    cout <<"2nd  Binary Digit of 13 from behind is: " << (13&1) << endl;
    cout <<"2nd Binary Digit of 13 from behind is: " << ((13>>1)&1) << endl;
}