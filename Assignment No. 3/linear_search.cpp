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
   cout<<"Enter Number of element in array : ";
   int n;
   cin>>n;
   cout<<endl;
   int arr[n];
   cout<<"Enter the element in an array : ";
   for( int i = 0; i < n; i++){
    cin>>arr[i];
   }
   cout<<endl;

   cout<<"Enter the target element : ";
   int target;
   cin>>target;
   for( int i = 0; i < n; i++){
    if( target == arr[i]){
        cout<<"Target element at position : "<<i + 1<<endl;
        break;
    }
    
   }
return 0;
}