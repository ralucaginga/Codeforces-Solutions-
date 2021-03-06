
// Problem : E. Calendar Ambiguity
// Contest : Codeforces - Educational Codeforces Round 92 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1389/problem/E
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define int         long long int
#define vi           vector<int>
#define pii          pair<int,int>
#define vpp          vector<pii>
#define mii          map<int,int>
#define pb           push_back
#define endl        '\n'
#define rep(i,a,bb)  for(int i=a;i<bb;i++)
#define ff           first
#define ss           second
#define fast         ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test         int T;cin>>T;while(T--)
#define __sort(v)    sort(v.begin(),v.end())
#define __rsort(v)   sort(v.rbegin(),v.rend())
#define setbits(x)   __builtin_popcount(x)
#define zrobits(x)   __builtin_ctzint(x)
const int inf = 5 * (1e+8);
const int mod = 1e+9 + 7;
#define ll long long
vector<int> adj[500005];
vector<int> visited(500005, 0);
vector<int> t(500005, 0);
int flag = 1;
void nothing()
{

}



		void solve()
		{
			int m,d,w;
			cin>>m>>d>>w;
			int g=__gcd(d-1,w);
			if(d-1 ==0){
				cout<<0<<endl;
				return;
			}
			int l=((d-1)*w)/g;
			int b=l/(d-1);
			int z=min(m,d);
			int k=(z/b)-1;
			cout<<b*((k*(k+1))/2)+(k+1)*(z%b)<<endl;
			return;
		}
		int32_t main()
		{
			fast;
			test {
				solve();
			}
			return 0;
		}