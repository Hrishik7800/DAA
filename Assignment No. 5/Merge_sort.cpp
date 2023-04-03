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
void conquer(int arr[], int left, int mid, int right){
    int indx1 = 0, indx2 = mid + 1, x = 0;
    int ans[(right - left) +1];
    
    while(indx1 <= mid && indx2 <= right ){

        if(arr[indx1] <= arr[indx2]){
            ans[x++] = arr[indx1++];
        }
        else ans[x++] = arr[indx2++]; 

    }

    while(indx1 <= mid){

        ans[x++] = arr[indx1++];

    }

    while(indx2 <= right){
        ans[x++] = arr[indx2++];
    }

    for( int i = 0, j = left; i < x; i++, j++){
        arr[j] = ans[i];
    }

}
void divide(int arr[], int left, int right){
     
    int mid = left + (right - left )/2;
    divide(arr, left, mid);
    divide(arr, mid + 1, right);
    conquer(arr, left, mid, right);

}

int main(){
   
   cout<<"Enter Number of element in array :";
   int n;
   cin>>n;
   int arr[n];
   cout<<"Enter array elements : ";
   for( int i = 0; i < n; i++){
    cin>>arr[i];
   }
    divide(arr, 0, n-1);
    for( int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}