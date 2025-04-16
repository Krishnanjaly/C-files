#include<stdio.h>
int main()
{
    int x;
    float y,t;
    printf("Enter the value of temperature:");
    scanf("%f",&t);
    printf("Select '1' for the conversion of celsius to farenheit or Select '2' for the conversion of farenheit to celsius.");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
         y=(t*1.8)+32;
         printf("Farenheit=%f",y);
         break;
        case 2:
         y=(t-32)*5/9;
         printf("Celsius=%f",y);
         break;
        default:
         printf("Invalid case");
         break;
    }
    return 0;
}