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
    ListNode* convert(vector<int> arr) {
        if (arr.empty())
            return nullptr;
        ListNode* head = new ListNode(arr[0]);
        ListNode* mover = head;
        for (int i = 1; i < arr.size(); i++) {
            ListNode* newNode = new ListNode(arr[i]);
            mover->next = newNode;
            mover = newNode;
        }
        return head;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> arr;
        for (int i = 0; i < lists.size(); i++) {
            ListNode* curr = lists[i];
            while (curr) {
                arr.push_back(curr->val);
                curr = curr->next;
            }
        }
        sort(arr.begin(), arr.end());
        return convert(arr);
    }
};