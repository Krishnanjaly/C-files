#include <stdio.h>
#define C 100
union PersonalDetail {
    char name[C],house[C],city[C],state[C];
    long long pincode;
};
int main() {
   union PersonalDetail details;
        printf("Name: ");
        scanf(" %[^\n]",details.name); 
        printf("You name is %s.\n", details.name);
        printf("House Name: ");           
        scanf(" %[^\n]",details.house);
        printf("Your house name is %s.\n", details.house);
        printf("City: ");
        scanf(" %[^\n]",details.city);
        printf(" %s is your city.\n",details.city);
        printf("State: ");
        scanf(" %[^\n]",details.state);
        printf(" Your state is %s.\n",details.state);
        printf("Pincode: ");
        scanf(" %lld",&details.pincode);
        printf(" %lld is your pincode.\n", details.pincode);
        return 0;
}