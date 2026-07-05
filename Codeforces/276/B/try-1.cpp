/*
 * Problem : Little Girl and Game
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/2/2025, 9:55:50 AM
 * Link: https://codeforces.com/contest/276/problem/B
 */

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt=0;
    while(s.length()>0){
        cnt++;
        unordered_map<char,int>has;
        for(int i=0;i<s.size();i++){
            has[s[i]]++;
        }
        int od=0;
        for(auto it:has){
            if(it.second%2!=0)od++;
        }
        if(od<=1){
            if(cnt%2!=0)cout<<"First"<<endl;
            else cout<<"Second"<<endl;
            break;
        }
        s.erase(s.begin());
    }
    if(s.length()==0){
    if(cnt%2!=0)cout<<"First"<<endl;
    else cout<<"Second"<<endl;
    }


    return 0;
}
