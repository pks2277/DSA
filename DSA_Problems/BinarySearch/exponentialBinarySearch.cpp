#include<iostream>
#include<algorithm>
using namespace std;
int binarySearch(int arr[],int start,int end,int x){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]>x)
            end=mid-1;
        else 
            start=mid+1;
    }
    return -1;
}
int exponentialSearch(int a[],int n,int x){
    if (a[0]==x) return 0;

    int i=1;
    while (i<n && a[i]<=x)
    {
        i=i*2;
    }
    return binarySearch(a,i/2,min(i,n-1),x);
    
}

int main()
{

    int a[]={2,4,5,7,8,9,12,34,35,67,89,99,234,467,678};
    int n=sizeof(a)/sizeof(int);
    int x=35;
    int ans=exponentialSearch(a,n,x);
    cout << ans;
    
    return 0;
}