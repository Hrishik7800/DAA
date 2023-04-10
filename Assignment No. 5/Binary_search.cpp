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
   
    cout<<"Enter the number of element in an array : ";
    int n;
    cin>>n;
    cout<<endl<<"Array must be in sorted form " <<endl;
    int arr[n];
    cout<<endl<<"Enter all element of an array : ";
    for( int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<endl<<"Enter target element : "<<endl;
    cin>>target;
    int left = 0;
    int right = n-1;

    while(left < right){

        int mid = left + (right - left)/2;
        if( arr[mid] == target){
            cout<<"The position of target element is : "<<mid + 1<<endl;
        }
        if(arr[mid] > target ) right = mid - 1;
        else left = mid + 1;

    }

return 0;
}