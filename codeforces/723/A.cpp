#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)

int main()
{
  vector<int> v;
  forn(i, 3)
  {
    int num;
    cin >> num;
    v.push_back(num);
  }
  sort(v.begin(), v.end());
  int dist = (((v[2] - v[1]) + (v[1] - v[0])));
  cout << dist << endl;
}
