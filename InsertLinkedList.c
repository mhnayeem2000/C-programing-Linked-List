#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;

};
struct Node *head = NULL;

void insertbeg(int value){

    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if(head == NULL){
        newNode -> next = NULL;
        head = newNode;

    }

    else {
        newNode -> next = head;
        head = newNode;
    }

}

void insertend(int value){

 struct Node *newNode;
 newNode = (struct node*) malloc(sizeof(struct Node));
 newNode ->data = value;
 newNode -> next = NULL;

 if(head == NULL){
    head = newNode;
 }
 else {
    struct Node *temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
 }

}

void display(){

if(head == NULL){

    printf("List is empty.");
}
else{
    struct Node *temp = head;
    printf("\n Elements are : ");
    while(temp -> next != NULL){
        printf("\n %d  ", temp -> data);
        temp = temp -> next;
    }
    printf("\n %d  ", temp -> data);

}


}

int main(){
    int choice,value,choice1,loc1,loc2;
        while(1){
            mainMenu: printf("\n\n****** MENU ******\n1. Insert\n2. Display\n3. Exit \nEnter your choice: ");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                    printf("Enter the value to be insert: ");
                    scanf("%d",&value);
                    while(1){
                        printf("Where you want to insert: \n1. At Beginning\n2. At End\nEnter your choice: ");
                        scanf("%d",&choice1);
                        switch(choice1){
                            case 1:
                                insertbeg(value);
                                break;
                            case 2:
                                insertend(value);
                                break;
                            default:
                                printf("\nWrong Input!! Try again!!!\n\n");
                                goto mainMenu;
                        }
                        goto subMenuEnd;
                    }
                    subMenuEnd:
                        break;
                        case 2:
                            display();
                            break;
                        case 3:
                            exit(0);
                        default :
                            printf("\nWrong input!!! Try again!!\n\n");
            }

        }
    return 0 ;
}


