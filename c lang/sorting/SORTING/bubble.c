#include<stdio.h>
int main(){
    int a []={44,66,55,88,77};
    int i , j , temp, n=5;
    for(i=1;i<=4;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array: - ");
    for(i=0;i<n;i++)
    printf("\n %d", a[i]);
    return 0;
}