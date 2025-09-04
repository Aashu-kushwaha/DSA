class Solution {
public:
    
    int find(vector<int>& tops, vector<int>& bottoms,int val) {
      int top=0,bottom=0 ,n = tops.size();
      for(int i=0;i<n;i++){
        if(tops[i]!=val && bottoms[i]!=val) return -1;
        else if(tops[i]!=val) top++;
        else if (bottoms[i]!=val) bottom++;
      }  
      return min(top,bottom);
    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int result = INT_MAX ;
      for(int val=1;val<=6;val++){
       int swap = find(tops,bottoms,val);
        if(swap!= -1){
            result= min(result,swap);
        }
       }
      
      return result ==INT_MAX?-1:result;
    }
};