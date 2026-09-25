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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next) return head;
        ListNode *temp = head;
        ListNode *next;
        int size = 0;
        while(temp) {
            size++;
            temp =temp->next;
        }
        temp = head;
        k = k%size;
        while(k){
            while(temp->next->next!=nullptr){
                temp = temp->next;
            }
            next = temp->next;
            temp->next = nullptr;
            next->next = head;
            head = next;
            temp = head;
            k--;
        }
        return head;
    }
};