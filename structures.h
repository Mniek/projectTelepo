/** @file */

/*
FUNDAMENTALS OF COMPUTER PROGRAMMING
 
Lecture 7 & 8: singly linked list

*/


#ifndef STRUCTURES_H
#define STRUCTURES_H
#include "structures.h"
#include<sstream>

using namespace std;
/** type of data stored in a list */
typedef int type; 
typedef long long nr;

struct line
{
    nr callerNumber;
   std:: string date;
    stringstream    startHour;
    nr answerNumber;
    stringstream duration;
    stringstream cost;
    line *pNextL;
    
};
/** item of a singly linked list */
struct item
{
    
    item * pNextI; ///< pointer to the next item
};

#endif 
