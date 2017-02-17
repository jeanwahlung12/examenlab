#pragma once

#include <iostream>
#include<string>

using namespace std;

class guardia{
   private:
      string nombre;
      int edad;
      string tiposoldado; 
      double ataque;
      double defensa;
   public:
      guardia();
      ~guardia();
      void setnombre(string);
      void setedad(int);
      void settiposoldado(string);
      void setataque(double);
      void setdefensa(double);
      string getnombre();
      int getedad();
      string gettiposoldado();
      double getataque();
      double getdefensa();
};


