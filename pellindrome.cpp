class Solution {
public:
    bool isPalindrome(string s) {
        
       
        string ans;
        for (int i = 0; i < length; i++){
            if((s[i]>=48 && s[i]<=57)||(s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122))
            {
                if((s[i]>=65 && s[i]<=90))
                ans+=s[i]+32;
                else 
                {
                    ans += s[i];
                }
            }
            
            
        }
        
        int length = ans.length();

for (int i = 0; i < length; i++)
if(ans[i] != ans[length-1-i]) 
return false;
return true;
        
    }
};