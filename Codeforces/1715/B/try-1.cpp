/*
 * Problem : Beautiful Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/3/2026, 7:35:45 PM
 * Link: https://codeforces.com/contest/1715/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        long long mi=k*b;
        long long ma=(k*b) + (k-1)*n;
        if(s<mi||s>ma){
            cout<<-1<<endl;
        }
        else{
            vector<long long>ans(n,0);
            ans[0]=mi;
            s-=mi;
            for(int i=0;i<n;i++){
                long long add=min(k-1,s);
                ans[i]+=add;
                s-=add;

            }
            for(long long i=0; i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }


        
    }

    return 0;
}
