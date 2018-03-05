//
// Created by Mathew on 2/15/2018.
//yo its ben.
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

    int i=0;
    int trafficCount [3][12][4][1];
    int intersections [4] = { };
    int hours [12] = { 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
    int north [3][12];
    int south [3][12];
    int east [3][12];
    int west [3][12];


    // Scan Traffic count and input number of cars in each direction
    FILE * trafficFile;
    trafficFile = fopen("../trafficCount.txt","r");
    if (trafficFile == NULL){
        printf("Could not open traffic file\n");
    }

    int n;
    fscanf(trafficFile,"%d",&n);
    printf("%d\n",n);

    for (i = 0; i < n; i++){
        int temp = 0;
        int temp2 = 0;
        fscanf(trafficFile, "%d %d", &temp, &temp2);
        printf("%d %d\n", temp, temp2);
        fscanf(trafficFile," %d %d %d %d",&north[temp][temp2],&south[temp][temp2],&east[temp][temp2],&west[temp][temp2]);
        printf("%d %d %d %d\n", north[temp][temp2], south[temp][temp2], east[temp][temp2], west[temp][temp2]);
    }
    fclose(trafficFile);

    // Scan Intersections and input amount of time for each phase of the light in the buses direction of travel.
    // This is for the direction the bus is traveling (EBL/WBL, E/W, NBL/SBL, N/S)
    // Intersection Green Amber All-Red Red
    i = 0;

    FILE * lightFile;
    lightFile = fopen("../Intersections.txt","r");
    if (lightFile == NULL){
        printf("Could not open Light file\n");
    }
    n = 0;
    fscanf(lightFile,"%d",&n);
    printf("%d\n",n);

    int greenTimes [n];
    int amberTimes [n];
    int allRedTimes [n];
    int redTimes [n];

    for(i = 0; i < n; i++){
        fscanf(lightFile, "%d %d %d %d", &greenTimes[i], &amberTimes[i], &allRedTimes[i], &redTimes[i]);
        printf("%d %d %d %d\n", greenTimes[i], amberTimes[i], allRedTimes[i], redTimes[i]);
    }




    // Computation


    // Output
    printf("Hello Workd!\n");
    i = 0;
    for(i=0; i<3;i++){
        printf("%d\n",i);
       //printf("%c",line[i]);
    }
    //return 0;
}




