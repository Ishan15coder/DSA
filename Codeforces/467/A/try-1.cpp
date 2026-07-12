/*
 * Problem : George and Accommodation
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 5/29/2025, 2:18:21 PM
 * Link: https://codeforces.com/contest/467/problem/A
 */

#include<iostream>
#include<cmath>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        int p,q;
        cin>>p>>q;
        if(q-p>=2)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
