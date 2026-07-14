/*
 * Problem : Even Modulo Pair
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 11/6/2025, 8:25:34 PM
 * Link: https://codeforces.com/contest/2164/problem/B
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
        int ch=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((a[j]%a[i])%2==0){
                    ch=1;
                    cout<<a[i]<<" "<<a[j]<<endl;
                    break;
                }
            }
            if(ch)break;
        }
        if(!ch)cout<<-1<<endl;
    }
return 0;
}
