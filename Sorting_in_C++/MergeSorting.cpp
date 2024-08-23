#include <iostream>
using namespace std;

void Merge(int arr[], int start, int mid, int end) {
    int size = end - start + 1;
    int* merged = new int[size]; // Temporary array
    
    int idx1 = start;
    int idx2 = mid + 1;
    int x = 0;
    
    while (idx1 <= mid && idx2 <= end) {
        if (arr[idx1] <= arr[idx2]) {
            merged[x++] = arr[idx1++];
        } else {
            merged[x++] = arr[idx2++];
        }
    }
    
    while (idx1 <= mid) {
        merged[x++] = arr[idx1++];
    }
    
    while (idx2 <= end) {
        merged[x++] = arr[idx2++];
    }
    
    for (int i = 0, j = start; i < size; i++, j++) {
        arr[j] = merged[i];
    }
    
    delete[] merged;
}

void MergeSort(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }
    int mid = start + (end - start) / 2;
    MergeSort(arr, start, mid);
    MergeSort(arr, mid + 1, end);
    Merge(arr, start, mid, end);
}

int main() {
    int arr[] = { 6, 3, 9, 5, 2, 8 };
    int size = sizeof(arr) / sizeof(arr[0]); // Correct size calculation
    MergeSort(arr, 0, size - 1);
    
    cout << "Sorted array: ";
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
