/*
 * Problem : Boy or Girl
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 5/29/2025, 10:53:26 AM
 * Link: https://codeforces.com/contest/236/problem/A
 */

#include<iostream>
#include<cmath>
#include<set>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<char>p;
    for(int i=0;i<s.size();i++){
        p.insert(s[i]);
    }
    if(p.size()%2!=0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }

    return 0;
}
