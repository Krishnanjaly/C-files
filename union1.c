#include <stdio.h>
#include <string.h>
union PersonalDetail {
    char name[100],house[100],city[100],state[30];
    long long pincode;
};
int main() {
   union PersonalDetail details;
        printf("Name: ");
        scanf("%s",details.name); 
        printf("House Name: ");           
        scanf("%s",details.house);
        printf("City: ");
        scanf("%s",details.city);
        printf("State: ");
        scanf("%s",details.state);
        printf("Pincode: ");
        scanf("%lld",&details.pincode);
    printf("\nPersonal Details:\n");
    printf("\nName:\tHouse Name:\tCity:\tState:\tPincode:\n");
        printf("%s\t", details.name);
        printf("%s\t", details.house);
        printf("%s\t",details.city);
        printf("%s\t",details.state);
        printf("%lld\n", details.pincode);
      return 0;
}