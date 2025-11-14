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
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while (curr) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    ListNode* findKthNode(ListNode* head, int k) {
        k--;
        ListNode* curr = head;
        while (k-- && curr) {
            curr = curr->next;
        }
        return curr;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* newHead = nullptr;
        ListNode* nextNode = nullptr;
        ListNode* kthNode = nullptr;
        ListNode* prev = nullptr;
        while (curr) {
            kthNode = findKthNode(curr, k);
            if (kthNode == nullptr) {
                break;
            }
            nextNode = kthNode->next;
            kthNode->next = nullptr;
            newHead = reverse(curr);
            if (prev == nullptr) {
                head = newHead;
            } else {
                prev->next = newHead;
            }
            prev = curr;
            curr = nextNode;
        }
        if (prev) {
            prev->next = curr;
        }
        return head;
    }
};