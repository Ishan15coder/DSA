/*
 * Problem : Double-ended Strings
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/12/2026, 7:41:24 PM
 * Link: https://codeforces.com/contest/1506/problem/C
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string a,b;
    cin>>a>>b;
    int n=a.length();
    int m=b.length();
    int le=0;
    for(int l=1;l<=min(m,n);l++){
    for(int i=0;i+l<=n;i++){
        for(int j=0;j+l<=m;j++){
            string sra=a.substr(i,l);
            string srb=b.substr(j,l);
            if(sra==srb)le=max(le,l);
        }
    }
}
int op=n+m-(2*le);
cout<<op<<endl;
}

    return 0;
}
