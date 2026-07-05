/*
 * Problem : Target Practice
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 7/8/2025, 11:51:24 AM
 * Link: https://codeforces.com/contest/1873/problem/C
 */

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int points=0;
        for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            char p;
            cin>>p;
            if(p=='X'){
               points+=min({i,j,9-i,9-j})+1;
            }
        }
    }
        cout<<points<<endl;
        t--;
    }


    return 0;
}
