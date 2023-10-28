#include<stdio.h>
int queue[20],choice,n,front=-1,rear=-1,x,i;

void insert()  
{  
 if (rear== n-1 ){
    printf("\nQueue is overflow");   
    }
    else{  
    if(front==-1){
    front=0;
    }
        printf("Enter the value: ");  
             
        rear = rear +1;   
        scanf("%d",&queue[rear]);   
}
}   
void delete()
{
if(front<0 || front>rear)
{
 printf("\n Queue is empty");
 return;
 
    }else
    {
        front++;
    }
    }  
void display(){
 if(rear==-1 || front==-1){
        printf("Queue is empty\n");
        return;
        }
    else{
            printf("Elements are:");
            for(int i=front;i<=rear;i++)
            printf("%d\n",queue[i]);   
    }      
printf("\n");
}
int main()
{
printf("Enter the size of queue:");
scanf("%d",&n);
  while(choice != 4) 
   {  
        printf("\nEnter the choice(1.insert 2.delete 3.Display 4.Exit): ");  

        scanf("%d",&choice);  
        switch(choice) {  
            case 1: {   
                insert();  
                break;  
            }  
            case 2:  {  
                delete();  
                break;  
            }  
            case 3:{  
                display();  
                break;  
            }  
            case 4:{  
                printf("Exit\n");  
                break;   
            }  
            default:{  
                printf("Enter valid option");  
            }
            }
            }  
return 0;
}


