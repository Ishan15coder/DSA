/*
 * Problem : Jagged Swaps
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 7/6/2025, 5:42:01 PM
 * Link: https://codeforces.com/contest/1896/problem/A
 */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        vector<int>p(n);
        int checker=0;
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        vector<int>k=p;
        sort(k.begin(),k.end());
        if(k==p)checker=1;
        /*for(int i=2;i<n-1;i++){
            if(p[i-1]<p[i]&&p[i]>p[i+1]){
                checker=1;
                break;
            }
        }*/
        if(p[0]==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }

    return 0;
}
