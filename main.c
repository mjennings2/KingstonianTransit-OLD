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
int DISTANCE = 150;


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
    // Find out how many lines are in the text file
    int n;
    fscanf(trafficFile,"%d",&n);
    printf("%d\n",n);

    // Import Data
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
    // Find out how many lines are in the text file
    n = 0;
    fscanf(lightFile,"%d",&n);
    printf("%d\n",n);

    double greenTimes [n];
    double amberTimes [n];
    double allRedTimes [n];
    double redTimes [n];

    // Import Data
    for(i = 0; i < n; i++){
        fscanf(lightFile, "%f %f %f %f", &greenTimes[i], &amberTimes[i], &allRedTimes[i], &redTimes[i]);
        printf("%f %f %f %f\n", greenTimes[i], amberTimes[i], allRedTimes[i], redTimes[i]);
    }
    fclose(lightFile);

    // Scan buses file to input how many buses go each hour.
    FILE * busesFile;
    busesFile = fopen("../busses.txt","r");
    if(busesFile == NULL){
        printf("Could not open buses file\n");
    }
    // Find out how many lines are in the text file
    n = 0;
    fscanf(busesFile,"%d",&n);
    printf("%d\n",n);

    // Import Data
    int busesPerHour[n];
    for(i = 0; i < n; i++){
        fscanf(busesFile, "%d", &busesPerHour[i]);
        printf("%d\n", busesPerHour[i]);
    }
    fclose(busesFile);

    // Computation

    // Calculate percent chances
    // given 50 km/h on princess and 20 km/h leaving the Cataraqui center
    int speed [4] = {14, 14, 14, 6};
    int percentGreen [4];
    int percentExtend [4];
    int percentRed [4];
    int timeFor150m [4];

    // Calculate how long it takes for the bus to go 150m (amount of time that the bus will extend the light for)
    for(i = 0; i < 4; i++){
        timeFor150m[i] = DISTANCE / speed[i];
    }

    int hour = 0;
    int maxHours = 24;

    int j, k;
    int arrivals [4];
    int extensions[4];
    int truncations [4];
    int greenLights [4];
    // Simulate bus loop
    for(hour = 0; hour < maxHours; hour++){
        for(i = 0; i < busesPerHour[hour]; i++){

        }
    }

    // Output
    printf("Hello Workd!\n");
    i = 0;
    for(i=0; i<3;i++){
        printf("%d\n",i);
       //printf("%c",line[i]);
    }
    //return 0;
}




