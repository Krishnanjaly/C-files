#include<stdio.h> 
struct 
{ 
int coeff; 
int expo; 
} 
x[15]; 
int main() 
{ 
int firstCount; 
printf("Enter no of terms:"); 
scanf("%d",&firstCount); 
for(int i=0;i<firstCount;i++) 
{
printf("Enter the coefficient of the term:"); 
scanf("%d",&x[i].coeff); 
printf("Enter the exponent of the term:"); 
scanf("%d",&x[i].expo); 

} 
printf("The polynomial is:"); 
for(int i=0;i<firstCount;i++) 
{ 
if(i==(firstCount-1)) 
{ 
printf("%dx^%d",x[i].coeff,x[i].expo); 
break; 
} 
printf("%dx^%d+",x[i].coeff,x[i].expo); 
} 
return 0; 
}
