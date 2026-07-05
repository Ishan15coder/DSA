/*
 * Problem : MEX rose
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/25/2025, 9:00:18 PM
 * Link: https://codeforces.com/contest/2149/problem/C
 */

#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        unordered_map<int,int>hash;
        for(int i=0;i<n;i++){
            cin>>a[i];
            hash[a[i]]++;
        }
        sort(a.begin(),a.end());
        int cnt=0;
        cnt+=hash[k];
        int c=0;
        for(int i=0;i<k;i++){
            if(hash[i]<1)c++;
        }
        if(c>cnt)cnt=c;
        
        cout<<cnt<<endl;

    }


    return 0;
}
