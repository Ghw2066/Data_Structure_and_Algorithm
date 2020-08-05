/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//O（n）
//遍历法
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
};
//递归法
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }

        ListNode* curr = reverseList(head->next);
        //head->next 是 curr, curr->next指向head，形成环
        head->next->next=head;
        //要删掉head->next这条环路，只留下curr->next指向head
        head->next=NULL;
        
        return curr;
    }
};