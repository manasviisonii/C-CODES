#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
void begin insert();
void last insert();
void random insert();
void begin delete();
void last delete();
void random delete();
void search ();
void display();
void main(){
    int choice =0;
    while(choice!=9){
        printf("menu");
        printf("1. Begin Insertion \n 2. Last Insertion \n 3. Random Insertion \n 4. Begin Delete \n 5. Last Delete \n 6. Random Delete \n 7. Search \n 8. Display \n 9. Exit");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            begin insert();
            break;

            case 2:
            last insert();
            break;

            case 3:
            random insert();
            break;

            case 4:
            begin delete();
            break;

            case 5:
            


        }

    }
}
