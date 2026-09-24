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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum = nullptr;
        ListNode* last = nullptr;
        int carry = 0;
        while(l1 || l2 || carry){
            
            if (!l1){
                l1 = new ListNode;
                l1->val = 0;
                l1->next = nullptr;
                
            }
            if (!l2){
                l2 = new ListNode;
                l2->val = 0;
                l2 ->next =  nullptr;
            }

            ListNode* node = new ListNode;
            int temp = (l1->val+l2->val)+carry;
            if (temp<10) node->val = temp;
            else node->val = temp%10;
            carry = temp/10;
            
            node->next = nullptr;
            if(!sum){
                sum = node;
            }
            else last->next = node;
            last = node;
            
            l1 = l1->next;
            l2 = l2->next;
        }
        return sum;
    }
};