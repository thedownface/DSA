//given an array, rotate the array by one position in clock-wise direction.
void rotate(int arr[], int n)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
    }
}

