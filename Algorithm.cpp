#include<iostream>
#include<algorithm>
using namespace std;
void show(int a[],int array_size){
    for(int i=0;i<array_size;i++){
        cout<<a[i]<<",";
    }
}
int main(){
    int a[]={1,5,8,9,6,7,3,4,2,0};
    int asize =sizeof(a)/sizeof(a[0]);
    cout<<"original array is :\n";
    show(a,asize);
    sort(a,a+asize);
    cout<<"\n\n The array after sorting is : \n";
    show(a,asize);
    if(binary_search(a,a+10,2)){
        cout<<"\nElement found in array";
    }
    else{
        cout<<"\nElement not found in array";
    }
    return 0;
}