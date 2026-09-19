/**
 * LeetCode #1290: Convert Binary Number in a Linked List to Integer
 * Difficulty: Easy
 * Language: Cpp
 * Date: 2026-09-19T14:42:46.553Z
 */

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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while(temp!=nullptr){
            count++;
            temp = temp->next;
        }
        count--;
        ListNode* cur = head;
        int num = 0;
        while(cur!=nullptr){
            num += (cur->val)*pow(2, count);
            count--;
            cur = cur->next;
        }
        return num;
    }
};