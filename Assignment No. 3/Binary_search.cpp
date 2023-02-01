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
int binarysearch(int arr[],int n, int key  ){
    int s=0;
    int e=n;
    while(s <= e){
        int mid= (s +  e) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e=mid-1;
        }
        else s=mid+1;
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
    int key;
    cout<<"Enter target value :";
    cin>>key;
    cout<<endl;
    cout<<"Target is at "<<binarysearch(arr,n,key)+1<<" position"<<endl;
return 0;
}