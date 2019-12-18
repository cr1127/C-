#include <iostream>
#include <algorithm>
#include "SortTestHelper.h"
#include "SelectionSort.h"
using namespace std;

template<typename T>
void insertionSort(T arr[], int n) {
	for (int i = 1; i < n; ++i)
	{
		// for (int j = i; j > 0  && arr[j] < arr[j-1]; -- j)
		// {
		// 	swap(arr[j], arr[j-1]);
		// }
		T e = arr[i];
		int j;
		for (j = i; j > 0 && arr[j-1] > e; --j)
		{
			arr[j] = arr[j-1];
		}
		arr[j] = e;

	}
}
int main() {

	int n = 10000;
	//插入排序对于近乎排序的序列，时间复杂度很小
	int *arr = SortTestHelp::generateNearlyOrderdArray(n, 10);
	int *arr2 = SortTestHelp::copyIntArray(arr,n);
	SortTestHelp::testSort("Insertion Sort", insertionSort, arr, n);
	SortTestHelp::testSort("Selection Sort", selectionSort, arr2, n);
	delete[] arr2;
	delete[] arr;
	return 0;
}