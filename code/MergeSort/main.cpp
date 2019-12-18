#include <iostream>
#include <algorithm>
#include "SortTestHelper.h"
#include "MergeSort.h"

using  namespace std;

template <typename T>
// 自底向上 对链表
void mergeSortBU(T arr[], int n) {

	// for(int sz = 1; sz <= n; sz += sz) {
	// 	for(int i=0; i < n; i += sz + sz)
	// 		__merge(arr, i , i + sz - 1, min(i + sz + sz - 1, n-1));
	// }

	// Merge Sort Bottom Up 优化
    for( int i = 0 ; i < n ; i += 16 )
        insertionSort(arr,i,min(i+15,n-1));

    for( int sz = 16; sz <= n ; sz += sz )
        for( int i = 0 ; i < n - sz ; i += sz+sz )
            if( arr[i+sz-1] > arr[i+sz] )
                __merge(arr, i, i+sz-1, min(i+sz+sz-1,n-1) );
}

int main() {

	int n = 50000;

	// 测试1 一般性测试
    cout<<"Test for Random Array, size = "<<n<<", random range [0, "<<n<<"]"<<endl;
    int* arr1 = SortTestHelp::generateRandomArray(n, 0, n);
    int* arr2 = SortTestHelp::copyIntArray(arr1, n);

    SortTestHelp::testSort("Merge Sort", mergeSort, arr1, n);
    SortTestHelp::testSort("Merge SortBU",     mergeSortBU,     arr2, n);

    delete[] arr1;
    delete[] arr2;

    cout<<endl;


    // 测试2 测试近乎有序的数组
    int swapTimes = 10000;
    cout<<"Test for Random Nearly Ordered Array, size = "<<n<<", swap time = "<<swapTimes<<endl;
    arr1 = SortTestHelp::generateNearlyOrderdArray(n, swapTimes);
    arr2 = SortTestHelp::copyIntArray(arr1, n);

    SortTestHelp::testSort("Merge Sort", mergeSort, arr1, n);
    SortTestHelp::testSort("Merge SortBU",     mergeSortBU,     arr2, n);

    delete(arr1);
    delete(arr2);

	return 0;
}