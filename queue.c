#include<stdio.h>
int main()
{
    int n,item,choice;
    char ch;
    int front=0;
    int rear=-1;
    printf("Enter the size of the queue:");
    scanf("%d",&n);
    int A[n];
    do
    {
        printf("\nOPERATIONS:\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter a choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:

                if(rear==n-1)
                {
                    printf("\nOverflow");
                }
                else
                {
                    rear=rear+1;
                    printf("Enter the item to be inserted:");
                    scanf("%d",&item);
                    A[rear]=item;
                }
                break;
            case 2:

                if(rear<front)
                {
                    printf("\nUnderflow");
                }
                else
                {
                    item=A[front];
                    front=front+1;
                    printf("The deleted element is %d",item);

                }

                break;
            case 3:
                if(rear<front)
                {
                    printf("\nStack is empty");
                }

                else
                {
                    printf("Queue is:");
                    for(int i=front;i<=rear;i++)
                    {
                        printf("%d\n",A[i]);
                    }

                }

                break;
            case 4:
            {
                printf("Exiting..");
                break;
            }
            default:
                printf("Invalid choice");

        }
    }
    while(choice!=4);
    return 0;
}