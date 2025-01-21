#include<stdio.h>
int fun();
int fun1();
int fun2();

int main(){
printf("hello world");
fun();
fun1();
fun2();
printf(" okay good");

return 0;
}
 
int fun(){
    printf("excellent");
 return 0;}

int fun2(){
    printf(" 2");
return 0; }

int fun1(){
    printf(" 1");
    fun();
return 0; }


