/** @file */

/*
FUNDAMENTALS OF COMPUTER PROGRAMMING
 
Lecture 7 & 8: singly linked list

 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream> 
#include "structures.h"

/** The function add a value at the beginning of a singly linked list.
@param[in, out] pHead pointer to the first item in a singly linked list  
@param value value to add
*/
void addBeginning (item * & pHead, const type & value);

/** The function prints all items from the first to the last iteratively.
@param pHead pointer to the first item in a singly linked list
*/
void printBeginningIter (item * pHead);

/** The function prints all items from the first to the last iteratively.
@param pHead pointer to the first item in a singly linked list
@param[in, out] ss output stream to print into
*/
void printBeginningIter (item * pHead, std::ostream & ss);

/** The function removes all item iteratively.
@param[in, out] pHead pointer to the first item in a singly linked list.
*/
void removeIter (item * & pHead);

/** The function add a value at the end of a singly linked list (iteratively).
@param[in, out] pHead pointer to the first item in a singly linked list
@param value value to add
*/
void addEndIter (item * & pHead, const type & value);

/** The function add a value at the end of a singly linked list (recursively).
@param[in, out] pHead pointer to the first item in a singly linked list
@param value value to add
*/
void addEndRec(line*& pHead, const type& value);

/** The function prints all items from the first to the last (recursively).
@param pHead pointer to the first item in a singly linked list
@param[in, out] ss output stream to print into
*/
void printBeginningRec (item * pHead, std::ostream & ss);

/** The function prints all items from the last to the first (recursively).
@param pHead pointer to the first item in a singly linked list
@param[in, out] ss output stream to print into
*/
void printEndRec (item * pHead, std::ostream & ss);

/** The function removes all items from the first to the last (recursively).
@param[in, out] pHead pointer to the first item in a singly linked list 
*/
void removeBeginningRec (item * & pHead);

/** The function removes all items from the last to the first (recursively).
@param[in, out] pHead pointer to the first item in a singly linked list 
*/
void removeEndRec (item * & pHead);

#endif
