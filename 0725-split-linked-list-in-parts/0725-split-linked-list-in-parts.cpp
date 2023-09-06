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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n =0;
        for(ListNode* curr = head;curr;curr = curr->next) n++;
        int minNode = n/k;
        int rem = n%k;
        vector<ListNode*>res(k);
        ListNode* curr = head,*prev = NULL;
        int i  = 0;
        for(int i =0;curr&& i<k;i++,rem--){
            res[i] = curr;
            for(int j = 0;curr&&j<minNode+(rem>0);j++){
                prev = curr;
                curr = curr->next;
            }
            prev->next = NULL;
        }
        return res;
    }
};