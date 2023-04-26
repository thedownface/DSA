int missingNumber(int A[], int N)
{
    int missing_sum=0;
    int total_sum=0;
    for(int i=0;i<N-1;i++)
    {
        missing_sum+=A[i];
    }
    
    for(int i=1;i<=N;i++)
    {
        total_sum+=i;
    }
    return total_sum-missing_sum;
