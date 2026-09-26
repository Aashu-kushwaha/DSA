class Solution {
public:
bool solve(vector<int>& arr, int i){
    if(i<0 ||i>=arr.size() || arr[i]<0){
        return false;
    }

    if(arr[i] == 0){
        return true;
    }

    arr[i] = arr[i]*(-1);
    int left = solve(arr,i-arr[i]);
    int right = solve(arr,i+arr[i]);

    return left || right ;
}
    bool canReach(vector<int>& arr, int start) {
       return solve(arr,start);
        
    }
};