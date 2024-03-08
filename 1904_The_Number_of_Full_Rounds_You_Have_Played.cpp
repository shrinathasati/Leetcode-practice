class Solution {
public:
    int count(string time){
        int a=0;
        int b=0;
        for(int i=0;i<2;i++){
            a=a*10+time[i]-'0';
        }
        for(int i=3;i<5;i++){
            b=b*10+time[i]-'0';
        }
        int cal=60*a+b;
        return cal;
    }



    int numberOfRounds(string loginTime, string logoutTime) {
        int time1=count(loginTime);
        int time2=count(logoutTime);
        
        if(time1>time2){
            time2+=60*24;
        }

        int round2=time2/15;
        int round1=(time1+14)/15;
        

        return max(0,round2-round1);
    }
};class Solution {
public:
    int count(string time){
        int a=0;
        int b=0;
        for(int i=0;i<2;i++){
            a=a*10+time[i]-'0';
        }
        for(int i=3;i<5;i++){
            b=b*10+time[i]-'0';
        }
        int cal=60*a+b;
        return cal;
    }



    int numberOfRounds(string loginTime, string logoutTime) {
        int time1=count(loginTime);
        int time2=count(logoutTime);
        
        if(time1>time2){
            time2+=60*24;
        }

        int round2=time2/15;
        int round1=(time1+14)/15;
        

        return max(0,round2-round1);
    }
};