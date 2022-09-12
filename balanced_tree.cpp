class Solution{

    public:
    pair<bool,int> isBalancedfast(Node* root){
         if(root == NULL){
            pair<bool,int> p = make_pair(true,0);
            return p;
        }
        pair<int,int> left = isBalancedfast(root->left);
        pair <int,int> right = isBalancedfast(root->right);
       
        
        bool leftans = left.first;
        bool rightans = right.first;
        
        bool diff = abs(left.second - right.second ) <=1;
        pair<bool,int> ans;
        ans.second = max(left.second, right.second)+1;
        
       if(leftans && rightans && diff)
            ans.first =true;
        else{
            ans.first = false;
        }
        return ans;
    }
    
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {   isBalancedfast(root).first;}
};


//{ Driver Code Starts.

/* Driver program to test size function*/
