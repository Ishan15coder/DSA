/*
 * Problem : Isamatdin and His Magic Wand!
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 10/28/2025, 9:11:06 PM
 * Link: https://codeforces.com/contest/2167/problem/C
 */

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int o=0,e=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0)e=1;
            else o=1;
        }
        
        if(o&&e){
            sort(a.begin(),a.end());
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
