/*
 * Problem : Don't Try to Count
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 7/6/2025, 10:32:04 PM
 * Link: https://codeforces.com/contest/1881/problem/A
 */

#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int m;
        cin>>m;
        string ox;
        cin>>ox;
        string x=ox;
        string s;
        cin>>s;
        int ch=0;
        int c=0;
        while(true){
        if (ox.find(s) != std::string::npos) {
            ch=1;
            break;
        }
            ox+=ox;
            c++;
        if(ox.length()>100)break;
         }
        if(!ch) cout<<-1<<endl;
        else cout<<c<<endl;
        t--;
    }


    return 0;
}
