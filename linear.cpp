#include<iostream>
using namespace std;
int main()
{
    int i,size,flag = 0;
    cout<<"Enter the size of array";
    cin>>size;
    int array[size];
    cout<<"Enter the elements in array";

    for( i=0;i<size;i++)
    cin>>array[i];
    int s;
    cout<<"enter the element to search"<<endl;
    cin>>s;
    
    for(i=0;i<size;i++)
    {
        if(array[i]==s)
        {flag = 1;
        break;
        }
    }
if(flag)
cout<<"Element found at index:"<<" "<< i<<endl;
else 
cout<<"Element not found";
    
}