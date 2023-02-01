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

   cout<<"Enter the number of element in array : ";
     int n;
     cin>>n;
     cout<<endl;
     int a[n];
     cout<<"Enter the elements of an array : ";
      
      for( int i = 0; i < n; i++){
        cin>>a[i];
      }
      cout<<endl;
      
      for( int i = 0; i < n; i++){
        int maxi = 0, maxval = 0;
        for( int j = 0; j < n - i ; j++){
            
            if(a[j] > maxval ){
                maxval = a[j];
                maxi = j;
            }
        }
        swap(a[maxi] , a[n-i-1]);
      }
     
     cout<<"Sorted array : ";
      for( int i = 0; i < n; i++){
        cout<<a[i]<<" ";
      }
      cout<<endl;

return 0;
}