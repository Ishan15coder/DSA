/*
 * Problem : Doremy's Paint 3
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 7/6/2025, 6:20:25 PM
 * Link: https://codeforces.com/contest/1890/problem/A
 */

#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        vector<int>p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        map<long long,long long>f;
        for(int i=0;i<n;i++){
            f[p[i]]++;
        }
        
        if(f.size()>2)cout<<"No"<<endl;
        else{
            long long f1=f.begin()->second;
            long long f2=f.rbegin()->second;
            if(f1==f2)cout<<"Yes"<<endl;    
            else if(n%2==1&&abs(f1-f2)==1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }

        t--;
    }


    return 0;
}
