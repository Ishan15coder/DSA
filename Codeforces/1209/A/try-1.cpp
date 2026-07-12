/*
 * Problem : Paint the Numbers
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/9/2025, 2:07:07 AM
 * Link: https://codeforces.com/contest/1209/problem/A
 */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<int>div;
    div.push_back(a[0]);
    int cnt=1;
    for(int i=1;i<n;i++){
        int ch=0;
        for(int j=0;j<div.size();j++){
            if(a[i]%div[j]==0){
                ch=1;
                break;
            }
        }
        if(!ch){
            div.push_back(a[i]);
        }
    }
    cout<<div.size();




    return 0;
}
