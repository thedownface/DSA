/*implement the next permutation, which rearranges the list of numbers into Lexicographically next greater permutation of list of numbers. If such arrangement is not possible, it must be rearranged to the lowest possible order i.e. sorted in an ascending order. You are given an list of numbers arr[ ] of size N.*/
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
       
        
       // C++ program to demonstrate next lexicographically

	bool val
		= next_permutation(arr.begin(),
						arr.end());
	if (val == false)
	   sort(arr.begin(),arr.end());
	
	return arr;
}

};

