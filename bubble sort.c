/* This program generates 10 random numbers and then sorts them.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



main()
{
    int ctr, inner, outer, didSwap, temp;
    int nums[10];
    time_t t;

    //If you don't include this, you always get the same 10 numbers

    srand(time(&t));

    //fill the array with random numbers from 1-100

    for(ctr = 0; ctr < 100; ctr++)
    {
        nums[ctr] = (rand() % 99) + 1;

    }

    //Now list the array as it currently is before sorting
    puts("\nHere is the list before you sort:");
    for (ctr =0; ctr < 10; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }

    //Sort the array

    for (outer = 0; outer < 9; outer++)
    {
        didSwap = 0; //Becomes 1 (true) when list is ordered
        for (inner = outer; inner < 10; inner++)
        {
            if (nums[inner] < nums[outer])
            {
                temp = nums[inner];
                nums[inner] = nums[outer];
                nums[outer] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }

    //Now list the array as it currently is after sorting
    puts("\nHere is the list after the sort:");
    for(ctr = 0; ctr < 10; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }


     return(0);
}

