#include<iostream>
using namespace std;
int main()
{
    int arr[10], size, i, elem, j, found=0;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    cout<<"Enter  Array Elements: "<<endl;
    for(i=0; i<size; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Delete: "<<endl;
    cin>>elem;
    for(i=0; i<size; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(size-1); j++)//for reducing the size of the array because element has to be deleted
                arr[j] = arr[j+1];//for shifting the array
            found++;//for detecting that the for loop s executed
            i--;//to make the program fast by making the computer to  check again the previous number not the entire array
            size--;
        }
    }
    if(found==0)
        cout<<"Element does't found in the Array!"<<endl;
    else
    {
        cout<<"The element is deleted"<<endl;
    }
    cout<<"The new array is "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}