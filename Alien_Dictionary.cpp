class Solution{
    public:
    void graph(string &a,string &b,vector<vector<int>> &adj){
        int n=a.size();
        int m=b.size();
        int size=min(n,m);
        for(int i=0;i<size;i++){
            if(a[i]!=b[i]){
                adj[a[i]-'a'].push_back(b[i]-'a');
                break;
            }
        }
    }
    string findOrder(string dict[], int N, int K) {
        //code here
        vector<vector<int>> adj(K);
        
        for(int i=0;i<N-1;i++){
            string str1=dict[i];
            string str2=dict[i+1];
            graph(str1,str2,adj);
        }
        vector<int> in(K,0);
        for(int i=0;i<K;i++){
            for(auto it:adj[i]){
                in[it]++;
            }
        }
        
        string ans="";
        queue<int> q;
        for(int i=0;i<K;i++){
            if(in[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            
            ans+=char(node+97);
            for(auto it:adj[node]){
                in[it]--;
                if(in[it]==0){
                    q.push(it);
                }
            }
        }
        
        return ans;
    }
};