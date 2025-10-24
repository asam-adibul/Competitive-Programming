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
        vector<int>v;
        if(v.begin() == v.end()) cout << "Equal" <<endl; 
        cout <<"Size: " << v.size() << endl;

        for(int i=1; i <= 10; i++){
			v.pb(i);
        }
		for(int i=0; i < v.size(); i++){
			cout << v[i] <<" ";
		}cout << endl;
		cout << "Size: " << v.size() <<endl;

		cout << "Last Element: " << v.back() << endl;

		//erase
		v.erase(v.begin()+2, v.begin()+7); //Index 2 to Index 6

		for(int i=0; i < v.size(); i++){
			cout << v[i] <<" ";
		}cout << endl;

		//removing last element
		v.pop_back();
		cout << "LAst element after popping last element: " << v.back() <<endl;
		
		//Reversing
		reverse(v.begin(), v.end());

		cout << "After Reverse" << endl;
		for(int i=0; i < v.size(); i++){
			cout << v[i] <<" ";
		}
		cout << endl;
	}


    return 0;
}