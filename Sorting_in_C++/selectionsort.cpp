// selection sort -->

#include <iostream>
using namespace std;


void selectionSort(int arr[], int size){
    
    for (int i = 0; i < size - 1; i++) {
    int smallest = i;
            for (int j = i+1; j < size; j++) {
                if (arr[smallest] > arr[j]) {
                    // swap the elements :
                 smallest =j;
                
                }
            }
        
          int temp = arr[smallest];
            arr[smallest] = arr[i];
            arr[i] = temp;
        
        }
        
}

int main() {
int arr[] = {10,5,8,6,3,1,9};
int size = sizeof(arr)/sizeof(arr[0]);
selectionSort(arr,size);
cout<<"Sorted Array : ";
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}
