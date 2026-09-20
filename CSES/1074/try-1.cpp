/*
 * Problem : CSES Task 1074
 * Difficulty: Unknown
 * Submission: Try 1
 * status: Accepted
 * Language: C++
 * Date: 9/20/2026, 7:45:50 PM
 * Link: https://cses.fi/problemset/task/1074
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long n;
	cin>>n;
	vector<long long>a(n);
	for(long long i=0;i<n;i++)cin>>a[i];
	sort(a.begin(),a.end());
    long long k=n/2;
    long long ans=0;
    for(long long i=0;i<n;i++){
        ans+=abs(a[i]-a[k]);
    }
    cout<<ans<<endl;

}

