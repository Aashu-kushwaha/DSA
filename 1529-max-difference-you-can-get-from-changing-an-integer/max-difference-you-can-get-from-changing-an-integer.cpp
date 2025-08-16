class Solution {
public:
    int maxDiff(int num) {
        string s = to_string(num);
      string max= s,min=s;
      char toReplaceMax ='*';

      for(char ch :s){
        if(ch!='9'){
            toReplaceMax=ch;
            break;
        }
      }  
      if(toReplaceMax!='*'){
        replace(max.begin(),max.end(),toReplaceMax,'9');
      }
       char x='*';
       char y='*';

       if(s[0]!='1'){
        x=s[0];
        y='1';
       }
       else{
        for(int i=0;i<s.size();i++){
            if(s[i]!='0' && s[i]!='1'){
                x=s[i];
                y='0';
                break;
            }
        }
       }
      if(x!='*'){
        replace(min.begin(),min.end(),x,y);
      }
    return stoi(max)-stoi(min);
    }
};