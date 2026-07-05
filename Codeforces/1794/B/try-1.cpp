/*
 * Problem : Not Dividing
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 8/31/2025, 1:19:01 PM
 * Link: https://codeforces.com/contest/1794/problem/B
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
        for(int i=0;i<n;i++){
        if(a[i]==1){
            a[i]++;
        }
    }
        for(int i=0;i<n-1;i++){
            while(a[i+1]%a[i]==0){
                a[i+1]=a[i+1]+1;
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }




    return 0;
}
