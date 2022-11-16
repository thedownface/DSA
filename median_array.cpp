class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		   int median;
		   sort(v.begin(),v.end());
		   int N=v.size();
		   int l=0;
		   int r=v.size()-1;
		   int  mid=(l+r)/2;
		   if (N%2==0){
		       median=(v[mid]+v[mid+1])/2;
		   }
		   else
		   {
		       median=v[mid];
		   }
		   return median;
		   
		   
		}
};
