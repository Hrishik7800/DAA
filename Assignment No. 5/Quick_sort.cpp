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
int partition(int arr[], int left, int right){
     
    int pivot = arr[right];
    int j = left -1;
    
       for( int i = left ; i < right; i++){
           if( arr[i] < pivot){
                    j++;
                    swap(arr[i], arr[j]);
           }   
       }
       j++;
       swap(arr[j], arr[right]);
       return j;

}
void Quicksort(int arr[], int left, int right){

     if(left < right){
        int pidx = partition(arr, left, right);

        Quicksort(arr, left, pidx - 1);
        Quicksort(arr, pidx + 1, right);

     }
}
int main(){
    int n;
    cout<<"Enter size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : ";
    for( int i = 0; i < n; i++){
        cin>>arr[i];
    }
    Quicksort(arr, 0, n-1);

     cout<<"Sorted Array : ";
    for( int i = 0; i < n; i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
   

}

