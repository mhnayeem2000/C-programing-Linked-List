#include<stdio.h>

struct Node {

    int data;
    struct Node *previous , *next;
}*head = NULL;
void insertBeg(int value){
    struct Node *newNode;
    newNode =  (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode -> next = NULL;
    newNode -> previous = NULL;

    if(head == NULL){
        newNode -> next = NULL;
        head = newNode;
    }else {
        newNode -> next = head;
        head = newNode;
    }

}

void insend(int value){
    struct Node *newNode;
    newNode =  (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode -> next = NULL;
    if( head == NULL){
        newNode -> previous = NULL;
        head = newNode;
    }else {
        struct Node *temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = newNode;
        newNode -> previous = temp;
    }

}


void display(){

if( head == NULL){
    printf("Empty!!!");
}else{
    struct Node *temp = head;
    while(temp -> next != NULL){
        printf("%d <==> ", temp -> data);
        temp = temp -> next;
    }
    printf("%d ---> NULL",temp -> data);


}

}

int main(){
insend(60);
insertBeg(50);
insertBeg(40);
insertBeg(30);
display();

return 0;
}
