/*
 * Problem : Lever
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 8/10/2025, 8:18:35 PM
 * Link: https://codeforces.com/contest/2131/problem/A
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
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int chi=1;
    int chit=1;
    int ans=0;
     while(true){
            bool step1 = false; 
            bool step2 = false; 
            
            for(int i = 0; i < n; i++){
                if(a[i] > b[i]){
                    a[i]--;
                    step1 = true;
                    break; 
                }
            }

            if(!step1){ 
                ans++;
                break;
            }

          
            for(int i = 0; i < n; i++){
                if(a[i] < b[i]){
                    a[i]++;
                    step2 = true;
                    break;
                }
            }
            ans++;
        }
    cout<<ans<<endl;
}
    




    return 0;
}
