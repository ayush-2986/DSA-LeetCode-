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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head, *cur;
        while(temp && temp->next){
            cur = temp->next;
            while(cur && cur->val==temp->val){
                cur = cur->next;
            }
            temp->next = cur;
            cur = nullptr;
            temp = temp->next;
        }
        return head;
    }
};