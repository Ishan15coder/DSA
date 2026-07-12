/*
 * Problem : Sum of Medians
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 12/30/2025, 1:12:53 AM
 * Link: https://codeforces.com/contest/1440/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long s=n*k;
        vector<long long>a(s);
        for(long long i=0;i<s;i++){
            cin>>a[i];
        }
       long long p = n * k;

		long long sum = 0; 
		while (k--)
		{
			p-= (n / 2 + 1);
			sum += a[p]; 
		}
		cout << sum << endl;
        
    }




    return 0;
}
