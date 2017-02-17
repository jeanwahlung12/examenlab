#pragma once

#include <iostream>
#include<string>

using namespace std;

class dothraki{
   private:
      string nombre;
      string jefebarbaro;
      string nombrecaballo;   
      string colorcaballo;
      double ataque;
      double defensa;
   public:
      dothraki();
      ~dothraki();
      void setnombre(string);
      void setjefebarbaro(string);
      void setnombrecaballo(string);
      void setcolorcaballo(string);
      void setataque(double);
      void setdefensa(double);
      string getnombre();
      string getjefebarbaro();
      string getnombrecaballo();
      string getcolorcaballo();
      double getataque();
      double getdefensa();
};

