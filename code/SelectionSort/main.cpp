#include <iostream>
#include <algorithm>
#include "SortTestHelper.h"
#include "Student.h"
using namespace std;

template<typename T>
void selectionSort(T arr[], int n){

    for(int i = 0 ; i < n ; i ++){

        int minIndex = i;
        for( int j = i + 1 ; j < n ; j ++ )
            if( arr[j] < arr[minIndex] )
                minIndex = j;

        swap( arr[i] , arr[minIndex] );
    }
}



int main() {

    int n = 10000;
    int *arr = SortTestHelp::generateRandomArray(n,0,n);
    // selectionSort(arr, n);
    // SortTestHelp::printArray(arr, n);
    
    SortTestHelp::testSort("selection Sort", selectionSort, arr, n);
    delete[] arr;
    

    // Student d[4] = {{"D", 90}, {"C", 100}, {"B", 95}, {"A", 95}};
    // selectionSort(d, 4);
    // for (int i = 0; i < 4; ++i)
    // {
    //     cout << d[i];
    // }
    // cout << endl;

    return 0;
}