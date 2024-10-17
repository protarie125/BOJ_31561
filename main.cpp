#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

double m;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> m;
  if (m <= 30) {
    cout << fixed << setprecision(1) << m / 2;
  } else {
    double ans = m - 30;
    ans *= 3;
    ans /= 2;
    ans += 15;
    cout << fixed << setprecision(1) << ans;
  }

  return 0;
}