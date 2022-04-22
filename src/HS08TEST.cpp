#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x;
  float y, balance = 0;
  cin >> x >> y;
  if(x % 5 == 0 && x + 0.5 <= y)
    balance  = y - x - 0.5;
  else
    balance = y;
  printf("%.2f",balance);
  return 0;
}
