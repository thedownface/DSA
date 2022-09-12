/
class Solution{
    public:
 
    
    
    int height(struct Node* node){
     if(node==NULL)
     {
     return 0;
     }
     int leftnode=height(node->left);
     int rightnode=height(node->right);
     int maxi=max(leftnode,rightnode)+1;
     return maxi;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string treeString;
		getline(cin,treeString);
		Node* root = buildTree(treeString);
        Solution ob;
		cout<<ob.height(root)<<endl;
    }
    return 0;
}
// } Driver Code Ends
