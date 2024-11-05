#include<stdio.h>
void main(){
    int a[6]={27,11,8,6,19,15};
    int pr[6], npr[6],i,j,k,p=0,n=0,num;
    for(i=0;i<6;i++){
        num=a[i];
        for(j=2;j<num;j++)
        {
            if(num %j== 0){
                npr[n]=num;
                n++;
                break;
            }
        }
        if(j==num)
        {pr[p]=num;
        p++;
        }
    }
    printf("total primse no.s are");
    for(i=0;i<p;i++)
    printf("\n %d",pr[i]);
    printf("total non primse no.s are");
    for(i=0;i<n;i++)
    printf("\n %d", npr[i]);
}