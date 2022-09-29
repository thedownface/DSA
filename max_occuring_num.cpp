int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int,int> count;
   int maxFreq=0;
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
        maxFreq=max(count[arr[i]],maxFreq);
        
        
    }
    
   int maxAns=0;
    int maxi=INT_MIN;
    int ans=-1;
  for(int i=0;i<n;i++)
  {
      if(maxFreq==count[arr[i]])
      {
          maxAns=arr[i];
          break;
      }
    }
    return maxAns;
}
