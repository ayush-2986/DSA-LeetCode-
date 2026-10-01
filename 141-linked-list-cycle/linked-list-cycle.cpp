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
    bool hasCycle(ListNode *head) {
        if (head==nullptr) return false;
        if (head == head->next) return true;
        int count = 0;

        ListNode *slow = head, *fast = head;
        while(fast && fast->next){
            if (count && slow==fast) return true;
            count++;
            slow = slow->next;
            fast = fast->next->next;
        }
        return false;
    }
};