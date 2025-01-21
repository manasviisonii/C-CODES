#include<stdio.h>
int main(){
    int A[]={97,24,123,19,64,47};
    int i , j, num , f=0,mxp;
    for(i=0;i<6;i++){
        num=A[i];
        for(j=2;j<num;j++){
            if(num%j==0)
            break;
        }
        if(j==num){
            if(f==0){
                mxp=num;
                f=1;
            }
            else{
                if(num>mxp)
                mxp=num;
            }
        }

    }
    printf("the maximum prime no.is%d",mxp);
    return 0;
}