/*
 * Problem #423: Reconstruct Original Digits from English
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 9/15/2026, 8:30:20 PM
 * Link: https://leetcode.com/problems/reconstruct-original-digits-from-english/
 */

class Solution {
public:
    string originalDigits(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        string ans="";
        int z=0;
        int on=0;
        int tw=0;
        int th=0;
        int fo=0;
        int fi=0;
        int si=0;
        int se=0;
        int ei=0;
        int ni=0;
        while(mp['z']>=1&&mp['r']>=1&&mp['o']>=1&&mp['e']>=1){
            mp['o']--;
            mp['r']--;
            mp['z']--;
            mp['e']--;
            z++;
        }
        while(mp['t']>=1&&mp['w']>=1&&mp['o']>=1){
            mp['t']--;
            mp['w']--;
            mp['o']--;
            tw++;
        }
         while(mp['f']>=1&&mp['o']>=1&&mp['u']>=1&&mp['r']>=1){
            mp['f']--;
            mp['o']--;
            mp['u']--;
            mp['r']--;
            fo++;
        }
          while(mp['s']>=1&&mp['i']>=1&&mp['x']>=1){
            mp['s']--;
            mp['i']--;
            mp['x']--;
            si++;
        }
        while(mp['i']>=1&&mp['e']>=1&&mp['g']>=1&&mp['h']>=1&&mp['t']>=1){
            mp['i']--;
            mp['e']-=1;
            mp['g']--;
            mp['h']--;
            mp['t']--;
            ei++;
        }
        while(mp['t']>=1&&mp['h']>=1&&mp['r']>=1&&mp['e']>=2){
            mp['t']--;
            mp['h']--;
            mp['r']--;
            mp['e']-=2;
            th++;
        }
         while(mp['f']>=1&&mp['i']>=1&&mp['v']>=1&&mp['e']>=1){
            mp['f']--;
            mp['i']--;
            mp['v']--;
            mp['e']--;
            fi++;
        }
         while(mp['s']>=1&&mp['e']>=2&&mp['v']>=1&&mp['n']>=1){
            mp['s']--;
            mp['e']-=2;
            mp['v']--;
            mp['n']--;
            se++;
        }
         while(mp['i']>=1&&mp['e']>=1&&mp['n']>=2){
            mp['e']--;
            mp['n']-=2;
            mp['i']--;
            ni++;
        }
        while(mp['o']>=1&&mp['n']>=1&&mp['e']>=1){
            mp['o']--;
            mp['n']--;
            mp['e']--;
            on++;
        }
        
        
       
       
      
       
        
       
        while(z>0){
            ans+=(0+'0');
            z--;
        }
        while(on>0){
            ans+=(1+'0');
            on--;
        }
        while(tw>0){
            ans+=(2+'0');
            tw--;
        }
        while(th>0){
            ans+=(3+'0');
            th--;
        }
        while(fo>0){
            ans+=(4+'0');
            fo--;
        }
        while(fi>0){
            ans+=(5+'0');
            fi--;
        }
        while(si>0){
            ans+=(6+'0');
            si--;
        }
        while(se>0){
            ans+=(7+'0');
            se--;
        }
        while(ei>0){
            ans+=(8+'0');
            ei--;
        }
        while(ni>0){
            ans+=(9+'0');
            ni--;
        }
        return ans;
    }
};
