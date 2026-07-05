/*
 * Problem : Little Elephant and Rozdil
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 6/29/2025, 11:19:25 AM
 * Link: https://codeforces.com/contest/205/problem/A
 */

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int min=INT_MAX;
    int mnc=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(b[i]<min){
            ans=i+1;
            min=b[i];
            mnc=1;
            continue;
        }
        if(b[i]==min){
            mnc++;
        }
    }
    if(mnc>1)cout<<"Still Rozdil";
    else{
        cout<<ans;
    }
    return 0;
}
