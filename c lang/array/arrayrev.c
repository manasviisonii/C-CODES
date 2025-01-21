#include<stdio.h>
int main(){
    int a[5]={1,3,4,5,6};
    int i , j , temp;
    j=5-1;
    for (i=0;i<5/2;i++){
        temp=a[i];
        a[i]=a[j];
        a[j] = temp ;
        j--;
    }
    printf("the reverse elements of the array are;");
    for(i=0;i<5;i++)
    printf(" %d",a[i]);
    return 0 ;
}