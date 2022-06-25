#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
using namespace std;
typedef long long ll;
void solve()
{
  ll n, m;
  cin >> n >> m;
  ll a[n];
  ll ans = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    ans = max(ans, a[i] | m);
  }
  cout << ans << endl;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
