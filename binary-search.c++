#include<iostream>

using namespace std;


int binarysearch(int arr[],int x,int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]<x)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int a[10],x,n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element you want to search: ";
    cin>>x;
    int output=binarysearch(a,x,n);
    cout<<output;
    return 0;
}
