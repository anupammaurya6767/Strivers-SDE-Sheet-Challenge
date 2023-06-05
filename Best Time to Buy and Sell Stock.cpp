#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int minn = INT_MAX;
    int profit = INT_MIN;
    int n = prices.size();
    for(int i=0;i<n;i++)
    {
        minn = min(minn,prices[i]);

        profit = max(profit,prices[i]-minn);
    }

    return profit;
}
