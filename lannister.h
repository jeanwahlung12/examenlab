#pragma once

#include <iostream>
#include<string>
#include"guardia.h"
#include <vector>
using namespace std;

class lannister{
   private:
      string jefefamilia;
      string animal;
      string lema;
      vector<guardia*>* guardias ;
      int cantdinero;
      int fuerzamon;
      int cantintegrantes;
   public:
      lannister();
      ~lannister();
      void setjefefamilia(string);
      void setanimal(string);
      void setlema(string);
      void setguardias(guardia*);
      void setcantdinero(int);
      void setfuerzamon(int);
      void setcantintegrantes(int);
      string getjefefamilia();
      int getfuerzamon();
      string getanimal();
      string getlema();
      guardia* getguardias(int);
      int getcantdinero();
      int getcantintegrantes();
};
