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
        
        //counting Numbers in a string
        string s = "a32hdkdsl9874jkh345kjh4kj";
        int cnt = 0;
        for(char c: s){
            if(c >= '0' && c <='9') cnt ++;
        } cout << "Number of digits: "<< cnt <<'\n';
        
        // number of specific characters
        string k = "absbsaabdlllds";
        vector<int> v(26,0); 

        for(char c: k){
            v[c- 'a']++;
        }

        for(int i=0; i < 26; i++){
            cout << (char) ('a'+i) << "->" << v[i] <<endl;
        }
        

        // anagram(same from behind)
        /*
        just sort bost of them and check if they are same
        */
    }


    return 0;
}