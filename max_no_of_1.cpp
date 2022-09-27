//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
#include<climits>
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int max_sum=INT_MIN,index;
	    for(int i=0;i<n;i++)
	    {   int sum=0;
	        for (int j=0;j<m;j++)
	        {
	            sum=sum+arr[i][j];
	        }
	         if(sum>max_sum && sum)
	         {
	             max_sum=sum;
	             index=i;
	         }
	         
	    }
	    if(max_sum>0)
	    {
	    return index;
	    }
	    else
	    {
	        return -1;
	    }
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
