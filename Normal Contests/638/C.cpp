
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        vector<string>v(k);
        vector<string>v1(k);

        for(int i=0;i<k;i++){
        v[i]="";
        v1[i]="";
        }
        if(k==1)
        {
            cout<<s<<endl;
            continue;
        }
        if(k==n)
        {
            cout<<s[n-1]<<endl;
            continue;
        }
        for(int i=0;i<k;i++)
        {
            v[i]+=s[i];
            v1[i]+=s[i];
        }
        for(int i=k;i<n;i++){
        v[0]+=s[i];
        v1[i%k]+=s[i];
        }
        sort(v.begin(), v.end());
        sort(v1.begin(), v1.end());
        cout<<min(v[k-1],v1[k-1])<<endl;
    }
}