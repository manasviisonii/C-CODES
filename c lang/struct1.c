#include<stdio.h>
    struct student {
        int rollno ;
        float per;
        char name [20];

    }s2,s3;

int main (){
struct student s1={11,89.5,"raman"};
printf("\n %d %f %s", s1.rollno, s1.per , s1.name);

}
