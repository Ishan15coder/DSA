/*
 * Problem : Elephant
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 5/29/2025, 11:09:42 AM
 * Link: https://codeforces.com/contest/617/problem/A
 */

#include<iostream>
#include<cmath>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1||n==2||n==3||n==4||n==5){
        cout<<1;
    }
    else{
    int steps=0;
    while (n!=0){
        if(n==5){
            n=n-5;
            steps+=1;
             break;
        }
        if(n>5){
            n=n-5;
            steps+=1;
            continue;
        }
        if(n==4){
            n=n-4;
            steps+=1;
             break;
        }
        if(n==3){
            n=n-3;
            steps+=1;
            break;
        }
        if(n==2){
            n=n-2;
            steps+=1;
            break;
        }
        if(n==1){
            n=n-1;
            steps+=1;
            break;
        }
}
cout<<steps;
    }
    return 0;
}
