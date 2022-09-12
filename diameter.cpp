

class Solution {
  public:
   int height(Node* root)
   {
      if(root==NULL)
      {
          return 0;
      }
      int leftnode=height(root->left);
      int rightnode=height(root->right);
      int height=max(leftnode,rightnode)+1;
      return height;
   }
    int diameter(Node* root) {
        if(root==NULL)
      {
          return 0;
      }
      int op1=diameter(root->left);
      int op2=diameter(root->right);
      int op3=height(root->left)+height(root->right)+1;
      int dia=max(op1,max(op2,op3));
      return dia;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/
int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        string s;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.diameter(root) << endl;
    }
    return 0;
}

// } Driver Code Ends
