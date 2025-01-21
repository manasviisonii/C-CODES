#include<stdio.h>
int fun(int *);
int main(){
 int a[]={10,11,12,14};
 fun(a);
 return 0;
}
int fun(int *p){
    int i;
    for(i=0;i<5;i++){
        printf("\n %u %d", p+i, *(p+i));

    }
    return 0;
}