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

        // Comparing n and k and making k smaller than n
        if(n==k) return head;
        else if(n<k){
            int x =n;
            n = k;
            k = x;
        }

        int data;
        temp = head;
        int val1;
        ListNode *node1 = nullptr;
        for(int i=1; i<=count; i++){
            if(i==k){
                val1 = temp->val;
                node1 = temp;
            }
            if(i==n){
                node1->val = temp->val;
                temp->val = val1;
            }
            temp = temp->next;
        }

        return head;

    }
};