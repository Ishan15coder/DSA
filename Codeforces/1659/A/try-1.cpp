/*
 * Problem : Red Versus Blue
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/6/2026, 9:52:10 PM
 * Link: https://codeforces.com/contest/1659/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,r,b;
        cin>>n>>r>>b;
        string ans="";
        long long k=r/(b+1);
        long long er=r%(b+1);
        
        for(long long i=1;i<=b+1;i++){
            for(int j=0;j<k;j++)ans+='R';
            if(er>0){
                ans+='R';
                er--;
            }
            if(i!=b+1)ans+='B';
        }
   
        cout<<ans<<endl;
    }


    return 0;
}
