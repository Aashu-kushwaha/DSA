class Solution {
public:
    int minMaxDifference(int num) {
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
       char toReplaceMin ='*';

      for(char ch :s){
        if(ch!='0'){
            toReplaceMin=ch;
            break;
        }
      }  
      if(toReplaceMin!='*'){
        replace(min.begin(),min.end(),toReplaceMin,'0');
      }
    return stoi(max)-stoi(min);
    }
};