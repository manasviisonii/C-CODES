#include<stdio.h>
int main(){
    int a[3][2]={{1,2},{1,2},{1,4}};
    int i , j , b[3][2], c[3][2];
    printf("input the elements of an array");
    for(i=0;i<3;i++)
    for(j=0;j<2;j++){
    scanf("%d", &b[i][j]);
    }
    for(i=0;i<3;i++){
    for(j=0;j<2;j++){
        c[i][j]= a[i][j]+b[i][j];
    }
    }
    for(i=0;i<3;i++){
    for(j=0;j<2;j++){
        printf("%d", c[i][j]);
    }
    printf("\n");  
    }
    return 0;
    }