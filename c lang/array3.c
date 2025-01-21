#include<stdio.h>
int main(){
    int a[]={8,6,5,4,3,6,7,8,9};
    int even=0, odd=0, i;
    for(i=0;i<9;i++){
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("total odd = %d", odd);
    printf("total even = %d", even);
}