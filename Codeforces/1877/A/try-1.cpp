/*
 * Problem : Goals of Victory
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 7/6/2025, 10:49:49 PM
 * Link: https://codeforces.com/contest/1877/problem/A
 */

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int s=0;
        for(int i=0;i<n-1;i++){
            int p;
            cin>>p;
            s+=p;
        }
        cout<<-(s)<<endl;;

        t--;
    }


    return 0;
}
