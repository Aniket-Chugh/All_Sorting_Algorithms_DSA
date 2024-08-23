#include <iostream>
using namespace std;

int partition(int arr[] , int start , int end){
    int pivot = arr[end];
    int i=start-1;
    for(int j=start ; j<end ; j++){
        if(arr[j] < pivot){
            i++;
            //swap -->
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

        }
    }

    i++;
     int temp = arr[i];
            arr[i] = pivot;
            arr[end] = temp;
    return i;

}


void QuickSort(int arr[], int start , int end){
    if(start < end){
        int pidx = partition(arr,start,end);
        QuickSort(arr, start, pidx-1);
        QuickSort(arr,pidx+1,end);

    }
}


int main() {

    int arr[] = { 6, 3, 9, 5, 2, 8 };
int n = sizeof(arr) / sizeof(arr[0]); 
    QuickSort(arr, 0 , n-1);
  cout<<"sorted array  : ";

  for(int i=0;i<n;i++){
      cout<< arr[i] <<" ";
  }

    return 0;
}
