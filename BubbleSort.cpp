#include<iostream>
using namespace std;
void bubblesort(int arr[], int size){
    for (int i=0;i< size;i++){
        for (int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
}
int main(){
    int arr[]={64,34,25,12,22,11,90};
    int size =sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr, size);
    for (int k=0;k<size-1;k++){
            cout<<arr[k]<<" ";
        }
    return 0;
}