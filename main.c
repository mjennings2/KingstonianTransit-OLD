//
// Created by Mathew on 2/15/2018.
//
#include <stdio.h>
// Maximum & Minimum values for truncation and extension (s)
int MIN_TRUNC = 0;
int MAX_TRUNC = 5;
int MIN_EXTE = 0;
int MAX_EXTE = 15;
int CHANGE = 1;



// 4 Directions at an intersections
int DIRECTIONS = 4;

int main() {

    // Input:

    /* We will be Imputing data from an text file, into an intersection array with values for all intersections
     * The array will operate similar to a class.
     * Data will include:
     * number of cars per hour for the 4 different directions in an array
     * Light timing In format TBD.
     *
    */
    int n;
    char line[80];

    fr = fopen ("Intersections.txt", "r");  /* open the file for reading */

    while(fgets(line, 80, fr) != NULL)
    {
        /* get a line, up to 80 chars from fr.  done if NULL */
        sscanf  ( line );
    }
    fclose(fr);  /* close the file prior to exiting the routine */





    // Computation


    // Output
    printf("Hello Workd!");
    return 0;
}




