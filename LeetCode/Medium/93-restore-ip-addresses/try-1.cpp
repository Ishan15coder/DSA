/*
 * Problem #93: Restore IP Addresses
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/31/2026, 4:00:35 PM
 * Link: https://leetcode.com/problems/restore-ip-addresses/
 */

class Solution {
public:
    vector<string>ans;
    int part=0;
    string t="";
    bool val(string t){
        if(t.size()>3)return false;
        if(t.size()>1&&t[0]=='0')return false;
        int k=stoi(t);
        if(k>255)return false;
        return true;
    }
    void gen(string s,int idx,string t){
        if(part==4){
            if(idx==s.length())ans.push_back(t);
            return;
        }
        for(int i=idx;i<s.length();i++){
       string piece=s.substr(idx,i-idx+1);
            if(val(piece)&&part<4){
              if (t.empty())t += piece;
              else t += "." + piece;

                part++;
             gen(s,i+1,t);
                part--;
                if (t.size() == piece.size()) {
                    t.clear();
                }
                else {
                    t.erase(t.size() - piece.size());
                    t.pop_back();
                }
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        
        gen(s,0,t);

    return ans;
    }
};
