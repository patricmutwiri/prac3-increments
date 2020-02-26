#include <stdio.h>
#include <stdlib.h>

main()                          //  Defines main function
{
    int i, j, a=1;              //  Defines variables i,j and a as integers and also initiates a as 1.
    for(i=1; i<=5;i++) {        //  Start a for loop using i as 1, incrementing by 1 step(value) up to 5.
        for(j=1; j<=i;j++) {    //  Start a for loop using j as 1, incrementing by 1 step(value) up to i's current value which is also looping from the outer for loop.
            printf("%d ",a);   //  Format integer a and print it out to the screen.
            a+=2;               //  Increment/Sum the value of a with its previous value and 2. Adds 2 to the previous value of a.
        }                       //  Closes inner loop iteration.
        printf("\n");           //  Prints a new line after every outer iteration.
    }                           //  Ends the outer for loop/iteration.
    return 0;                   //  Returns 0, to force a successful run.
}

// When it runs, something as below is displayed

// 1
// 3 5
// 7 9 11
// 13 15 17 19
// 21 23 25 27 29
