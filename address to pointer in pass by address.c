/* This program demonstrates passing a variable to a function by address. Note- it will truncate an odd number.*/

#include <stdio.h>



main()
{

    int i;

    printf("Please enter and integer...");
    scanf(" %d", &i);

    //Now call the half function, passing the address of i

    half(&i);
    //Show that the function did alter i's value
    printf("In main(), i is now %d\n", i);

    return(0);
}
    /******************************************************************************************************/

    /*The above is a break between functions, as a formatting touch*/

        half(int *i)
        {

            *i = *i/2;
            printf("Your value halved is %d.\n", *i);
            return;// ... and back to main


        }



