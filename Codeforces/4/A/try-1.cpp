/*
 * Problem : Watermelon
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 4/4/2025, 1:48:35 AM
 * Link: https://codeforces.com/contest/4/problem/A
 */

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0&&n>2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
