/*
 * Problem : Reconnaissance 2
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 6/28/2025, 10:29:52 PM
 * Link: https://codeforces.com/contest/34/problem/A
 */

// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mind=abs(a[1]-a[0]);
    int ans1=1;
    int ans2=2;
    for(int i=1;i<n-1;i++){
        if(abs(a[i+1]-a[i])<mind){
            mind=abs(a[i+1]-a[i]);
            ans1=i+1;
            ans2=i+2;
        }
    }
    if(abs(a[n-1]-a[0])<mind){
    ans1=n;
    ans2=1;
    }
    cout<<ans1<<" ";
    cout<<ans2;
    
    return 0;
}
