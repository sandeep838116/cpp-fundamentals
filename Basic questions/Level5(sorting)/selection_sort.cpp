// Problem Statement: Given an array of N integers, write a program to implement the Selection sorting algorithm.


// Algorithm
// First, we will select the range of the unsorted array using a loop (say i) that indicates the starting index of the range. The loop will run forward from 0 to n-1. The value i = 0 means the range is from 0 to n-1, and similarly, i = 1 means the range is from 1 to n-1, and so on. (Initially, the range will be the whole array starting from the first index.)
// Now, in each iteration, we will select the minimum element from the range of the unsorted array using an inner loop.
// After that, we will swap the minimum element with the first element of the selected range(in step 1).
// Finally, after each iteration, we will find that the array is sorted up to the first index of the range.

#include <iostream> 
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
            
    }
}

int main()
{
    int arr[6]={9,7,8,15,12,6};
    int n=6;
    selection_sort(arr,n);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}