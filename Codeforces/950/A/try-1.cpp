/*
 * Problem : Left-handers, Right-handers and Ambidexters
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++17 (GCC 7-32)
 * Date: 9/7/2025, 1:59:13 AM
 * Link: https://codeforces.com/contest/950/problem/A
 */

#include<iostream>
using namespace std;
int main(){
    int l,r,a;
    cin>>l>>r>>a;
    int ans=0;
    if(l==r){
        if(a%2==0){
            ans=l*2+a;
        }
        else{
            ans=l*2+a-1;
        }
    }
    else{
        int mi=min(l,r);
        int ma=max(l,r);
            if(mi+a==ma)ans=ma*2;
            else if(mi+a>ma){
                a=a-(ma-mi);
                if(a%2==0)ans=ma*2+a;
                else{
                    ans=ma*2+a-1;
                }
            }
            else{
                mi=mi+a;
                ans=mi*2;
            }
    }
    cout<<ans<<endl;
    
    return 0;
}
