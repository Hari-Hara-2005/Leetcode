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
        if(head == nullptr || head->next == nullptr)return nullptr;
        ListNode* curr = head;
        int cnt = 0;
        while(curr)
        {
            cnt++;
            curr = curr->next;
        }
        int mid = cnt - n;
        curr = head;
        if(cnt == n)
        {
            head = curr->next;
            delete curr;
            return head; 
        }
        while(curr)
        {
            mid--;
            if(mid == 0)break;
            curr = curr->next;
        }
        ListNode* deleteNode = curr->next;
        curr->next = curr->next->next;
        delete deleteNode;
        return head;
    }
};