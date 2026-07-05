/*
 * Problem : Vasilije in Cacak
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 8/9/2025, 9:47:16 AM
 * Link: https://codeforces.com/contest/1878/problem/C
 */

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,x;
        cin>>n>>k>>x;
        long long mis=k*(k+1)/2;
        long long mas=k*(2*n-k+1)/2;
        if(mis<=x&&mas>=x)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }
    



    return 0;
}
