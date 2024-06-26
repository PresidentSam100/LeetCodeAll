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
        ListNode* ans = new ListNode();
        ListNode* temp = ans;
        while (list1 || list2) {
            if (list1 == NULL) {
                temp->next = new ListNode(list2->val);
                list2 = list2->next;
            } else if (list2 == NULL) {
                temp->next = new ListNode(list1->val);
                list1 = list1->next;
            } else if (list1->val < list2->val) {
                temp->next = new ListNode(list1->val);
                list1 = list1->next;
            } else {
                temp->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            temp = temp->next;
        }
        return ans->next;
    }
};
