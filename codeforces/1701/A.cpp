#include <bits/stdc++.h>
using namespace std;
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

void solve() {
  int sum = 0;
  int a[2][2];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> a[i][j];
      sum += a[i][j];
    }
  }
  if (sum > 3) {
    cout << 2 << endl;
  } else if (sum > 0) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
}

int main() {
  FASTIO
  PRECISION

  int test;
  cin >> test;

  while (test--) {
    solve();
  }
  return 0;
}
