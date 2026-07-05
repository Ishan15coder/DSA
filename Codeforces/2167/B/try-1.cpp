/*
 * Problem : Your Name
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 10/28/2025, 8:17:10 PM
 * Link: https://codeforces.com/contest/2167/problem/B
 */

#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,to;
        cin>>s>>to;
        // unordered_map<char,int>a;
        // unordered_map<char,int>b;
        // for(int i=0;i<s.length();i++){
        //     a[s[i]]++;
        // }
        // for(int i=0;i<to.length();i++){
        //     b[to[i]]++;
        // }
        sort(s.begin(),s.end());
        sort(to.begin(),to.end());
         if(s==to)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }


    return 0;
}
