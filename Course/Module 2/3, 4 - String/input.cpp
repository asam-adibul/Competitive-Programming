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
        string s;
        // no whitespace
        //cin >> s;

        // taking input of full line
        getline(cin,s);
    

        //getting multiple full lines
        int k; cin >> k;
        while(k--){
            //solving white space issues
            // char c; cin >> c; //doing this 
            
            //Alternatively cin.ignore
            cin.ignore();


            //doing this ignores 1st line as getline(cin,s) consumes the newline
            string line;
            getline(cin,line);
            cout << line << endl;
        }
        
    }


    return 0;
}