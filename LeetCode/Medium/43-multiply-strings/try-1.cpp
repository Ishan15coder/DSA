/*
 * Problem #43: Multiply Strings
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 9/14/2026, 9:33:52 PM
 * Link: https://leetcode.com/problems/multiply-strings/
 */

class Solution {
public:
string sts(string a,string b){
    int i = a.size() - 1;
    int j = b.size() - 1;
    int car = 0;
    string ans = "";

    while(i >= 0 || j >= 0 || car) {
        int x = 0, y = 0;
        if(i >= 0) x = a[i] - '0';
        if(j >= 0) y = b[j] - '0';
        
        int sum = x + y + car;
       
         ans += (sum % 10) + '0';
        car = sum / 10;
        i--;
        j--;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0")return "0";
            vector<string>bn;
            for(int i=num2.size()-1;i>=0;i--){
            int car=0;
             string ans="";
                for(int j=num1.size()-1;j>=0;j--){
                    int p = ((num2[i]-'0') * (num1[j]-'0'));
                    p+=car;
                    int a=p%10;
                    int b=p/10;
                    char o = a + '0';
                    char t = b + '0';
                  
                    ans+=o;
                    car=b;
                }
                if(car)ans+=car+'0';                           
                reverse(ans.begin(),ans.end()); 
                for(int k=0;k<num2.size()-1-i;k++)ans+='0';     
                bn.push_back(ans);
            }
            string an="0";
            for(int i=0;i<bn.size();i++){
                string ans=bn[i];
            an=sts(an,ans);
            }
            return an;
       
          
    }
};
