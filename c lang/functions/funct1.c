#include<stdio.h>
int reverse(long int);
int main(){
    long int num;
    printf("input any integer");
    scanf("%ld", &num);
    reverse(num);
    return 0;

}
int reverse(long int num){
    long int rev=0,rem;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("the reversed no. is %ld", rev);
    return 0 ;
}