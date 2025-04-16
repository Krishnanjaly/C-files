#include<stdio.h>
int main()
{
    int n,item,choice;
    char ch;
    int front=-1;
    int rear=-1;
    printf("Enter the size of the queue:");
    scanf("%d",&n);
    int cq[n];
    do
    {
        printf("\nOPERATIONS:\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter a choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:

                if(front==(rear+1)%n)
                {
                    printf("\nOverflow");
                }
                else
                {
                    if(front ==-1)
                    {
                        front=0;
                    }
                    rear=(rear+1)%n;
                    printf("Enter the item to be inserted:");
                    scanf("%d",&item);
                    cq[rear]=item;
                }
                break;
            case 2:

                if(front==-1)
                {
                    printf("\nUnderflow");
                }
                else
                {
                    if(front==-1)
                    {
                        item=cq[front];
                        front=-1;
                        rear=-1;
                        printf("The deleted element is %d",item);
                    }
                    else
                    {
                        item=cq[front];
                        front=(front+1)%n;
                        printf("The deleted element is %d",item);
                    }
                }

                break;
            case 3:
                if(front==-1)
                {
                    printf("\nQueue is empty");
                }

                else
                {
                    printf("The queue is:");
                    if(front<rear)
                    {
                        for(int i=front;i<=rear;i++)
                        {
                            printf("%d\t",cq[i]);
                        }
                    }
                    else{
                        for(int i=front;i<=n-1;i++)
                        {
                            printf("%d\t",cq[i]);
                        }
                        for(int i=0;i<=rear;i++)
                        {
                            printf("%d\t",cq[i]);
                        }
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