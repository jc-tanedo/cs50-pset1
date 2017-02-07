#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    
    float changeOwedF;
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0, total = 0;
    
    printf("O hai! How much change is owed?\n");
    do {
    changeOwedF = get_float();
    if (changeOwedF < 0) { printf("How much change is owed?\n"); };
    } while (changeOwedF<0);
    int changeOwedI = roundf(changeOwedF * 100);
    
    if (changeOwedI >= 25) {
        total += changeOwedI / 25;
        quarters = changeOwedI / 25;
        changeOwedI = changeOwedI % 25;
    }
    if (changeOwedI >= 10) {
        total += changeOwedI / 10;
        dimes = changeOwedI / 10;
        changeOwedI = changeOwedI % 10;
    }
    if (changeOwedI >= 5) {
        total += changeOwedI / 5;
        nickels = changeOwedI / 5;
        changeOwedI = changeOwedI % 5;
    }
    if (changeOwedI >= 1) {
        total += changeOwedI / 1;
        pennies = changeOwedI / 1;
        changeOwedI = changeOwedI % 1;
    }
    
    /*
    printf("Breakdown: \n");
    if (quarters!=0) { printf("%i quarters\n", quarters);};
    if (dimes!=0) { printf("%i dimes\n", dimes); };
    if (nickels!=0) { printf("%i nickels\n", nickels); };
    if (pennies!=0) { printf("%i pennies\n", pennies); };
    printf("\nTotal:\n");
    */
    
    printf("%i\n", total);
    
}