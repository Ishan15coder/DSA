/*
 * Problem : Mislove Has Lost an Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/24/2025, 9:45:00 AM
 * Link: https://codeforces.com/contest/1204/problem/B
 */

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,l,u;
    cin>>n>>l>>u;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n-l+1;i++){
        a[i]=1;
    }
    for(int i=n-l+1;i<n;i++){
        a[i]=a[i-1]*2;
    }
    for(int i=0;i<1;i++){
        b[i]=1;
    }
    int cnt=1;
    for(int i=1;i<n;i++){
        if(cnt<u){
        b[i]=b[i-1]*2;
        cnt++;
        }
        else b[i]=b[i-1];
    }
    int mi=0,ma=0;
    for(int i=0;i<a.size();i++){
        mi+=a[i];
    }
    for(int i=0;i<a.size();i++){
        ma+=b[i];
    }
    cout<<mi<<" "<<ma;
    return 0;
}
