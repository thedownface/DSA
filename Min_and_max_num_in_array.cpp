
pair<long long, long long> getMinMax(long long a[], int n) {
    long min_num=INT_MAX;
    long max_num=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min_num)
        {
            min_num=a[i];
        }
        if(a[i]>max_num)
        {
            max_num=a[i];
        }
    }
    
    pair<long long,long long> p;
    p.first=min_num;
    p.second=max_num;
    return p;
}
