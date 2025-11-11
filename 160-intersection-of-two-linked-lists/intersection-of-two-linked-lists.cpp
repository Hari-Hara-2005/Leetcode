/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curr1 = headA;
        ListNode* curr2 = headB;
        map<ListNode*,int>mp;
        while(curr1)
        {
            mp[curr1]++;
            curr1 = curr1->next;
        }
        while(curr2)
        {
            if(mp.find(curr2) != mp.end())
            {
                return curr2;
            }
            curr2 = curr2->next;
        }
        return nullptr;
    }
};