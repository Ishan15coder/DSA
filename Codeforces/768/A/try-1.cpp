/*
 * Problem : Oath of the Night's Watch
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/15/2025, 2:22:37 PM
 * Link: https://codeforces.com/contest/768/problem/A
 */

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    unordered_map<int,int>h;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        h[a[i]]++;
    }
    sort(a.begin(),a.end());
    
    int ans=n-(h[a[0]]+h[a[n-1]]);
    if(ans<0)cout<<0<<endl;
    else cout<<ans<<endl;    
    



    return 0;
}
