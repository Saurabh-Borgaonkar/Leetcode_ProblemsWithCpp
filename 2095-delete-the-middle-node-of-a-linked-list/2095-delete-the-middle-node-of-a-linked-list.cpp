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
    ListNode* deleteMiddle(ListNode* head) {
      
         ListNode* temp=head;
         
        int i=1;
        while(temp->next!= NULL){
            temp=temp->next;
            i++;
        }
        
        int mid=i/2;
        temp=head;
        if(i==1){
            return NULL;
        }
        if(i==2){
            head->next=NULL;
            return head;
        }
        for(int i=1;i<mid;i++){
            temp=temp->next;
           
        }
         cout<<temp->val;
        temp->next=temp->next->next;
        return head;
    }
};