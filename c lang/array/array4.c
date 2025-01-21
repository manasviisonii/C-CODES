#include<stdio.h>
int main(){
    int a[8];
    int i , max;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(i==0){
            max=a[i];
        }
        else 
        if(a[i]>max)
        max=a[i];
    }
    printf("max element from the array is %d",max);
    return 0 ;
}