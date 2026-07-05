/*
 * Problem : Swap and Delete
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 1/1/2026, 9:35:27 PM
 * Link: https://codeforces.com/contest/1913/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int z=0,o=0;
        int n=s.length();
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')o++;
            else z++;
        }
        int lt=0;
        for(int i=0;i<n;i++){

            if(s[i]=='0'&&o>0){
                o--;
                lt++;
            }
            else if(s[i]=='1'&&z>0){
                z--;
                lt++;
            }
            else{
                break;
            }
        }
        cout<<s.length()-lt<<endl;



    }




    return 0;
}
