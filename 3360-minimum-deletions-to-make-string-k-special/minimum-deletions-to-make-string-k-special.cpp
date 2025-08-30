class Solution {
public:
    int minimumDeletions(string word, int k) {
         unordered_map<int,int>mp;
       
        for(char &ch:word){
            mp[ch-'a']++;
        }
        vector<int>freq;
        for(auto i: mp){
         freq.push_back(i.second);
        }
        int result = word.length();
        sort(freq.begin(), freq.end()); 
  int n = freq.size();
        for(int i=0;i<n;i++){
            int deleteCount = 0;
           for(int j=0;j<n;j++){
            if(freq[j]<freq[i]){
               deleteCount+=freq[j] ;
            }
           else if(freq[j]>freq[i]+k){
              deleteCount+=freq[j]-(freq[i]+k);
           }
               
            
           }
           result=min(result,deleteCount);
        }
        return result;;
    }
};