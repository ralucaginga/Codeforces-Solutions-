#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define F first
#define S second
#define ld long double
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector<pii>  
#define rep(i,n) for(i=0;i<n;i++)
#define repr(i,n) for(i=n-1;i>=0;i--)
#define o4(a,b,c,d) cout<<(a)<<" "<<(b)<<" "<<(c)<<" "<<(d)<<endl;
#define initial(arr,val) memset(arr,val,sizeof(arr))
#define value(x) cout << #x << " is " << x << endl;
#define number 200005
ll modpow(ll x,ll y,ll p=mod){  
    ll res = 1;    x = x % p;
    if (x == 0) return 0;
    while (y > 0){  
        if (y & 1)  
          res = (res%p*x%p) % p;  
        y = y>>1;
        x = (x*x) % p;  }  
    return res;  }
ll modinv(ll n , ll p=mod){
    return modpow(n,p-2,p);
}
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		 int n;
		 cin>>n;
		 char arr[n][n];
		 int i,j;
		 int count=0;
		 for(i=0;i<n;i++){
		 	for(j=0;j<n;j++){
		 		cin>>arr[i][j];
		 		if(arr[i][j]=='1')
		 		count++;
		 	}
		 }
		 int flag=0;
		 if(count==0){
		 cout<<"YES"<<endl;
		 continue;
		 }
		 
		 else
		 {
		 	for(i=0;i<n;i++)
		 	{
		 		for(j=0;j<n;j++)
		 		{
		 			if(arr[i][j]=='1')
		 			{
		 				if(i!=n-1&&j!=n-1&&arr[i][j+1]!='1'&&arr[i+1][j]!='1')
		 				{
		 					flag=1;
		 					break;
		 				}
		 			}
		 			
		 		}
		 		if(flag==1)
		 			break;
		 	}
		 	if(flag==1)
		 	cout<<"NO"<<endl;
		 	else
		 	cout<<"YES"<<endl;
		 }
	}
	return 0;
}