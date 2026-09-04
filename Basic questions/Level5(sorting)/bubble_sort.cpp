// Problem Statement: Given an array of N integers, write a program to implement the Bubble Sorting algorithm.

// Approach:
// Select the range of the unsorted array: Use an outer loop (i) that runs backward from n-1 to 0 (where n is the size of the array). The value i = n-1 means the range is from 0 to n-1, i = n-2 means the range is from 0 to n-2, and so on.
// Push the maximum element to the end of the selected range: Use an inner loop (j) that runs from 0 to i-1. Compare adjacent elements and swap them if arr[j] > arr[j+1]. Repeating this process ensures the maximum element in the current range moves to index i.
// Progressively sort the array: After each outer loop iteration, the last part of the array becomes sorted. For example:
// After the first iteration, the element at the last index is sorted.
// After the second iteration, the last two elements are sorted.
// This continues until the entire array is sorted.
// Complete sorting: After n-1 iterations, the whole array will be sorted.
// Note: After each iteration, the sorted portion grows from the end, so the last index of the unsorted range decreases by 1 (controlled by i). The inner loop (j) ensures the maximum element in the range [0…i] is placed at index i.


// Optimized approach
// The best case occurs if the given array is already sorted. We can reduce the time complexity to O(N) by just adding a small check inside the loops.
// We will check in the first iteration if any swap is taking place. If the array is already sorted no swap will occur and we will break out from the loops.
// Thus the iteration of the outer loop will be just 1. And our overall time complexity will be O(N).

#include <iostream> 
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i= n-1;i>=0;i--){
        int didswap =0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap=1;
            }
        }
        if(didswap==0) break;
        
    }
}

int main()
{
    int arr[6]={9,7,8,15,12,6};
    int n=6;
    bubble_sort(arr,n);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}