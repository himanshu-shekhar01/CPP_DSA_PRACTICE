#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> arr)
{
    for (int val : arr)
    {
        cout << val << " ";
    }
}

void selectionSort(vector<int> &arr)
{
    //if arr_idx is negative
    if (arr.size() < 0)
    {
        cout << "Array index can't -ve;" << endl;
    }

    //selection sort
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int min_idx = i;
        
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        swap(arr[i], arr[min_idx]);
    }
}

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};
    cout << "Before sorting: ";
    printArr(arr);
    cout << endl;

    // sorting
    selectionSort(arr);
    cout << "After sorting: ";
    printArr(arr);
    cout << endl;

    return 0;
}