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
            if(!tail){
                if ((temp->next && temp->val!=temp->next->val)|| !temp->next){

                    if ((prev && prev->val!=temp->val)|| !prev){
                        result = temp;
                        tail = result;
                    }
                }
            }
            else{
                if((temp->next && temp->next->val!=temp->val)||(!temp->next)){
                    if(prev->val!=temp->val){
                    tail->next = temp;
                    tail = tail->next;
                }
                }
            }
            prev = temp;
            temp = temp->next;
        }
        if (tail) tail->next = nullptr;
        return result;
        
    }
};