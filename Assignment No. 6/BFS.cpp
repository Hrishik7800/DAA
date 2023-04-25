#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define fi first
#define se second
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vll vector<ll>
#define vpi vector<pii>
#define inf 1e18
#define mod 1000*1000*1000 + 7
#define mod1 998244353
int main(){
ios_base::sync_with_stdio(0);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
     cin>>n;
     ll a[n];
     for( int i = 0; i < n; i++){
        cin>>a[i];
     }
     
     sort(a, a+n);
     ll temp = LONG_MIN;
     for( int i = 1; i < n; i++){
         
         temp = max( temp, a[i]*a[i-1]);
     }
     cout<<temp<<endl;
     
}
return 0;
}