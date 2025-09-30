
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void print_digits(int n){
    if(n==0) return;

    int last_digit = n % 10;
    print_digits(n/10); // digits showing from start

    cout << last_digit << endl;

    //print_digits(n/10); // print from behind
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1; 
    //cin >> t;
    while(t--) {
       int n; cin >> n;
       print_digits(n);
    }


    return 0;
}