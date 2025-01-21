#include<stdio.h>
int main(){
    int a[6]={27,11,8,6,19,15};
    int pr[6], npr[6],i,j,k,p=0,n=0,num;
    for(i=0;i<6;i++){
        num=a[i];
        for(j=2;j<num;j++)
        {
            if(num %j== 0){
                n++;
                break;
            }
        }
        if(j==num)
        p++;
        }
        printf("total non primes = %d", n);
        printf("\n total primes = %d", p);
        return 0;
    }
