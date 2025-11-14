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
        ListNode* curr = head;
        for (int i = 1; i < arr.size(); i++) {
            ListNode* newNode = new ListNode(arr[i]);
            curr->next = newNode;
            curr = newNode;
        }
        return head;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> arr;
        while (list1) {
            arr.push_back(list1->val);
            list1 = list1->next;
        }
        while (list2) {
            arr.push_back(list2->val);
            list2 = list2->next;
        }
        sort(arr.begin(), arr.end());
        return convert(arr);
    }
};