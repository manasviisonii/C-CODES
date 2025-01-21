#include<stdio.h>
int main(){
    int r,c;
    r=1;
    while(r<=4){
        c=1;
        while(c<=r){
            printf("%d",r);
            c++;
        }
        printf("\n");
        r++;
    }
return 0;
}