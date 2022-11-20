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

//Start with linked list grid using whole numbers, won't work
//Break arm down into vector 

struct seg{
    int x;
    int y;
}

struct arm{
    struct seg seg1;
}
