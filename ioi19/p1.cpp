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


/*
** subtask 1 and 2 and 5
** 50 / 100
*/
#include "shoes.h"
using namespace std;
long long count_swaps(std::vector<int> s) 
{
	int n = s.size() / 2;
	long long swaps = 0;
	for(int i = 0 ; i < n * 2 ; i+=2)
	{

		for(int j = i + 1;j < n *2 ; j++)
		{
			if (s[j] == -s[i]) 
    {
				  for (int k = j-1; k > i; k--) 
    {
				  swap(s[k], s[k+1]);
					 swaps++;
				 }
			if (s[i] > s[i+1]) 
    {
					swap(s[i], s[i+1]);
					swaps++;
				}
				break;
			}
		}
	}
	return swaps;
}

/*
** subtask 1 ,3 and 4
** total 45 / 100
*/

#include "shoes.h"
using namespace std;
long long count_swaps(std::vector<int> s) 
{
	int n = s.size() / 2;
	long long swaps = 0;
	long long l = 0;
	long long r = 0;
	for(int i = 0 ; i < n * (1 << 1) ; i++)
	{
		if(S[i] < 0)
		{
			l += abs(i - r);
			r += 2;
		}   
	}
	swaps = l;
	return swaps;
}

// still trying to get full AC 85/100
