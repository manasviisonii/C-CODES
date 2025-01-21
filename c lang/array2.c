#include<stdio.h>
int main(){
    int a[]={-7,11,7,8,-9,24,6,-9};
    int ngc=0,psc=0,i;
    for(i=0;i<8;i++){
        if(a[i]<0)
        ngc++;
        else
        psc++;
    }
    printf("\n total -ve elements are = %d", ngc);
    printf("\n total positive elements are =%d",psc);
    return 0;
}