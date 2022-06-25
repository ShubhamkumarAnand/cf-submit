#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
using namespace std;
typedef long long ll;

int main()
{
  // your code goes here
  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    ll i = 0, cnt = 0;
    if (arr[0] != 0)
    {
      cnt++;
    }
    while (i < n - 1)
    {
      if (arr[i] == 0 && arr[i + 1] != 0)
      {
        cnt++;
        i++;
      }
      else
      {
        i++;
      }
    }
    if (cnt >= 2)
    {
      cout << 2 << endl;
    }
    else
    {
      cout << cnt << endl;
    }
  }
  return 0;
}
