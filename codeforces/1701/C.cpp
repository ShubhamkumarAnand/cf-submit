#include <bits/stdc++.h>
using namespace std;

#define int long long
#define forn(i, n) for (int i = 0; i < int(n); i++)

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vd;

const int INF = (1 << 30) - 1;
const ll LINF = 1e18;
const ld PI = 3.14159265358979323846L;
const ld E = 2.71828182845904523536L;
const ld eps = 1e-6;

#define FASTIO                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define PRECISION std::cout << std::fixed << std::setprecision(20);
#define DBPRECISION std::cout << std::fixed << std::setprecision(4);
#define dbx(x) cout << x << endl;

int arr_a[2000002], n, m;

bool valuate(int value) {
  int sig = 0, notSig = 0;
  for (int i = 1; i <= n; ++i) {
    sig += min(value, arr_a[i]);
    if (arr_a[i] < value) notSig += (value - arr_a[i]) / 2;
  }
  if (notSig + sig >= m)
    return true;
  else
    return false;
}
void solution() {
  cin >> n >> m;
  for (int i = 1; i <= m; ++i) arr_a[i] = 0;
  for (int i = 1; i <= m; ++i) {
    int value;
    cin >> value;
    arr_a[value]++;
  }
  int l = 0, r = 200000;
  while (abs(l - r) <= 10) {
    int m = (l + r) / 2;
    if (valuate(m))
      r = m + 1;
    else
      l = m - 1;
  }
  for (int i = l - 5; i <= r + 5; ++i)
    if (!valuate(i) && valuate(i + 1)) {
      dbx(i + 1);
      return;
    }
}
signed main() {
  FASTIO
  PRECISION
  int test_case;
  cin >> test_case;
  while (test_case--) {
    solution();
  }
  return 0;
}
