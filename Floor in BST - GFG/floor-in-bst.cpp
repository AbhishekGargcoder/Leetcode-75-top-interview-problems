//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};


// } Driver Code Ends
// Function to search a node in BST.
class Solution{

public:
    int floor(Node* root, int x) {
        // Code here
        int res =-1,df=INT_MAX;
        Node * curr=root;
   //  Node * curr=root;
     //   return 0;
     Node* f=NULL;
        while(curr){
            if(curr->data==x){
                return x;
            }
         //   else if(curr->data<res&&res!=-1|| curr->data<x ){
           else if(curr->data < x){
                int diff=x-curr->data;
                if(df>diff){
                    res = curr->data;
                    df=diff;
                }
               // f = curr;
                curr= curr->right;
                
            }
            else{
                curr=curr->left;
            }
        }
      //  if(f->data > x) return -1;
      //  return f!=NULL?f->data : -1;
       return res;
     //   return 0;
    }
};

//{ Driver Code Starts.

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;
        Solution obj;
        cout << obj.floor(root, s) << "\n";
    }
}

// } Driver Code Ends