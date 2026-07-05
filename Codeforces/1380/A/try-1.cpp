/*
 * Problem : Three Indices
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 12/31/2025, 1:43:41 PM
 * Link: https://codeforces.com/contest/1380/problem/A
 */

#include<bits/stdc++.h>
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
        int c=0;
        int a1,a2,a3;
        for(int i=1;i<n-1;i++){
            if(a[i]>a[i-1]&&a[i]>a[i+1]){
                c=1;
                a1=i;
                a2=i+1;
                a3=i+2;
                break;
            }
        }
        if(!c)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<a1<<" "<<a2<<" "<<a3<<endl;
        }

    }



    return 0;
}
