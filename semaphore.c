#include<stdio.h>
#include<stdlib.h>
int mutex=1,empty,x,count=0,full=0,empty;
void producer()
{
    mutex--;
    full++;
    empty--;
    x++;
    printf("Producer produces the item %d",x);
    mutex++;
}
void consumer()
{
    mutex--;
    full--;
    empty++;
    printf("Consumer consumes the item %d",x);
    x--;
    mutex++;
}
int main()
{
    int op,n;
    printf("Enter the size of the buffer:");
    scanf("%d",&n);
    empty=n;
    while(1)
    {
        printf("\n1.Producer\n2.Consumer\n3.Exit\n");
        printf("Enter the option:");
        scanf("%d",&op);
        switch (op) 
        {
        case 1:
            if((mutex==1)&&(empty!=0))
            {
                producer();
            }
            else
            {
                printf("\nBuffer is full!!");
            }
            break;
        case 2:
            if((mutex==1)&&(full!=0))
            {
                consumer();
            }
            else
            {
                printf("Buffer is empty!!");
            }
            break;
        case 3:
            printf("\nExiting...\n");
            exit(0);
            break;
        default:
            printf("\nInvalid case!!\n");
            break;
        }
    }
    return 0;
}