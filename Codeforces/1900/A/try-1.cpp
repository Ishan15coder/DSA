/*
 * Problem : Cover in Water
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 7/6/2025, 11:01:34 AM
 * Link: https://codeforces.com/contest/1900/problem/A
 */

#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt3=0;
        int cntd=0;
        for(int i=0;i<n;i++){
            if(cnt3==3){
                break;
            }
            if(s[i]=='.'){
                cntd++;
                cnt3++;
            }
            else{
                cnt3=0;
            }
        }
        if(cnt3==3){
            cout<<2<<endl;
        }
        else{
            cout<<cntd<<endl;
        }
        t--;
    }


    return 0;
}
