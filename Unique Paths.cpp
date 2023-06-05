#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
	int N = m+n-2;
	int r = m-1;
	long long ans = 1;
	for(int i=1;i<=r;i++)
	{
      ans = ans*(N-r+i);
	  ans = ans/i;
	}

	return (int)ans;

	// total paths is = m+n-2Cm-1 or m+n-1Cn-1
}
