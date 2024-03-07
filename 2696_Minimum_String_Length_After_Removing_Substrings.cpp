class Solution {
public:
    int minLength(string s) {
        int size=0;

        while(size!=s.size()){
            string temp="";
            int i=0;
            while(i<s.size()){
                if((s[i]=='A' && s[i+1]=='B') || (s[i]=='C' && s[i+1]=='D')){
                    i+=2;
                }
                else{
                    temp+=s[i];
                    i++;
                }
            }
            size=i;
            s=temp;
        }
        return s.size();c
    }
};