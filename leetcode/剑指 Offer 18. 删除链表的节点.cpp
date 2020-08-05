/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        if(head->val==val){
            return head->next;
        }
        ListNode* curr = head;
        //ListNode* prev = head;
        while(curr->next){
            if(curr->next->val==val){
                curr->next=curr->next->next;
                break;
            }
            
            curr=curr->next;
 
        }
        return head;
    }
};