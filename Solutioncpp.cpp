//The whole idea behind insertion sort is to sort the array in parts i.e , first sort till index 1, then index 2 ....and so on.
//Lets see the implementation

#include <iostream>
using namespace std;

void swap(int arr[],int first,int second){  
    int temp = arr[first];
    arr[first]=arr[second];
    arr[second]=temp;
}

void insertionsort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j>0; j--){
            if(arr[j]<arr[j-1]){
            swap(arr,j,j-1);//calling the swap function
            }else{
                break; //if arr[j-1] is not less than j then no need to check previous element because they are already sorted
            }
        }
    }
    //printing the sorted array
    for(int index=0; index<n; index++){
        cout<<arr[index]<<" ";
    }
}

int main() {
   int arr[] = { 5,3,7,1,8,6,9 };
   int n = sizeof(arr) / sizeof(arr[0]);
   insertionsort(arr,n);
   return 0;
}

