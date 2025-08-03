class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
    int n= capacity.size();
    vector<int> required(n,0);

    for(int i=0;i<n;i++){
        int required_rock = capacity[i]-rocks[i];
        required[i]=required_rock;
    } 
    int count=0;
    sort(required.begin(),required.end());
    for(int i=0;i<n;i++){
        if(required[i]==0){
            count++;
        }
        else{
            if(additionalRocks>=required[i]){
                additionalRocks-=required[i];
                count++;
            }
            else{
                break;
            }
        }
    }
    return count;
    }
};