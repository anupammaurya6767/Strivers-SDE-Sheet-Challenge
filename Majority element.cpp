#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int cnt = 0;
	int ele = -1;
	for(int i=0;i<n;i++)
	{
		if(cnt==0)
		{
			cnt = 1;
            ele  = arr[i];
		}else if(arr[i]==ele)
		cnt++;
		else cnt--;

	}

	int cnt1 = 0;
	for(int i=0;i<n;i++)
	{
		if(ele==arr[i])
		cnt1++;
	}

	if(cnt1>(n/2))
	return ele;

	else
	return -1;
}
