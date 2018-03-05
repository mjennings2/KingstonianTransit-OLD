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
    // Traffic count

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
    /*
    for (i = 0; i < n; i++)    {
        int temp = 0;
        int temp2 = 0;
        fscanf(trafficFile,"%f %f %f %f %f %f",temp,temp2,&north[temp][temp2],&south[temp][temp2],&east[temp][temp2],&west[temp][temp2]);
        printf("%f %f\n",temp,temp2);
    }*/
  //  fclose(trafficFile);







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




