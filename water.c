#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Minutes: ");
    int showerMinutes = get_int();
    
    printf("Bottles: %i\n",showerMinutes*12);
}