/**
 * Constant Macro - A name that is replaced by a particular constant value
 * before the program is sent to the compiler
 * 
 */

// Notice: No semicolon needed at the end
#include <stdio.h>
#define PI 3.141593
#define AGE 67
#define MILE_PER_KM 0.62137

int main(int argc, char const *argv[])
{
    //Printing out values
    printf("PI: %f \n", PI);
    printf("AGE: %d \n", AGE);
    printf("MILE_PER_KM: %f \n", MILE_PER_KM);

    return 0;
}
