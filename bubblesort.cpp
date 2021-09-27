// Bubble sort: In bubble sort we compare the adjacent element if right element is greater than the left element then it will swap otherwise it remain as it is.
//here is two loop first will run till n-1
//second loop i.e after every ilteration the last element will be sorted and second loop will be run till n-i-1
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in an array";
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