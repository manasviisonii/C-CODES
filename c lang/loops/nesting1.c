#include<stdio.h>
int main() {
    int n, i, j, num, base;

    printf("input the upper limit to generate the list of prime no.s");
    scanf("%d",&n);

    printf("input the lower limit to generate the list of prime no.s");
    scanf("%d",&base);
    i=base;
    while(i<=n){
        num=i;
        j=2;
        while (j<num)
        {
            if(num%j==0){
                num=0;
                break;
            }
            j++;
        }
        if(j==num){
            printf(" %d",num);

        }
        i++;
    }
return 0 ;
}