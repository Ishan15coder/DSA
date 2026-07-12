/*
 * Problem : Balanced Round
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 8/26/2025, 9:56:44 PM
 * Link: https://codeforces.com/contest/1850/problem/D
 */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
             cin>>a[i];
        }
        int cnt=1;
        sort(a.begin(),a.end());
        
        int len=1;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<=k){
                cnt++;
            }
            else{
                cnt=1;
            }
            len=max(len,cnt);
        }
        cout<<n-len<<endl;
    }



    return 0;
}
