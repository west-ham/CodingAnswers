#define _USE_MATH_DEFINES
#include <algorithm>
#include <cstdio>
#include <functional>
#include <iostream>
#include <cfloat>
#include <climits>
#include <cstring>
#include <cmath>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<ll, int> ll_i;
typedef pair<double, int> d_i;
typedef pair<ll, ll> ll_ll;
typedef pair<double, double> d_d;
struct edge { int u, v; ll w; };

ll MOD = 1000000007;
ll _MOD = 1000000009;
double EPS = 1e-10;

bool check(vector<int>& a) {
	set<int> s;
	for (int k = 0; k < 26; k++)
		s.insert(a[k]);
	return s.size() <= 2;
}

int main() {
	string S; cin >> S;
	vector<int> a(26);
	for (int i = 0; i < S.length(); i++)
		a[S[i] - 'a']++;
	bool ok = check(a);
	for (int k = 0; k < 26; k++)
		if (a[k]) {
			a[k]--;
			if (check(a)) ok = true;
			a[k]++;
		}
	cout << (ok ? "YES" : "NO") << endl;
}
                    
