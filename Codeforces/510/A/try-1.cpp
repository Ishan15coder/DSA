/*
 * Problem : Fox And Snake
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 4/6/2025, 8:04:50 PM
 * Link: https://codeforces.com/contest/510/problem/A
 */

#include<iostream>
using namespace std;
int main(){
    int x=0;
    int n,m;
    cin>>n>>m;
   for(int i=0;i<n;i++){
    if(i % 2 == 0) {
        // Even rows are full of '#'
        for(int j = 0; j < m; j++) {
            cout << "#";
        }
    } else {
        if((i / 2) % 2 == 0) {
            // Odd row, # is at the end
            for(int j = 0; j < m - 1; j++) cout << ".";
            cout << "#";
        } else {
            // Odd row, # is at the start
            cout << "#";
            for(int j = 0; j < m - 1; j++) cout << ".";
        }
    }
    cout << endl;
   }


    return 0;
}
