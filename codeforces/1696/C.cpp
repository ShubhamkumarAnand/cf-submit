#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 4;
  cin >> t;
  while (t--)
  {
    ll n, x, k, sum1 = 0, sum2 = 0;
    cin >> n >> k;
    vector<pair<ll, ll>> v, vv;
    for (int i = 0; i < n; i++)
    {
      cin >> x;
      sum1 += x;
      if (i != 0 && v[v.size() - 1].first == x)
        v[v.size() - 1].second++;
      else if (x % k == 0)
      {
        ll temp = 1, c;
        while (x % k == 0)
        {
          temp *= k;
          c = x / k;
          x /= k;
        }
        if (i != 0 && v[v.size() - 1].first == c)
          v[v.size() - 1].second += temp;
        else
          v.push_back({c, temp});
      }
      else
        v.push_back({x, 1});
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> x;
      sum2 += x;
      if (i != 0 && vv[vv.size() - 1].first == x)
        vv[vv.size() - 1].second++;
      else if (x % k == 0)
      {
        ll temp = 1, c;
        while (x % k == 0)
        {
          temp *= k;
          c = x / k;
          x /= k;
        }
        if (i != 0 && vv[vv.size() - 1].first == c)
          vv[vv.size() - 1].second += temp;
        else
          vv.push_back({c, temp});
      }
      else
        vv.push_back({x, 1});
    }
    // for (auto i:v) cout<<i.first<<" "<<i.second<<"\n";
    // for (auto i:vv) cout<<i.first<<" "<<i.second<<"\n";
    int ok = 1;
    if (sum1 != sum2 || vv.size() != v.size())
      ok = 0;
    else
    {
      for (int i = 0; i < v.size(); i++)
      {
        if (v[i].first != vv[i].first || v[i].second != vv[i].second)
          ok = 0;
      }
    }
    if (ok)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
