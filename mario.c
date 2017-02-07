#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = 0;
    int stackCounter = 0;
    
    do {
    printf("Height: ");        
    height = get_int();
    } while (height>=24 || height<0);
    
    stackCounter = height;
    
    while (stackCounter > 0){
        for (int space = 1; space<=height; space++){
            if (space<stackCounter){
                printf(" ");
            } else {
                printf("#");
            }
        }
        printf("  ");
        for (int space = height; space>0; space--){
            if (space>=stackCounter){
                printf("#");
            }
        }
        printf("\n");
        stackCounter--;
    }
}