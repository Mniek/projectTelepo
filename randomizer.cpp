
/** @file */

/*
FUNDAMENTALS OF COMPUTER PROGRAMMING
 
Lecture 7 & 8: singly linked list 
 
 */

#define debug(x)   cerr << "(" << __LINE__ << ") " << #x << " == " << (x) <<  endl



#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <random>
#include <sstream>
#include<iomanip>

#include "functions.h"
#include "structures.h"


using namespace std;



// -----------------------------Silnik randomizujący miast ---------------------------------------------

    //randomCityGenerator
    string randomCityMachineEngine( size_t length)
    {
      static const string alphabet = "qwertyuiopasdfghjklzxcvbnm";
      static default_random_engine randomCity(time(nullptr));
      static uniform_int_distribution<size_t>distribution(0,alphabet.size()-1);
      string city;


      while(city.size()<length)
      {
        city += alphabet[distribution(randomCity)];
      
      }  
 
      return city;
    }



//randomDistanceEngine
default_random_engine randomDistance;
uniform_int_distribution<int> distribution(1,1225);


//-------------------------------------Zaczynamy listę!!!!---------------------------------------------









//Zrandomizowane generowanie miast
string newCity()
{
  string miastoPocz;
  stringstream mP;
  

  for(size_t i = 0 ; i <6  ; i ++  )
    mP << randomCityMachineEngine(i);

     mP>>miastoPocz;
     
    mP.str( string());
     return miastoPocz;
}

void lista::dodajRandomMiasta()
{

  koneksja *random = new koneksja;

  random -> miastoPocz = newCity();
  random -> miastoKonc = newCity();
  random -> odleglosc = distribution(randomDistance) ;

  if(pierwsza == 0 )
  {
    pierwsza = random;

  }
  else
  {
    koneksja *temp = pierwsza;
    
    while(temp -> nastepna )
    {
      
        temp =  temp->nastepna;

    
    }
    temp ->nastepna = random;

    random -> nastepna =0;
      temp;
      temp =  temp->nastepna;   //tu się przelewa
  }

 
 }


    //Wyświetlenie zasobów listy
    void lista::wyswietlListe()
  {
    const int space = 1;
    koneksja*temp = pierwsza;
    temp;



    ofstream strumienMiast("randomy" , ios::trunc | ios::out );
    while(temp)
    {
      cout<<"Miasto Początkowe: "<<temp->miastoPocz<<endl<<"Miasto Końcowe: "<< temp->miastoKonc<<endl<<"Odległość pomiędzy: "<< temp->odleglosc<<endl<<endl;



      strumienMiast <<temp->miastoPocz<<setw(space)<<" "<< temp->miastoKonc<<setw(space)<<" "<< temp->odleglosc<<endl<<endl;
      temp = temp->nastepna;  
    }

    strumienMiast.close(); 
 
  }

int main()
{

    lista *miastaPolski = new lista;
    int ilosc;
    cin>>ilosc;

    for(int i = 0; i<ilosc; i++)
    {
      
        miastaPolski ->dodajRandomMiasta();
           
    }
miastaPolski ->wyswietlListe();
miastaPolski;
}















