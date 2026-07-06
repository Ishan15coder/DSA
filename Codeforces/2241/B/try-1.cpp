/*
 * Problem : Good times Good times
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 6/30/2026, 10:11:47 PM
 * Link: https://codeforces.com/contest/2241/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
  ll t;
  cin>>t;
  while(t--){
     ll x;
     cin>>x;
        
     ll cnt=to_string(x).size();
          ll z=1;
                for(int i=0;i<cnt;i++){
        z=z*10;
     }
        
           z++;
      cout<<z<<endl;
    }
}
