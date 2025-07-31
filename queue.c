#include<stdio.h>
void displayQueue(int queue[], int front, int rear) {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}
int main(){
  int queue[5];
  int rear=-1,front=-1;
  int op;
  int value;
  
  while(1){
    printf("Enter choice \n1.Enqueue\n2.dequeue\n3 exit\n");
    scanf("%d",&op);
    switch(op){
      case 1:
        if (rear==4){
          printf("Queue is Full\n");
        }else{
          if(front==-1)front=0;
          printf("enter the value to be entered :");
          scanf("%d",&value);
          rear++;
          queue[rear]=value;
        }
        displayQueue(queue, front, rear);
        break;
      case 2:
        if(front==-1||front>rear){
          printf("Queue is empty\n");
        }else{
        printf("Dequeued value is : %d\n",queue[front]);
        front++;
        if(front>rear){
          front=rear=-1;
          }
        }
        displayQueue(queue, front, rear);
      break;
      case 3:
        return 0;
      default:
      printf("invalid option");
      }
    }
      
  return 0;
  }
    
