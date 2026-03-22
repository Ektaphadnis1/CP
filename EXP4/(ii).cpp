// to check if array is sorted or not
#include<iostream>
using namespace std;
int main()
{
    int arr[100], n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool sorted = true;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i] > arr[i+1])
        {
            sorted = false;
            break;
        }
    }
    if(sorted)
        cout<<"Array is sorted";
    else
        cout<<"Array is not sorted";
    return 0;
}
