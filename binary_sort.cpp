 void binSort(int A[], int N)
    {
        int count0=0,count1=0;
       for(int i=0;i<N;i++)
       {
           if(A[i]==0)
           {
               count0++;
           }
           if(A[i]==1)
           {
               count1++;
           }
       }
       for(int i=0;i<count0;i++)
       {
           A[i]=0;
       }
       for(int i=count0;i<N;i++)
       {
           A[i]=1;
       }
       
    }
