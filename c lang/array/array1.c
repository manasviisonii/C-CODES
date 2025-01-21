#include<stdio.h>
int main(){
    int i , a[5], max;
    printf("input any 5 integers ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
        max=a[0];
        for(i=1;i<5;i++){
        if(a[i]>max)
        max =a[i];}
        printf("\n max element of the array is %d", max);
    return 0;
}