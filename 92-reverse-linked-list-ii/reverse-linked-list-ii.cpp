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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *temp = head;
        int count = 1;

        ListNode *p1 = nullptr;
        ListNode *start = nullptr, *end = nullptr;

        while(temp){
            if (count == left-1) start = temp;
            if (count==left) p1 = temp;
            if (count==right) end = temp->next;
            
            count++;
            temp = temp->next;
        }

        ListNode* curr = p1;
        ListNode *rev = end;

        while(curr!=end){
            ListNode *node = new ListNode;
            node->val = curr->val;
            node->next = rev;
            rev = node;
            curr = curr->next;
        }
        
        if (start){ 
            start->next = rev;
            return head;
        }
        else{
            return rev;
        }

    }
};