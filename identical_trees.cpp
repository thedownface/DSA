class Solution {
  public:
    int setBits(int N) {
        int s=0;
        while( N != 0){
            int num =N %2;
            s=s+num;
            N = N/2;
            
        }
        return s;
    }
};
