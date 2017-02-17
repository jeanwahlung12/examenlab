#pragma once

#include <iostream>
#include<string>

using std::string;

class pequenafamilianoble {
   private:
      string nombre;
      string simboloescudo;
      string lema;
      int cantpersonas;
      double ataque;
      double defensa;

   public:
      pequenafamilianoble();
      void setnombre(string );
      void setsimboloescudo(string);
      void setlema(string);
      void setcantpersonas(int);
      void setataque(double);
      void setdefensa(double); 
      string getnombre();
      string getsimboloescudo();
      string getlema();
      int getcantpersonas();
      double getataque();
      double  getdefensa();    
};
