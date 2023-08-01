#include <iostream>

using namespace std;

void printArray(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout << arr[i] << "  ";
		//printf("%d ", arr[i]);
	}
	cout << endl;
	//printf("\n");
}

void insertionSort(int arr[], int n)
{
	for(int i=1; i<n; i++)
	{
		int key = arr[i];
		int j = i - 1;

		while(arr[j]>key && j>=0)
		{
			arr[j+1] = arr[j];
			j--;
			//printArray(arr, n);
		}
		arr[j+1] = key;
		//printArray(arr, n);
	}
}


int main()
{
	int arr[] = { 6, 5, 2, 1, 7, 9};
	int n = 6;

	printArray(arr, n);
	//selectionSort(arr, n);
	insertionSort(arr, n);
	printArray(arr, n);

	return 0;
}
