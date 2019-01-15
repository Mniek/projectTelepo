/** @file */

/*
FUNDAMENTALS OF COMPUTER PROGRAMMING
 
Lecture 7 & 8: singly linked list 
 
 */

#define debug(x)  std::cerr << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl


#include <iostream>

#include "functions.h"
#include "structures.h"

void removeEndRec (item * & pHead)
{
    if (pHead)
    {
        removeEndRec(pHead->pNext); // delete all my neighbours
        delete pHead;               // delete me
        pHead = nullptr;            // do not forget!
    }
}

void removeBeginningRec (item * & pHead)
{
    if (pHead)
    {
        auto myNext = pHead->pNext;  // save address of my neighbours
        delete pHead;                // delete me
        pHead = nullptr;             // do not forget!
        removeBeginningRec(myNext);  // remove all my neighbours
    }
}

void printEndRec (item * pHead, std::ostream & ss)
{
    if (pHead)
    {
        printEndRec(pHead->pNext, ss);  // print my neighbours
        ss << pHead->value << " ";      // print me (to the output stream)
    }
}

void printBeginningRec (item * pHead, std::ostream & ss)
{
    if (pHead)
    {
        ss << pHead->value << " ";             // print me
        printBeginningRec(pHead->pNext, ss);   // print my neighbours
    }
}

void addEndRec (item * & pHead, const type & value)
{   
    if (not pHead) // empty list
       pHead = new item { value, nullptr };
    else
       addEndRec(pHead->pNext, value);
}

void addEndIter (item * & pHead, const type & value)
{
    if (not pHead) // empty list
        pHead = new item { value, nullptr };
    else
    {
        auto p = pHead;
        while (p->pNext)
            p = p->pNext; // move to the next item 
        // p – last item in the list
        
        p->pNext = new item {value, nullptr};
    }    
}

void removeIter (item * & pHead)
{
    while (pHead)
    {
        auto p = pHead; 
        pHead = pHead->pNext;
        delete p;
    }
    // Are you sure pHead == nullptr here?
}

void printBeginningIter (item * pHead)
{
    // version 1
//     if (pHead) // nonempty list  
//     {
//         auto p = pHead;
//      
//         while (p)
//         {
//             std::cout << p->value << " ";
//             p = p->pNext;
//         }
//     }
    
//     //version 2:
//     auto p = pHead;
//     
//     while (p)
//     {
//         std::cout << p->value << " ";
//         p = p->pNext;
//     }

    //version 3:
    while (pHead)
    {
        std::cout << pHead->value << " ";
        pHead = pHead->pNext;
    }
}
 
 
void addBeginning (item * & pHead, const type & value)
{
    // version 1:
//    if (pHead == nullptr) // empty list  
//    {
//        item * pNew = new item ();
//        pNew->value = value; 
//        pNew->pNext = 0; // nullptr
//        
//        pHead = pNew;
//    }
//    else // not empty list
//    {
//        auto pNew = new item { value, pHead } ;
//        pHead = pNew;
//    }
   
//    // version 2:
//    item * pNew; 
//    
//    if (pHead == nullptr) // empty list  
//    {
//        pNew = new item ();
//        pNew->value = value; 
//        pNew->pNext = 0; // nullptr
//        
//         
//    }
//    else // not empty list
//        pNew = new item { value, pHead } ;
//        
//     pHead = pNew;
   
   
//      // version 3:
//    item * pNew; 
//    
//    if (pHead == nullptr) // empty list  
//        pNew = new item { value, nullptr};
//    else // not empty list
//        pNew = new item { value, pHead } ;
//        
//     pHead = pNew;
   
   
        // version 4
//    item * pNew; 
//    
//    if (pHead == nullptr) // empty list  
//        pNew = new item { value, pHead };
//    else // not empty list
//        pNew = new item { value, pHead } ;
//        
//     pHead = pNew;
   
   
   // version 5
//    item * pNew; 
//    pNew = new item { value, pHead};
//    pHead = pNew;

      // version 6
//    item * pNew = new item { value, pHead};
//    pHead = pNew;
   
    
   // version 7
   pHead = new item { value, pHead};
   
}

