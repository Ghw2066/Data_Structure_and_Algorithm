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
    vector<int> reversePrint(ListNode* head) {
        deque<int> dq;
        vector<int> ans;
        ListNode* curr=head;

        while(curr){
            dq.push_front(curr->val);
            curr=curr->next;
        }
        for(auto x: dq){
            ans.push_back(x);
        }
        return ans;
    }
};