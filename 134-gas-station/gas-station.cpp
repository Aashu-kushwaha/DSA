class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
     int g=gas.size(),j;
     int c=gas.size();
    int sumG=0,sumC=0;
     for(int i=0;i<g;i++){
       sumG+=gas[i];
     }
     for(int i=0;i<c;i++){
       sumC+=cost[i];
     }
     if(sumG<sumC){
     return -1;
     }
    int result=0,total=0;
     for(int i=0;i<g;i++){
        total+= gas[i]-cost[i];
        if(total<0){
            total=0;
            result=i+1;
        }
     }
     return result;
    }
};