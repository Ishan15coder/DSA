/*
 * Problem : Young Physicist
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 6/1/2025, 6:06:55 PM
 * Link: https://codeforces.com/contest/69/problem/A
 */

#include <iostream>
#include<set>
#include<string>
#include <cctype>
using namespace std;
int main() {
   int n;
   cin>>n;
   int sumx=0;
   int sumy=0;
   int sumz=0;
   for(int i=0;i<n;i++){
       int a,b,c;
       cin>>a>>b>>c;
       sumx+=a;
       sumy+=b;
       sumz+=c;
   }
   if(sumx==0&&sumy==0&&sumz==0){
       cout<<"YES";
   }
   else{
     cout<<"NO"; 
   }
    return 0;
}
