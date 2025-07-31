#include<bits/stdc++.h>
using namespace std;


void Solve()
{
    int M = 1 , L = 1 , W = 1;
    while(true)
    {
        int r = Theory(M,L,W); 
        if(r == 0)
        {
            return;
        }
        if(r == 1)
        {
            if(M == 6)
            {
                M = 1;
            }
            else
            {
              M++;
            }
           
        }
        if(r == 2)
        {
          if(L == 10)
          {
              L = 1;
          }
          else
          {
              L++;
          }
        }
        if(r == 3)
        {
            if(W == 6)
            {
                W = 1;
            }
            else
            {
                W++;
            }
        }
    }
    return;
    
}
