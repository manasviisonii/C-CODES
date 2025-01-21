#include<stdio.h>
int main(){
    int a []={44,11,22,33,55};
    int i , j , temp;
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n sorted array ; -");
    for(i=0;i<5;i++)
    printf("\n %d",a[i]);
    return 0 ;
}