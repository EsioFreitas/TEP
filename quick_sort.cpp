#include <bits/stdc++.h>
#define fle(i, a, b) for (int (i) = (a); (i) <= (b); (i)++)
#define flt(i, a, b) for (int (i) = (a); (i) < (b); (i)++)
#define fgt(i, a, b) for (int (i) = (a); (i) > (b); (i)--)
#define fge(i, a, b) for (int (i) = (a); (i) >= (b); (i)--)
#define log(var, sep) (cerr << #var << " = " << (var) << (sep))
#define pb push_back
#define nl (cout << endl)
#define pf first
#define ps second

using namespace std;

using ll = long long;
using ii = pair<ll, ll>;
using vi = vector<ll>;
using vp = vector< ii >;

const int MAX { 1000010 }; // 10^6 + 10
const ll oo { (1ll << 62) }; // 2^62
const ll MOD { 1000000007 }; // 10^9 + 7
const double PI = acos(-1.0); // 3.14

int main (int argc, char* argv[]) {
	int n, x;
	if (argc < 2) {
		n = 94585981;
	} else cin >> n;

	vi arr;
	flt (i, 0, n) {
		cin >> x;
		arr.pb(x);
	}

	chrono::steady_clock::time_point begin = chrono::steady_clock::now();

	sort(arr.begin(), arr.end());
	if (argc >= 2){
		for (auto & v : arr) cout << v << " ";
		nl;
	}
	chrono::steady_clock::time_point end= chrono::steady_clock::now();
	cout << "microseconds = " << chrono::duration_cast<chrono::microseconds>(end - begin).count() <<endl;

	return 0;
}