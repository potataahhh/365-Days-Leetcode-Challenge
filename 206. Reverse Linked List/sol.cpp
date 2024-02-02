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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev =new ListNode(0),*curr=head;
        prev->next = head;

        while(curr && curr->next){
            ListNode* temp = prev->next;
            prev->next = curr->next;
            curr->next=curr->next->next;
            prev->next->next= temp;
        }
        return prev->next;
    }
};
