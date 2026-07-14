/*
 * Problem : Sort the Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 4/9/2026, 2:02:38 PM
 * Link: https://codeforces.com/contest/451/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){

        ll n;
        cin>>n;
        vector<ll>a(n);
        v(a,n);
        vector<ll>b=a;
        sort(b.begin(),b.end());
        if(a==b){
            cout<<"yes"<<endl;
            cout<<1<<" "<<1;
        }
       else { 
        int id1=-1;
        int id2=-1;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]&&id1==-1){
                id1=i;
            }
            else if(a[i]!=b[i]&&id1!=-1){
                id2=i;
            }
        }
        reverse(a.begin()+id1,a.begin()+id2+1);
        if(id2==-1)cout<<"no"<<endl;
        else if(a==b){cout<<"yes"<<endl; 
            cout<<id1+1<<" "<<id2+1;
        }
        else cout<<"no"<<endl;
    
    }



    return 0;
}
