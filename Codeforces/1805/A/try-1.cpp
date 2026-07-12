/*
 * Problem : We Need the Zero
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 7/20/2025, 8:57:42 PM
 * Link: https://codeforces.com/contest/1805/problem/A
 */

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int ans=b[0];
        for(int i=1;i<n;i++){
            ans=ans^b[i];
        }
        if(ans == 0 && n % 2 == 0)
            cout << 0 << endl;
        else if(n % 2 != 0)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    
    


    return 0;
}
