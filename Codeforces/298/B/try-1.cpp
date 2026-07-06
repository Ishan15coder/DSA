/*
 * Problem : Sail
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/7/2026, 10:07:13 PM
 * Link: https://codeforces.com/contest/298/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    long long x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    vector<char>a(t);
    for(long long i=0;i<t;i++){
        cin>>a[i];
    }
    long long c=y1-x1;
    // if(x1<0||y1<0)c=-c;
    long long d=y2-x2;
    // if(x2<0||y2<0)c=-c;
    long long s=0,e=0,n=0,w=0;
    if(c<0){
        w=abs(c);
    }
    if(c>0){
        e=abs(c);
    }
    if(d<0){
        s=abs(d);
    }
    if(d>0){
        n=abs(d);
    }
    long long ans=0;
    if(n==0&&e==0&&s==0&&w==0)cout<<ans<<endl;
    else{
    for(long long i=0;i<t;i++){
        if(a[i]=='N'&&n>0){
            n--;
        }
        if(a[i]=='S'&&s>0){
            s--;
        }
        if(a[i]=='E'&&e>0){
            e--;
        }
        if(a[i]=='W'&&w>0){
            w--;
        }
        if(n==0&&e==0&&s==0&&w==0){
            ans=i+1;
            break;
        }
    }
    if(n==0&&e==0&&s==0&&w==0)cout<<ans<<endl;
    else cout<<-1<<endl;
    }
    return 0;
}
