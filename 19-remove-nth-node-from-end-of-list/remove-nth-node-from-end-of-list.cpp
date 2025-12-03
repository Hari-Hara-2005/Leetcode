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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr || head->next == nullptr)
            return nullptr;
        ListNode* curr = head;
        int idx = 0;
        while (curr) {
            idx++;
            curr = curr->next;
        }
        curr = head;
        int target = idx - n;
        if (target == 0) {
            head = curr->next;
            delete curr;
            return head;
        }
        idx = 0;
        ListNode* prev = nullptr;
        while (curr) {
            if (idx == target) {
                prev->next = curr->next;
                delete curr;
                break;
            }
            idx++;
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};