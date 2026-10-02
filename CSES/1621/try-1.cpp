/*
 * Problem : CSES Task 1621
 * Difficulty: Unknown
 * Submission: Try 1
 * status: Accepted
 * Language: C++
 * Date: 10/2/2026, 7:47:27 PM
 * Link: https://cses.fi/problemset/task/1621
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	set<int>b;
	for(int i=0;i<n;i++){
	    b.insert(a[i]);
	}
	cout<<b.size()<<endl;


}

