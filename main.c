/* demo program for scanf 
   int scanf(const char *fmt, ptr1, ptr2, ... ptrn);
*/
#include <stdio.h>
/*
 * Create a character array for the States.
 * Create a variable for population size.
 * While the States and population do not equal to the EOF (ctrl -D), read in keyboard input.
 * If the population of a state is greater than 10 then save it to output later.
 */

/*
#include <stdio.h>

main()
{
    int c;

    while ((c = getchar())!= EOF)
        putchar(c);
}*/
main()
{
    //variables
    char State[10];
    char population;
    int count = 0;
    while((population = getchar()) != EOF) {
        putchar(population);
        if(population >= 10)
        {
            State[count] = population;
            count++;
        }
    }
    printf("%s", State);
    return 0;
}


//int i1, i2;
//float flt;
//char str1[10], str2[10];
//
//scanf("%2d %2d %f %s %s", &i1, &i2, &flt, str1, str2);
//
//printf("i1 would be set to %d\n", i1);
//printf("i2 would be set to %d\n", i2);
//printf("flt would be set to %f\n", flt);
//printf("str1 would be set to %s\n", str1);
//printf("str2 would be set to %s\n", str2);