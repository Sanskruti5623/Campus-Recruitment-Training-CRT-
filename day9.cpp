#include<iostream>
using namespace std;
int main(){
    char a[20]="Ashish";
    char b[20]={'A','s','h','i','s','h','\0'};
    char c[20];
    printf("enter string");
    gets(c);
    printf("Length of string a=%d\n",strlen(a));
    printf("Length of string a=%d\n",strlen(b));
    printf("Length of string a=%d\n",strlen(c));
    return 0;
}