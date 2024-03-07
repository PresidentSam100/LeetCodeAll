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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum = new ListNode();
        ListNode* sumNext = sum;
        int carry = 0;
        while (l1 || l2) {
            int digitSum = carry;
            if (l1 != NULL) {
                digitSum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                digitSum += l2->val;
                l2 = l2->next;
            }
            carry = digitSum / 10;
            sumNext->next = new ListNode(digitSum % 10);
            sumNext = sumNext->next;
        }
        if (carry != 0) {
            sumNext->next = new ListNode(carry);
        }
        return sum->next;
    }
};
