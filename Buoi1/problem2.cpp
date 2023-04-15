#include<iostream>
using namespace std;
#define MAX 100
void bubleSort(int arr[MAX], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j =i+1; j < size; j++)
        {
            if (arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
            
        }
        
    }
    
}
void outputArray(int arr[MAX],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"\t"<<arr[i];
    }
    
}
int main()
{
    int arr[]={1,4,2,3,6,5,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubleSort(arr,size);
    outputArray(arr,size);
    return 0;
}