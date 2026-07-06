/*
 * Problem : Unconventional Pairs
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/25/2025, 8:18:37 PM
 * Link: https://codeforces.com/contest/2149/problem/B
 */

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ma=INT_MIN;
        for(int i=1;i<n;i++){
            if((i+1)%2==0){
            ma=max((a[i]-a[i-1]),ma);
            }           
        }
        cout<<ma<<endl;
    }




    return 0;
}
