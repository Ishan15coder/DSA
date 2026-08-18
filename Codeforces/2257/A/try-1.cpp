/*
 * Problem : Creating Abbreviations
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 8/17/2026, 8:18:24 PM
 * Link: https://codeforces.com/contest/2257/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    vector<string>p(n);
    vector<string>ab(m);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<m;i++){
        cin>>ab[i];
    }
    for(int i=0;i<n;i++){
            std::transform(p[i].begin(), p[i].end(), p[i].begin(), [](unsigned char c) {
        return std::toupper(c);
    });
}
    set<char>s;
    for(int i=0;i<n;i++){
        s.insert(p[i][0]);
    }
    int ch=0;

    for(int i=0;i<m;i++){
        for(int j=0;j<ab[i].length();j++){
            if(!s.count(ab[i][j])){
                ch=1;
                break;
            }
        }
        if(ch)break;
    }
    if(ch)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
    return 0;
}
