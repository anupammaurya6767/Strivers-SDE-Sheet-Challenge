#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int cnt1 = 0, cnt2 = 0;
    int n = arr.size();
    int ele1 = INT_MIN,ele2 = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(cnt1==0 && ele2!=arr[i])
        {
            cnt1 = 1;
            ele1 = arr[i];
        }
        else if(cnt2==0 && ele1!=arr[i])
        {
            cnt2 = 1;
            ele2 = arr[i];
        }
        else if(ele1==arr[i])
        cnt1++;
        else if(ele2==arr[i])
        cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
    }

    cnt1=0;
    cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(ele1==arr[i])
        cnt1++;
        else if(ele2==arr[i])
        cnt2++;
    }

    vector<int>ls;
    if(cnt1>n/3)
    ls.push_back(ele1);
    
    if(cnt2>n/3)
    ls.push_back(ele2);

    sort(ls.begin(),ls.end());


    return ls;

}
