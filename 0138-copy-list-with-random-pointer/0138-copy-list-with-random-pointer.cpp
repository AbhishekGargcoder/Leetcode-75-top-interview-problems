/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;https://assets.leetcode.com/uploads/2019/12/18/e1.png
    Node* random;
    https://assets.leetcode.com/uploads/2019/12/18/e1.png
    Node(int _val) {
        val = _val;https://assets.leetcode.com/uploads/2019/12/18/e1.png
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
         unordered_map<Node*,Node*>hm;
         Node * curr = head;
        while(curr){
            hm[curr] = new Node(curr->val);
            curr  = curr->next;
        }
        curr = head;
        Node *newHead = hm[head];
        while(curr){
            hm[curr]->next = hm[curr->next];
            if(hm.count(curr->random))
                hm[curr]->random =  hm[curr->random];
            // else hm[curr]->random = NULL;
            curr = curr->next;
        }
        return newHead;
    }
};