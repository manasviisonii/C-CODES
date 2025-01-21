#include <stdio.h>
int main(){
    int num, rem, even =0, odd =0;
    printf("input any number");
    scanf("%d",&num);
    while (num>0){
    rem = num%10;
    num = num/10;
    if(rem%2==0)
    even++;
    else 
    odd++;

    }
    printf("the total no. of even and odd no. is %d %d", even , odd);
    return 0;
    }