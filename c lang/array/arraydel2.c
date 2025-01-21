#include<stdio.h>
int main(){
int a[8]={7,8,11,9,6,8,15,17};
int i , pos ;
printf("original array");
for(i=0;i<7;i++)
printf("\n %d",a[i]);

printf("\n enter the index to be deleted");
scanf("%d",&pos);

for(i=pos;i<7;i++)
a[i]=a[i+1];

for(i=0;i<7;i++)
printf("\n %d",a[i]);

return 0;

}