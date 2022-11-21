/*
 * Date edited: November 20th, 2022
 * Editor: Kylar Johnson
 * 
 * First phase: one segment no obstacles no rotation
 * Second phase: one segment no obstacles w/ rotation
 * Third phase: one segment w/ obstacles w/rotation
 * Fourth phase: two segment no obstacles w/ rotation
 * Fifth phase: two segment w/ obstacles w/ rotation
 * Sixth phase: three segment no obstacles w/ rotation
 * Seventh phase: Three segment w/ obstacles w/ rotation
 */
#include <stdio.h>
#include <stdlib.h>

//Start with linked list grid using whole numbers, won't work
//Break arm down into vector 

struct seg{
    int x;
    int y;
    int length; 
};

struct arm{
    int segments;
    struct seg* seg1;
};

/*Creates an arm*/
struct arm* arm_create(){
    struct arm* arm = malloc(sizeof(struct arm));
    arm->seg1 = NULL;
    return arm;
}

/*Returns how many arm segments it would need to use to get to 
target distance if it could go in a straight line. Assume all segments
are the same length
Input: Arm, distance
Output: Number of segments required to reach distance
*/
int in_range(struct arm* arm, int dist){
    if(arm->segments*arm->seg1->length<dist){
        return -1;
    }
    if(dist<arm->seg1->length){
        return 2;
    }
    for(int i = 0; i<=arm->segments; i++){
        if(i*arm->seg1->length>dist){
            return i;
        }
    }
    return -1;
}
