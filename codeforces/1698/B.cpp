#include <bits/stdc++.h>
using namespace std;

void solve_function()
{
  int n, k;
  cin >> n >> k;
  int sandBlock[n];

  // Array Input Parameters
  for (int i = 0; i < n; i++)
  {
    cin >> sandBlock[i];
  }
  int count = 0;

  // Checking if the middle element is greater than the sum of the left and right element
  for (int j = 1; j < n - 1; j++)
  {
    if (sandBlock[j] > (sandBlock[j - 1] + sandBlock[j + 1]))
      count++;
  }

  //  when k = 1
  if (k == 1)
  {
    count = (n + 1) / 2 - 1;
    cout << count << endl;
  }
  else
  {
    cout << count << endl;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve_function();
  }
  return 0;
}
