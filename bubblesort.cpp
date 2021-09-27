#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   for(int i =0;i<n-1;i++)
   {
       for(int j=0;j<n-i-1;j++)
       {
           if(arr[j+1]<arr[j])
           {int temp =arr[j+1];
           arr[j+1]=arr[j];
           arr[j] = temp;
           }

       }

   }
    cout<<"sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}