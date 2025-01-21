#include<stdio.h>
int main(){
    char str1[20]={"ramanujan "};
    char str2[20]={"kumar"};
    int l1,l2,l3,i,j;
    for(l1=0;str1[l1]!= '\0'; l1++);
    for(l2=0;str2[l2]!='\0';l2++);
    l3=l1+l2;
    i=0;
    for(j=l1 ; j<l3 ; j++){
        str1[j]=str2[i];
        i++;
    }
    printf("merged string is %s", str1);
    return 0;
}