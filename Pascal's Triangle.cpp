// Given an integer numRows, return the first numRows of Pascal's triangle.

#include <bits/stdc++.h>

vector<long long int>generate(int n)
{
  long long int ans = 1; 
  vector<long long int>as;
  as.push_back(1);
  for(int i=1;i<n;i++)
  {
    ans = ans*(n-i);
    ans = ans/i;
    as.push_back(ans);
  }

  return as;

}

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>>ans;
  for(int i=1;i<=n;i++)
  {
     ans.push_back(generate(i));
  }

  return ans;
}
