class Solution {
public:
 static  bool compare(vector<int>& a, vector<int>& b){
    return a[1]>b[1];
   }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),compare);
        int ans=0;
       for(int i=0;i<boxTypes.size();i++){
        int box = boxTypes[i][0];
        int size = boxTypes[i][1];

        if(truckSize>=box){
            ans+=box*size;
            truckSize= truckSize-box;
        }
        else{
            ans+=truckSize*size;
            break;
        }
       }
       return ans;
    }
};