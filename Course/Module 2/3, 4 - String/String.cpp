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
        string s1 = "AdiBul";
        string s2 = "Adibul";
        cout << (s1 >= s2) << endl;
        
        //substring -> continuous length in string 
        
        string t = s1.substr(1, 3); 
        // 1 -> starting index
        // 3 -> how many characters
        cout << t << endl;

        sort(s1.begin(), s1.end());
        cout << s1 << endl;

        sort(s2.begin(), s2.begin()+3);
        cout << s2 << endl;

        // Input types

        // -->> normal input
        string newString;
        cin >> newString;
        

        // taking input of full line 
        string fullLine;
        cin >> fullLine;


    }


    return 0;
}