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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode *temp = head;
        ListNode *result = nullptr;
        ListNode *tail = nullptr;
        ListNode *prev = nullptr;

        while(temp){
            ListNode *node = new ListNode;
            if(!tail){
                if ((temp->next && temp->val!=temp->next->val)|| !temp->next){

                    if ((prev && prev->val!=temp->val)|| !prev){
                        node->val = temp->val;
                        node->next = nullptr;
                        result = node;
                        tail = node;
                    }
                }
            }
            else{
                if((temp->next && temp->next->val!=temp->val)||(!temp->next)){
                    if(prev->val!=temp->val){
                    node->val = temp->val;
                    node->next = nullptr;
                    tail->next = node;
                    tail = node;
                }
                }
            }
            prev = temp;
            temp = temp->next;
        }
        return result;
        
    }
};