/*
** solving subtask 1 
** 10 / 100
*/
#include<bits/stdc++.h>
using namespace std;
long long count_swaps(vector<int>S)
{
 int n = (S.size()) / 2;
 if(n == 1)
  {
    if(S[0] < S[1])
     {
       return 0;
     }
    else 
     {
      return 1;
     } 

  }
}
