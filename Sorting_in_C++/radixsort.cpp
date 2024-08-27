// radix sort -->

#include <iostream>
using namespace std;


void mainlogic(int arr[],int size,int pos){
    
    int output[size]; 
    int count[10] = {0}; 
  
    for (int i = 0; i < size; i++) 
        count[ (arr[i]/pos)%10 ]++; 
  
    for (int i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
  
    for (int i = size - 1; i >= 0; i--) 
    { 
        output[count[ (arr[i]/pos)%10 ] - 1] = arr[i]; 
        count[ (arr[i]/pos)%10 ]--; 
    } 
  
    for (int i = 0; i < size; i++) 
        arr[i] = output[i]; 
}


int getMax(int arr[] , int size){
    int max = arr[0];
    
    for(int i=1;i<size;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    
    return max;
}

void radixsort(int arr[] , int size){
    
    int max = getMax(arr,size);
    for(int pos=1;max/pos>0;pos = pos*10){
        mainlogic(arr,size,pos);
    }
    
    
}


int main() {
int arr[] = {657,786,342,232,767,1056,999};
int size = sizeof(arr)/sizeof(arr[0]);
radixsort(arr,size);
cout<<"Sorted Array : ";
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}
