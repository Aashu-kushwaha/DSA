class Solution {
public:
    long long minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
int x = horizontalCut.size();
int y= verticalCut.size();

sort(horizontalCut.begin(),horizontalCut.end(),greater<int>());
sort(verticalCut.begin(),verticalCut.end(),greater<int>());

int i=0,j=0;
int horizontalPieces=1,verticalPieces=1;
long long cost=0;
while(i<x && j<y){
 if(horizontalCut[i]>=verticalCut[j]){
    cost+= horizontalCut[i]*verticalPieces;
    horizontalPieces++;
    i++;
 }
 else{
    cost+=verticalCut[j]*horizontalPieces;
    verticalPieces++;
    j++;
   }
}
while(i<x){
    cost+= horizontalCut[i]*verticalPieces;
    horizontalPieces++;
    i++;
}
while(j<y){
    cost+=verticalCut[j]*horizontalPieces;
    verticalPieces++;
    j++;
}
return cost;
        
    }
};