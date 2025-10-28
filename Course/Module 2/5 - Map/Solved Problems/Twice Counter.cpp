#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countWords(string list[], int n) {
        
        map<string, int>mp;
        for(int i=0; i < n; i++){
            mp[list[i]]++;
        } int cnt = 0;
        for(auto s: mp){
            if(s.second == 2)cnt ++;
        }
        return cnt;
    }
};