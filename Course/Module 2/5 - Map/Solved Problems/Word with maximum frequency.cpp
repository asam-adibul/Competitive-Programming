#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string maximumFrequency(string& s) {
        vector<string>v;

        stringstream ss(s);
        string s2;

        while(ss >> s2){
            v.push_back(s2);
        }

        map<string, int>mp;
        for(auto k: v){
            mp[k]++;
        }
        string ans; int max=-1;

        for(auto s: v){
            if(mp[s] > max){
                max = mp[s];
                ans = s;
            }
        }

        string answer = ans;
        answer += " ";
        answer += to_string(max);
        return answer;
    }
}; 