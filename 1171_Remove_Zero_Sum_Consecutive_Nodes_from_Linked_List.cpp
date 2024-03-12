/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* solve(vector<int> list){
        ListNode dummy(0);
        ListNode* temp=&dummy;
        for(int i=0;i<list.size();i++){
            if(list[i]!=0){
                temp->next=new ListNode(list[i]);
                temp=temp->next;
            }
        }
        temp->next=NULL;
        return dummy.next;
    }
    ListNode* removeZeroSumSublists(ListNode* head) {
        

        vector<int> list;
        while(head){
            list.push_back(head->val);
            head=head->next;
        }

        int n=list.size();
        // cout<<n;
        
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=list[j];
                if(sum==0){

                for(int k=i;k<=j;k++){
                    list[k]=0;
                }
                break;
                }
            }
        }

        
        
        ListNode* ans= solve(list);
        return ans;
    }
};