#include<stdio.h>
int main(){
    int a [6]={8,9,10,11,4,5,};
    int n , pos,i , j , index;
    printf("\n original array");
    for(i=0;i<6;i++)
    printf("\n %d",a[i]);

    printf("\n enter the index to be deleted");
    scanf("%d",&pos);

    for(i=pos;i<5;i++)
    a[i]=a[i+1];

    for(i=0;i<5;i++)
    printf("\n %d",a[i]);

    return 0 ;

}