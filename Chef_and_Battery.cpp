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
     
     if(n == 50 ) cout<<0<<endl;
     else if(n > 50) {
        n = abs(50 - n);
        if(n % 3 == 0) cout<<n/3<<endl;
        else if(n % 3 == 1) cout<< n/3 + 2 <<endl;
        else if(n % 3 == 2) cout<< n/3 + 3 <<endl;

     }
     else {
        n = abs(50 - n);
        if(n %2 == 0) cout<<n/2<<endl;
        else cout<< (n+1)/2 + 2<<endl;
     }

}
return 0;
}