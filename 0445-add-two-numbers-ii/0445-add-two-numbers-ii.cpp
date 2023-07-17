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
    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
        stack<int>s1,s2;
        stack<ListNode*>s3;
        ListNode*curr1 = head1,*curr2 = head2;
        while(curr1!=NULL){
            cout<<curr1->val<<" ";
            s1.push(curr1->val);
            curr1 = curr1->next;
        }
        cout<<endl;
        while(curr2!=NULL){
            cout<<curr2->val<<" ";
            s2.push(curr2->val);
            curr2 = curr2->next;
        }
        cout<<endl;
        int carry = 0;
        ListNode*res,*curr3 = NULL;
        while(!s1.empty()||!s2.empty()){
            int n1 = 0,n2 =0;
            if(!s1.empty())  n1 = s1.top(),s1.pop();
            if(!s2.empty())  n2 = s2.top(),s2.pop();
            int sum = (n1+n2+carry)%10;
            ListNode*node = new ListNode(sum);
            s3.push(node);
            cout<<node->val<<" ";
            carry = (n1+n2+carry)/10;
       }
       if(carry!=0){
           s3.push(new ListNode(carry));
       }
       while(!s3.empty()){
           if(curr3==NULL){
               res = s3.top();s3.pop();
               curr3 = res;
           }
           else { curr3->next = s3.top(),s3.pop();
           curr3 = curr3->next; }
           cout<<curr3->val<<" ";
       }
       return res;
    }
};


