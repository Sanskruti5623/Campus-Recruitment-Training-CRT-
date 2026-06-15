#include<stdio.h>
int main(){
    int num=0;
    switch(num++==5){
        case 1:
            printf("True");
            break;
        case 2:
            printf("False");
            break;
        default:
            printf("default");
    }
    return 0;
}