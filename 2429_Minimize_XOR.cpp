class Solution {
public:
    vector<int> convert(int num,int &count){
        vector<int> temp(32,0);
        int i=31;
        while(num!=0){
            if(num%2==0){
                temp[i]=0;
            }
            if(num%2==1){
                temp[i]=1;
                count++;
            }
            num=num/2;
            i--;
        }
        return temp;
    }
    
    int minimizeXor(int num1, int num2) {
        int count1=0;
        int count2=0;

        vector<int> a=convert(num1,count1);
        vector<int> b=convert(num2,count2);
        cout<<count1<<endl;
        cout<<count2<<endl;
        if(count1==count2){
            return num1;
        }
        else if(count1>count2){
            vector<int> temp(32,0);
            for(int i=0;i<a.size();i++){
                if(a[i]==1){
                    temp[i]=1;
                    count2--;
                }
                if(count2==0){
                    break;
                }
            }

            int ans=0;
            for(int i=0;i<32;i++){
                ans=ans+temp[i]*pow(2,31-i);
            }
            return ans;
        }

        else{
            int rem=count2-count1;
            cout<<rem<<endl;
            vector<int> temp(32,0);
            for(int i=31;i>=0;i--){
                if(a[i]==0){
                    temp[i]=1;
                    rem--;
                }
                
                if(rem==0){
                    break;
                }
            }
 
            int ans=0;
            for(int i=0;i<32;i++){
                ans=ans+temp[i]*pow(2,31-i);
            }
            cout<<ans;
            return ans+num1;

        }
    }
};