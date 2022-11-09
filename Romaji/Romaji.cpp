#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define N 100001
#define FOR(i, n) for (int i = 0; i < n; ++i)
template <typename... T>
void read(T &...args)
{
	((cin >> args), ...);
}
template <typename... T>
void write(T... args)
{
	((cout << args), ...);
}
const vector<pair<int, int>> nb = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> nc = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }

string str;

void solve(){
	bool k = true, a, b, c;

	for (int i = 0; i < str.size(); i++)
	{
		a = (str[i] == 'a' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i' || str[i] == 'e');
		b = (str[i + 1] == 'a' || str[i + 1] == 'o' || str[i + 1] == 'u' || str[i + 1] == 'i' || str[i + 1] == 'e');
		c = (str[i - 1] == 'a' || str[i - 1] == 'o' || str[i - 1] == 'u' || str[i - 1] == 'i' || str[i - 1] == 'e');

		if (i == str.size()-1)
		{
			if (str[i] == 'n' || (c && a))
				continue;

			if (!(!c && a))
			{
				k = false;
				break;
			}
		}
		else
		{
			if (str[i] == 'n')
				continue;

			if (!a && !b)
			{
				k = false;
				break;
			}
		}
	}

	if (k)
		write("YES\n");
	else
		write("NO\n");
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	read(str);
	solve();
	return 0;
}