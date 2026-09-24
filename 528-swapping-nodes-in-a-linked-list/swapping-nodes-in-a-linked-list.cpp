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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        int count =0;
        while(temp){
            count++;
            temp = temp->next;
        }
        int n = count-k+1;

        int data;
        ListNode* temp2 = head;
        ListNode *node1 = nullptr;
        ListNode *node2 = nullptr;
        for(int i=1; i<=count; i++){
            if(i==k){
                node1 = temp2;
            }
            if(i==n){
                node2 = temp2;
            }
            temp2 = temp2->next;
        }
        int temp3 = node1->val;
        node1->val = node2->val;
        node2->val = temp3;

        return head;

    }
};