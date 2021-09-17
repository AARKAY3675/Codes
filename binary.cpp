#include <iostream>

using namespace std;
int binarysearch(int array[],int size,int key)
{
    int l,r,mid;
    l=0;
    r=size-1;
    while(l<r)
    {
    mid =(l+r)/2;
    if(array[mid]==key)
       return mid;
    else if(array[mid]>key)
    r=mid-1;
   else
       l =mid+1;
    
    }
}
int main()
{
    int size;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    cin>>array[i];
    int key;
    cin>>key;
    cout<<binarysearch(array,size,key);

    return 0;
}
