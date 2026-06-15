#include<stdio.h>
int main(){
    int i=1;
    i++;
    switch(i--){
        case 1:
            printf("case 1excuteed");
            break;
        case 2:
            printf("case 2 excuteed");
            break;
        default:
            printf("case default")
    }
    return 0;
}