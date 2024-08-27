// insertion sort -->

#include <iostream>
using namespace std;


void insertionSort(int arr[], int size){
    
 for(int i=1;i<size;i++){
     int current = arr[i];
     int j = i-1;
     while(j>=0 && current <  arr[j]){
         arr[j+1] = arr[j];
         j--;
     }
     arr[j+1] = current;
 }
        
}

int main() {
int arr[] = {10,5,8,6,3,1,9};
int size = sizeof(arr)/sizeof(arr[0]);
insertionSort(arr,size);
cout<<"Sorted Array : ";
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}
