#include<iostream>
#include <math.h>
using namespace std;
int main ()
{
  double p, s, mi, sum, emi, bank[2], sq;
  int y, n, k, i, yrs, l = 0;

  cin >> p;
  cin >> y;
  for (k = 0; k < 2; k++)
    {
      cin >> n;
      sum = 0;
      for (i = 0; i < n; i++)
	{
	  cin >> yrs>>s;
	
	  mi = 0;
	  sq = pow ((1 + s), yrs * 12);
	  emi = (p * s) / (1 - 1 / sq);
	  sum = sum + emi;
	}
      bank[l++] = sum;

    }

  if (bank[0] < bank[1])

    cout << ("Bank A");

  else

    cout << ("Bank B");

  return 0;

}