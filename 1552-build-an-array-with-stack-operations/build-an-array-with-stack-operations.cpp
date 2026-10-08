class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int size = target.size();
        vector<string>ans;
        stack<int>st;
        int i = 0,stream = 1;
        
        while(i<size && stream<=n){
            ans.push_back("Push");
            if(target[i] == stream){
                i++;

            }
            else{
                ans.push_back("Pop");
            }
            stream++;

        }
        return ans;
    }
};