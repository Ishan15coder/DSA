/*
 * Problem : Perfect Number
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/24/2025, 2:01:40 PM
 * Link: https://codeforces.com/contest/919/problem/B
 */

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int k;
    cin>>k;
    vector<long long>j;
    int s=0;
    for(long long i=10;i<500000000;i++){
        s=0;
        long long p=i;
        while(p>0){
        s+=p%10;
        p=p/10;
        }
        if(s==10)j.push_back(i);
        if(j.size()==k)break;
    }
    cout<<j[k-1]<<endl;



    return 0;
}
