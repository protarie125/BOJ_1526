#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

bool is47(int i) {
	while (0 < i) {
		const auto r = i % 10;
		if (r != 4 && r != 7) {
			return false;
		}

		i /= 10;
	}

	return true;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto ans = int{ 0 };
	for (auto i = 4; i <= n; ++i) {
		if (is47(i)) {
			ans = i;
		}
	}

	cout << ans;

	return 0;
}