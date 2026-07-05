/*
 * Problem : Comparison String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 8/27/2025, 9:34:14 AM
 * Link: https://codeforces.com/contest/1837/problem/B
 */

#include<iostream>
    #include<vector>
    using namespace std;
    int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            string s;
            cin>>s;
            vector<int>a(n+1);
            int cnt=1;
            int l=1;
            int k=2;
            for(int i=0;i<n-1;i++){
                if(s[i]==s[i+1]){
                    cnt++;
                }
                else{
                    l=max(cnt,l);
                    cnt=1;
                }
            }
            l=max(cnt,l);
            cout<<l+1<<endl;
        }

        return 0;
    }
