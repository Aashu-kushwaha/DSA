class Solution 
{
public:
    int maxDiff(int num) 
    {
        string s = to_string(num);
        string max_s = s;
        string min_s = s;

        for (char c : s) 
        {
            if (c != '9') 
            {
              for (char &ch : max_s) 
                {
                    if (ch == c)
                        ch = '9';
                }
                break; 
            }
        }
        if (s[0] != '1') 
        {
            char to_replace = s[0];
            for (char &ch : min_s) 
            {
                if (ch == to_replace)
                {
                    ch = '1';
                }
            }
        } 
        else 
        {
            for (int i = 1; i < s.size(); i++) 
            {
                if (s[i] != '0' && s[i] != '1') 
                {
                    char to_replace = s[i];
                    for (char &ch : min_s) 
                    {
                        if (ch == to_replace)
                        {
                            ch = '0';
                        }
                    }
                    break;
                }
            }
        }

        int max_val = stoi(max_s);
        int min_val = stoi(min_s);

        return max_val - min_val;
    }
};