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
        ListNode *temp = head;
        int number = 0;
        while(temp){
            number++;
            temp = temp->next;
        }
        
        if (n!=number){
            temp = head;
            for(int i=1;i<number-n;i++){
                temp = temp->next;
            }
            if (temp->next) temp->next = temp->next->next;
            else temp->next = nullptr;
        }
        else{
            head = head->next;
        }
        return head;
    }
};