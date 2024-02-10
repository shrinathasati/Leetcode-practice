#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(string a){
        int n=a.size();
        for(int i=0;i<(n/2);i++){
            if(a[i]!=a[n-i-1]){
                return false;
            }
        }
        return true;
    }
    int countSubstrings(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<=n-i;j++){
                if(check(s.substr(i,j))){
                    count++;
                }
            }
        }
        return count;
    }
};