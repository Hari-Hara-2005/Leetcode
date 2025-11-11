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
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;
        int sum = 0;
        int carry = 0;
        while (curr1 && curr2) {
            sum = carry + curr1->val + curr2->val;
            if (sum >= 10) {
                ListNode* newNode = new ListNode(sum % 10);
                temp->next = newNode;
                temp = newNode;
                carry = sum / 10;
            } else {
                carry = 0;
                ListNode* newNode = new ListNode(sum);
                temp->next = newNode;
                temp = newNode;
            }
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        while (curr1) {
            sum = carry + curr1->val;
            if (sum >= 10) {
                ListNode* newNode = new ListNode(sum % 10);
                temp->next = newNode;
                temp = newNode;
                carry = sum / 10;
            } else {
                carry = 0;
                ListNode* newNode = new ListNode(sum);
                temp->next = newNode;
                temp = newNode;
            }
            curr1 = curr1->next;
        }
        while (curr2) {
            sum = carry + curr2->val;
            if (sum >= 10) {
                ListNode* newNode = new ListNode(sum % 10);
                temp->next = newNode;
                temp = newNode;
                carry = sum / 10;
            } else {
                carry = 0;
                ListNode* newNode = new ListNode(sum);
                temp->next = newNode;
                temp = newNode;
            }
            curr2 = curr2->next;
        }
        if (carry == 1) {
            ListNode* newNode = new ListNode(carry);
            temp->next = newNode;
            temp = newNode;
        }
        return dummyNode->next;
    }
};