#include <iostream>
using namespace std;
int binarysearch(int a,int n,int arr[],int key)
{
    int mid=(a+n)/2;
    if(arr[mid]==key)
    {
        return mid+1;
    }
    if (arr[mid]<key)
    {
        return binarysearch(mid+1,n,arr,key);
    }
    return binarysearch(a,mid-1,arr,key);
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarysearch(0,n,arr,key)<<"\n";
	
}
