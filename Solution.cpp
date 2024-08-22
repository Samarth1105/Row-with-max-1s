class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
      int maxRow=-1;
      int n= arr[0].size();
      int m= arr.size();
      
      int row=0, col=n-1;
      
      while(row<m && col>=0){
          if(arr[row][col]==0){
              row++;
          }else{
              maxRow= row;
              col--;
          }
      }
      return maxRow;
    }
};
