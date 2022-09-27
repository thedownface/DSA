class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //find starting row index and column index;
       int row=matrix.size();
       int col=matrix[0].size();
       int r=row*col-1;
       int l=0;
        

            
         
        int mid=l+(r-l)/2;
    
           while(l<=r)
           {
               int element=matrix[mid/col][mid%col];
               if(element==target)
               {
                   return true;
                   break;
               }
               else if(target > element)
               {
                   l=mid+1;
               }
               else
               {
                   r=mid-1;
               }
               mid=l+(r-l)/2;
           }
        return false;
        
        
    }
};
