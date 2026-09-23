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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode *final = nullptr;
        ListNode *last = nullptr;

        if (!list1 && !list2) return final;
        if (!list1 && list2) return list2;
        if (list1 && !list2) return list1;

        while(list1 && list2){
            ListNode *node = new ListNode;
            if (list1->val<list2->val){
                node->val = list1->val;
                node->next = nullptr;

                if(!final) {
                    final = node;
                    last = node;
                }
                else{
                    last->next = node;
                    last = node;
                }
                list1 = list1->next;
            }
            else{

                node->val = list2->val;
                node->next = nullptr;

                if(!final) {
                    final = node;
                    last = node;
                }
                else{
                    last->next = node;
                    last = node;
                }
                list2 = list2->next;
            }
        }

        if (list1 && !list2){
            last->next = list1;
        }
        if (!list1 && list2){
            last->next = list2;
        }
        return final;
    }
};