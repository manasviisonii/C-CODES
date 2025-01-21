#include<stdio.h>
int main(){
    int a[]={7,11,8,44,15};
    int *p, *q;
    p=a;
    p++;
    q=a+3;
    printf("\n %d", q-p);
    printf("\n %d", *q - *p);
    return 0;

}