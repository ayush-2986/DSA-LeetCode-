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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        // if (head->next == nullptr) return head;
        // ListNode *temp = head;
        // ListNode *selected = nullptr;
        // int count = 1;
        // for(int i=1; i<=right; i++){

        //     ListNode *node = new ListNode;
        //     if (count==left){
        //         selected = temp;
        //     }
        //     if (count==right){
        //         selected->next = nullptr;
        //         break;
        //     }
        //     count++;
        //     if (selected!=nullptr) selected = selected->next;
        //     temp = temp->next;
        // }
        // return head;

        if (head->next == nullptr) return head;
        ListNode *temp = head;
        ListNode *cursor = nullptr;
        int count = 1;
        int leftNo, rightNo, jumps;

        while(temp){
            if(count>=left && count<=right){
                jumps = right-left;
                leftNo = temp->val;
                cursor = temp;
                for(int i=0; i<jumps;i++){
                    cursor = cursor->next;
                }
                rightNo = cursor->val;
                cursor->val = leftNo;
                temp->val = rightNo;
                left +=1;
                right -= 1;
            }

            count++;
            temp = temp->next;
        }
        return head;
    };
};