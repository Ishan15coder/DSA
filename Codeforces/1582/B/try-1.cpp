/*
 * Problem : Luntik and Subsequences
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/30/2025, 10:17:07 PM
 * Link: https://codeforces.com/contest/1582/problem/B
 */

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long o=0;
        long long ze=0;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1)o++;
            if(a[i]==0)ze++;
        }
                long long ans=pow(2,ze)*o;
                cout<<ans<<endl;
        
    }



    return 0;
}
