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

int ternarySearch(int array[], int start, int end, int key) {
   if(start <= end) {
      int mid1 = (start + (end - start) /3); 
      int mid2 = (mid1 + (end - start) /3); 
      if(array[mid1] == key)
         return mid1;
      if(array[mid2] == key)
         return mid2;
      if(key < array[mid1])
         return ternarySearch(array, start, mid1-1, key);
      if(key > array[mid2])
         return ternarySearch(array, mid2+1, end, key);
      return ternarySearch(array, mid1+1, mid2-1, key);
   }
   return -1;
}
int main(){
   int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<endl;
    int arr[n];
    cout<<"Enter the elements in array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int target;
    cout<<"Enter target value :";
    cin>>target;
    cout<<"Target is at "<<ternarySearch(arr,0,n,target)+1<<" position"<<endl;
return 0;
}