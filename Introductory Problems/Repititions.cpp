#include<bits/stdc++.h>

using namespace std;
#define PI              3.1415926536

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod 1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define REP(i,n) for(i=0;i<n;i++)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());


void c_p_c()
{
#ifndef  ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int sumi(int x)
{
	int sum = 0;
	while (x != 0)
	{
		sum += (x % 10);
		x /= 10;
	}
	return sum;

}

void solve()
{

	string s;
	cin >> s;

	int i;
	int maxi = 1;

	for (i = 0; i < s.size(); i++)
	{
		if (s[i] == s[i + 1])
		{
			int c = 0;
			while (s[i] == s[i + 1] && i + 1 < s.size())
				c++, i++;
			c++;
			maxi = max(maxi, c);
		}

	}
	cout << maxi;


}




int32_t main()

{
	//c_p_c();
	FIO;
	//w(t)
	solve();
}