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
    ListNode* swapPairs(ListNode* head) {

        if(!head || !head->next) return head;

        ListNode *temp = head->next->next;;
        ListNode *newHead  = head->next;
        newHead->next = head;
        ListNode *tail = newHead->next;
        tail->next=nullptr;

        while(temp && temp->next!=nullptr){
            ListNode *next = temp->next->next;
            tail->next = temp->next;
            tail = tail->next;
            tail->next = temp;
            temp->next = nullptr;
            tail = temp;

            // if(temp->next && temp->next->next) temp = temp->next->next;
            // else temp = temp->next;
            // if (temp->next && temp->next->next && temp->next->next->next){
            //     temp = temp->next->next;
            // }
            // else if(temp->next && temp->next->next){
            //     temp = temp->next->next;
            //     // break;
            // }
            // else{
            //     temp=nullptr;
            // }
            temp = next;
        }
        if(temp!=nullptr){
            tail->next = temp;
            temp->next = nullptr;
        }
        return newHead;

    }
};