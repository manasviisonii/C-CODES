#include<stdio.h>
int main(){
    int a[6]={27,11,8,6,19,15};
    int pr[6], npr[6],i,j,p=0,n=0,num;
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
    printf("total prime no.s are-");
    for(i=0;i<p;i++)
    printf(" %d",pr[i]);
    printf("\n total non prime no.s are-");
    for(i=0;i<n;i++)
    printf(" %d", npr[i]);
    return 0 ;
}