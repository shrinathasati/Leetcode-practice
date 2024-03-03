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
    int size_l(ListNode* head){
        ListNode* temp=head;
        int n=0;
        while(temp){
            n++;
            temp=temp->next;
        }
        return n;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=size_l(head);
        if((size-n+1)==1){
            head=head->next;
        }
        else{
            ListNode* p=head;
            ListNode* q=head->next;
         
            for(int i=1;i<(size-n);i++){
                p=p->next;
                q=q->next;
            }
            p->next=q->next;
        }
        return head;
    }
};