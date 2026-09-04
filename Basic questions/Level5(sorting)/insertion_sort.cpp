// Problem Statement: Given an array of integers called nums, sort the array in non-decreasing order using the insertion sort algorithm and return the sorted array.

// Algorithm
// In each iteration, select an element from the unsorted part of the array using an outer loop.
// Place this selected element in its correct position within the sorted part of the array.
// Use an inner loop to shift the remaining elements, if necessary, to accommodate the selected element. This involves shifting elements by one position until the selected element can be placed in the correct position.
// Continue this process until the entire array is sorted.

#include <iostream> 
using namespace std;

void insertion_sort(int nums[],int n){
     for (int i = 1; i < n; i++) {
            int key = nums[i]; // Current element as key 
            int j = i - 1; 
            
            // Shift elements that are greater than key by one position
            while (j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j--;
            }
            
            nums[j + 1] = key; // Insert key at correct position
        }
}
int main()
{
    int nums[6]={9,7,8,15,12,6};
    int n=6;
    insertion_sort(nums,n);
    for(int i=0;i<6;i++){
        cout<<nums[i]<<" ";
    }
}