#include <stdio.h>

int main(){
    int lang, service;
    printf("Welcome to Telecone Call Services!\n");
    printf("Please select your language:\n");
    printf("1. English\n");
    printf("2. Hindi\n");
    printf("3. Gujarati\n");
    
    printf("Enter your choice: ");
    scanf("%d", &lang);

    switch(lang) {
        case 1:
            printf("\nYou have selected English.\n");
            printf("Please select a service:\n");
            printf("1. Internet Recharge\n");
            printf("2. Top-up Recharge\n");
            printf("3. Special Recharge\n");
            printf("Enter your choice: ");
            scanf("%d", &service);
            switch(service) {
                case 1:
                    printf("You have successfully done an Internet Recharge.\n");
                    break;
                case 2:
                    printf("You have successfully done a Top-up Recharge.\n");
                    break;
                case 3:
                    printf("You have successfully done a Special Recharge.\n");
                    break;
                default:
                    printf("Invalid service selection.\n");
            }
            break;
        case 2:
            printf("\nAapne Hindi chuni hai.\n");
            printf("Kripya seva chunein:\n");
            printf("1. Internet Recharge\n");
            printf("2. Top-up Recharge\n");
            printf("3. Special Recharge\n");
            printf("Apna vikalp darj karein: ");
            scanf("%d", &service);
            switch(service) {
                case 1:
                    printf("Aapne safaltapurvak Internet Recharge kar liya hai.\n");
                    break;
                case 2:
                    printf("Aapne safaltapurvak Top-up Recharge kar liya hai.\n");
                    break;
                case 3:
                    printf("Aapne safaltapurvak Special Recharge kar liya hai.\n");
                    break;
                default:
                    printf("Galat seva vikalp.\n");
            }
            break;
        case 3:
            printf("\nTame Gujarati pasand kari che.\n");
            printf("Kripya seva pasand karo:\n");
            printf("1. Internet Recharge\n");
            printf("2. Top-up Recharge\n");
            printf("3. Special Recharge\n");
            printf("Tamaro vikalp nakho: ");
            scanf("%d", &service);
            switch(service) {
                case 1:
                    printf("Tame safaltapurvak Internet Recharge karyu che.\n");
                    break;
                case 2:
                    printf("Tame safaltapurvak Top-up Recharge karyu che.\n");
                    break;
                case 3:
                    printf("Tame safaltapurvak Special Recharge karyu che.\n");
                    break;
                default:
                    printf("Khoto seva vikalp.\n");
            }
            break;
        default:
            printf("Invalid language selection.\n");
    }

    return 0;

}