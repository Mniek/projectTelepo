/** @file */

/*
FUNDAMENTALS OF COMPUTER PROGRAMMING
 
Lecture 7 & 8: singly linked list
 
 */

#define debug(x)  std::cerr << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl

#include <iostream>   
#include <fstream> 
#include <string>
#include <sstream>
#include <algorithm>
#include "functions.h"
#include "structures.h"
#include <locale>



using namespace std;
 
 void replaceFunction(string toChange, char symbolToChange, char newSymbol)
 {
    
     replace(toChange.begin(),toChange.end(), symbolToChange, newSymbol);
}
void lineCutter()
{
        ifstream telefony("tekst.txt");
        string container;
        long numerNad;
        string data;
        string godzina;
        long numerOdb;
        string czasTrw;
        string koszt;
        int counterWords =0;
        stringstream beforeConv;
        string countHelper; 
if(telefony)
{
    cout<< "Wszedłem";
    if(telefony.is_open())
    {
        while(telefony)
        if(isdigit(telefony))
        
        telefony>>numerNad>>data>>godzina>>numerOdb>>czasTrw>>koszt;
        
        cout<<numerNad<<endl<< data;
}
int main ()
{

        
        //Policz czy w linii jest 6 wyrazów, potem podziel i pozmieniaj znaki, splity, merdże, takie tam, tu jest link
        //https://stackoverflow.com/questions/3672234/c-function-to-count-all-the-words-in-a-string
//         while(beforeConv<<container)
//         {
//          counterWords++   ;
//         
//         }
//         cout<<counterWords;
//         if(counterWords==6)
//         {
//             replaceFunction(container, ':', ' ');
//             replaceFunction(container, '.', ' ');
//             istringstream converter;
//             converter.str(container);
//             while( converter.eof() )
//             {
//                 long long nr;
//                 string data;
//                 string godzina;
//             }
//         }
//     long liczba;
//     stringstream data;
//     telefony >> liczba; 
//     string slowo;
//     getline(telefony, data);
//     telefony >> slowo; // Odczytanie słowa z pliku
//     //data << telefony;
//     cout<< liczba<<"     "<< " ___________ "<<liczba;
    }
}
else{
    cout<<"Dupa";
}

// long  number = 1234567890122345;
// char[10] slowo = "2016-11-02";
// cout<< number;

    return 0; 
   
} 

// Ubi sunt qui ante nos fuerunt?
