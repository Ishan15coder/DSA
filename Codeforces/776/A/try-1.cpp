/*
 * Problem : A Serial Killer
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/12/2025, 1:56:51 PM
 * Link: https://codeforces.com/contest/776/problem/A
 */

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string>a;
    for(int i=0;i<2;i++){
        string p;
        cin>>p;
        a.push_back(p);   
    }
    int n;
    cin>>n;
    cout<<a[0]<<" "<<a[1]<<endl;
    while(n--){
        string p;
        string q;
        cin>>p>>q;
        if(p==a[0]){
            a[0]=q;
        }
        else if(p==a[1]){
            a[1]=q;
        }
        else if(q==a[0]){
            a[0]=p;
        }
        else{
            a[1]=p;
        }
        cout<<a[0]<<" "<<a[1]<<endl;
    }

    return 0;
}
