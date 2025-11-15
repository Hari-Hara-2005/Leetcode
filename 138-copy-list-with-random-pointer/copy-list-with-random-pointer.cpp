/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* curr = head;
        map<Node*, Node*> mp;
        while (curr) {
            Node* newNode = new Node(curr->val);
            mp[curr] = newNode;
            curr = curr->next;
        }
        curr = head;
        Node* copyNode = nullptr;
        while (curr) {
            copyNode = mp[curr];
            copyNode->next = mp[curr->next];
            copyNode->random = mp[curr->random];
            curr = curr->next;
        }
        return mp[head];
    }
};