class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int>mp;
        for(int &i:arr){
            mp[i]++;
        }
        vector<int>freq;
        for(auto i: mp){
         freq.push_back(i.second);
        }

        sort(freq.begin(),freq.end());
        for(int j=0;j<freq.size()-1;j++){
            if(freq[j]==freq[j+1])
            return false;
        }
        return true;
    }
};