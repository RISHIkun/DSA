#include <iostream>
using namespace std;
int main()
{
    int arr[10], arr1[10], arr2[10], size, i, j, temp;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The sorted array in ascending order is" << endl;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // saving first array
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
        arr2[k] = arr[k];
    }
    cout << endl;
    cout << "The sorted array in decending order is" << endl;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // saving 2 array
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
        arr1[k] = arr[k];
    }
    cout << endl;

    // special array is
    cout << "The special array is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << " " << arr1[i] << " ";
    }

    return 0;
}