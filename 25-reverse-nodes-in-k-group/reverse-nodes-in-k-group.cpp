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
    ListNode* reverseKGroup(ListNode* head, int k) {

        if (!head || !head->next) return head;

        ListNode *temp = head;
        ListNode *result = nullptr;
        ListNode *resultLast = nullptr;

        int ele = 0;
        while(temp){
            ele++;
            temp = temp->next;
        }
        temp = head;
        int group = floor(ele/k);

        for (int i=1; i<=group; i++){
        

            ListNode *rev = nullptr;
            ListNode *last = nullptr;

            int count = 1;
            while(count<=k){
                ListNode *node = new ListNode;
                node->val = temp->val;
                node->next = rev;
                if(!rev) last = node;
                rev = node;

                count++;
                temp = temp->next;
            }
            // return rev;

            if(!result){
                result = rev;
                resultLast = last;
            }
            // return last;
            else{
                resultLast->next = rev;
                resultLast = last;
            }
            
        }
        resultLast->next = temp;
        return result;
    }
};