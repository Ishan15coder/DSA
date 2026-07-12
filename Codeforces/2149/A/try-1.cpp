/*
 * Problem : Be Positive
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/25/2025, 8:09:15 PM
 * Link: https://codeforces.com/contest/2149/problem/A
 */

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>hash;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            hash[k]++;
        }
        int c=0;
        if(hash[-1]%2!=0)c+=2;
        c+=hash[0];
        cout<<c<<endl;
    }


    return 0;
}
