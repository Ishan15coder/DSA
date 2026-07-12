/*
 * Problem : Feed the cat
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/22/2025, 10:28:32 PM
 * Link: https://codeforces.com/contest/955/problem/A
 */

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){   
int hh,mm;
cin>>hh>>mm;
double h,d,c,n;
cin>>h>>d>>c>>n;
double ans1,ans2;
if(hh>=20){
    double bn=ceil(h/n);;
    ans2=double(bn)*((0.8)*c);
    cout<<fixed<<setprecision(4)<<ans2<<endl;
}
else{
    double bn=ceil(h/n);
    ans1=double(bn)*c;
    int m=60-mm;
    m+=(20-(hh+1))*60;
    h+=d*m;
    bn=ceil(h/n);
    ans2=bn*((0.8)*c);
    cout<<fixed<<setprecision(4)<<min(ans1,ans2)<<endl;
}
}
