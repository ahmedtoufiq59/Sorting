#include <iostream>

using namespace std;

void countingSort(int arr[], int size)
{
    int max_value = *max_element(arr, arr + size);
    int min_value = *min_element(arr, arr + size);
    int range = max_value - min_value + 1;

    int* count = new int[range]();  // Initialize count array with zeros

    for (int i = 0; i < size; ++i)
    {
        count[arr[i] - min_value]++;
    }

    for (int i = 1; i < range; ++i)
    {
        count[i] += count[i - 1];
    }

    int* output = new int[size];
    for (int i = size - 1; i >= 0; --i)
    {
        output[count[arr[i] - min_value] - 1] = arr[i];
        count[arr[i] - min_value]--;
    }

    for (int i = 0; i < size; ++i)
    {
        arr[i] = output[i];
    }

    delete[] count;
    delete[] output;
}

int main()
{
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    countingSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
