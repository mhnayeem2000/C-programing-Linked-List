#include <stdio.h>
#include<stdlib.h>
struct Node *cll(int arr[],int size);
struct Node{
  int data;
  struct Node *next;
};
struct Node *cll(int arr[],int size){
   struct Node *head = NULL;
   struct Node *temp = NULL;
   struct Node *current = NULL;

   for(int i = 0; i < size ; i++){
       temp = (struct Node *)malloc(sizeof(struct Node));
       temp -> data = arr[i];
       temp -> next = NULL;

       if(head == NULL){
           head = temp;
           current = temp;
       }else{
           current -> next = temp;
           current = current -> next;
       }

   }
    return head;
}

int main(){
    int arr[] = {10,20,30,40,50,66};
    struct Node *head;
    head = cll(arr,6);
    while(head){
        printf("%d -> ",head->data);
        head = head -> next;
    }
    printf("NULL");
    return 0;
}
