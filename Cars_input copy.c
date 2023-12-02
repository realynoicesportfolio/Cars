// Header files needed to run this programm.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "car_struct.h"


int main() {
    // Used as data holders for certant tasks.
    int Car_Types;
    int Inside_Car_Types_case_1;
    int Inside_car_Types_case_2;

    // Data held as car data. Possably more?
    car Forumula_1 = {"Mercedes", "V-1", " ", 1, 10000.};
    car Honda_Civic = {"Honda", "1.3", "AUTO FWD", 5, 100000.};

    // User Interface.
    printf("Input 1 to see the information on the F-1 car.");
    printf("\nInput 2 to see the information on the 2007 Honda Civic.");
    printf("\n\nPlease put your input here: ");
    scanf("%d", &Car_Types);

    
    switch (Car_Types) {

    // Used to choose.
    case 1:
        printf("\nFor the information on the brand of the F-1 car enter 1.");
        printf("\nFor the information on the engine of the F-1 car enter 2.");
        printf("\nFor the information on the seats of the F-1 car enter 3.");
        printf("\nFor the information on the mileage of the F-1 car enter 4.");
        printf("For all of the information enter 5.");
        printf("\n\nPut your input here: ");
        scanf("%d", &Inside_Car_Types_case_1);

        // Used for entering diffrent paths.
        switch (Inside_Car_Types_case_1)
        {
        case 1:
            printf("\nThe people who made the F-1 car are under the %s", Forumula_1.Brand);
            printf(" brand.\n");
            break;
        
        case 2:
            printf("\nThe engine of the F-1 car is the %s", Forumula_1.Engine_1);
            printf(" engine.\n");
            break;

        case 3:
            printf("\nThere are %d", Forumula_1.Seats);
            printf(" In the F-1 car.\n");
            break;

        case 4:
            printf("\nThe mileage on the F-1 car is %f", Forumula_1.mileage);
            printf(" miles.\n");
            break;

        case 5:
            printf("\nThe people who made the F-1 car are under the %s", Forumula_1.Brand);
            printf(" brand.");
            printf("\nThe engine of the F-1 car is the %s", Forumula_1.Engine_1);
            printf(" engine.");
            printf("\nThere are %d", Forumula_1.Seats);
            printf(" In the F-1 car.");
            printf("\nThe mileage on the F-1 car is %f", Forumula_1.mileage);
            printf(" miles.\n");
            break;

        // If this dose not work.
        default:
            printf("\nInvald integer.");
            return -1;
            break;
        }
        break;
    
    // Used to choose.
    case 2:
        printf("\nFor the information on the brand of the Honda Civic car enter 1.");
        printf("\nFor the information on the engine of the Honda Civic car enter 2.");
        printf("\nFor the information on the number of seats of the Honda Civic car enter 3.");
        printf("\nFor the information on the amount of mileage of this Honda civic car enter 4.");
        printf("\nFor the information on everything enter 5.");
        printf("\n\nPut your input here: ");
        scanf("%d", &Inside_car_Types_case_2);

        // Used to choose enter in paths.
        switch (Inside_car_Types_case_2) {
        case 1:
            printf("\nThe people who made the Honda civic car are under the %s", Honda_Civic.Brand);
            printf(" brand.\n");
            break;
        
        case 2:
            printf("\nThe engine of the Honda Civic is the %s", Honda_Civic.Engine_1);
            printf(" %s", Honda_Civic.Engine_2);
            printf(" engine.\n");
            break;

        case 3:
            printf("\nThere are %d", Honda_Civic.Seats);
            printf(" In the Honda Civic.\n");
            break;

        case 4:
            printf("\nThe mileage on the Honda Civic is %f", Honda_Civic.mileage);
            printf(" miles.\n");
            break;

        case 5:
            printf("\nThe people who made the Honda civic car are under the %s", Honda_Civic.Brand);
            printf(" brand.");
            printf("\nThe engine of the Honda Civic is the %s", Honda_Civic.Engine_1);
            printf(" %s", Honda_Civic.Engine_2);
            printf(" engine.");
            printf("\nThere are %d", Honda_Civic.Seats);
            printf(" seats In the Honda Civic.");
            printf("\nThe mileage on the Honda Civic is %f", Honda_Civic.mileage);
            printf(" miles.\n");
            break;
 
        // If this dose not work/fails.
        default:
            printf("\nInvald integer.");
            return -1;
            break;
        }
        break;
    
    // If this fails.
    default:
        printf("\nInvald run again.\n");
        return -1;
        break;
    }
    
    // This works :)!!!
    // As of November 25th this code is bug free!!!!
    // Yayyyyy.
    return 0;
}