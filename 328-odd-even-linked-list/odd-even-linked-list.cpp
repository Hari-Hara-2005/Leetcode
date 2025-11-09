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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        vector<int> arr;
        ListNode* curr = head;
        while (curr) {
            arr.push_back(curr->val);
            if (curr->next == nullptr)
                break;
            curr = curr->next->next;
        }
        curr = head->next;
        while (curr) {
            arr.push_back(curr->val);
            if (curr->next == nullptr)
                break;
            curr = curr->next->next;
        }
        curr = head;
        int idx = 0;
        while (curr) {
            curr->val = arr[idx++];
            curr = curr->next;
        }
        return head;
    }
};