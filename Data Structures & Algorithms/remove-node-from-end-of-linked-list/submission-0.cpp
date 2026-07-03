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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0,head);
        ListNode* left=dummy;
        ListNode* fast=head;

        while(n>0){
            fast=fast->next;
            n--;
        }

        while(fast!=nullptr){
            left=left->next;
            fast=fast->next;
        }

        left->next=left->next->next;
        return dummy->next;
    }
};
