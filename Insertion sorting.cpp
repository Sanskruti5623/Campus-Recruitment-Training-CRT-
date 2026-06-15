#include<iostream>
using namespace std;
void InsertioSort(int arr[], int size){
    for (int i=1;i< size;i++){
        int j=i-1;
        int key=arr[i];
        while(j>0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
        
    }
int main(){
    int arr[]={5,3,8,6,2};
    int size =sizeof(arr)/sizeof(arr[0]);
    int InsertionSort(int arr, int size);
    for (int k=0;k<size-1;k++){
            cout<<arr[k]<<" ";
        }
    return 0;
}