class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<int>act_idx(n);
        iota(act_idx.begin(), act_idx.end(), 0);//Fill with 0,1,2,3...n-1
        auto lambda = [&](int i,int j){
            return positions[i]<positions[j];
        };
        sort(act_idx.begin(), act_idx.end(), lambda);
        vector<int>result;
        stack<int>st;
        for(int &i :act_idx){
            if(directions[i]=='R'){
                st.push(i);
            }
            else{
                while(!st.empty() && healths[i]>0){
                    int top_idx = st.top();
                    st.pop();
                    if(healths[top_idx]>healths[i]){
                    healths[top_idx] -= 1;
                    healths[i] = 0;
                    st.push(top_idx);
                    }
                    else if(healths[top_idx]<healths[i]){
                        healths[i]-=1;
                        healths[top_idx] = 0;
                    }
                    else{
                        healths[i]=0;
                        healths[top_idx] = 0;                        
                    }
                }
            }
        }
        for(int i =0;i<n;i++){
            if(healths[i]>0){
                result.push_back(healths[i]);
            }
        }
        return result;
    }
};