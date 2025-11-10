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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return nullptr;
        ListNode* curr = head;
        int n = 0;
        while (curr) {
            n++;
            curr = curr->next;
        }
        int mid = n / 2;
        curr = head;
        while (curr) {
            mid--;
            if (mid == 0)
                break;
            curr = curr->next;
        }
        ListNode* deleteNode = curr->next;
        curr->next = curr->next->next;
        delete deleteNode;
        return head;
    }
};