/*
 * Problem : Everybody Likes Good Arrays!
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 7/22/2025, 10:01:20 PM
 * Link: https://codeforces.com/contest/1777/problem/A
 */

#include<iostream>
#include<vector>
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
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(a[i]%2==a[i+1]%2){
                ans++;
            }
        }
        cout<<ans<<endl;




    }

    return 0;
}
