#pragma once

#include <iostream>
#include<string>
#include <vector>
#include "dothraki.h"
using namespace std;

class targaryen{
   private:
      string reina;
      string animal;
      string lema;
      int cantdragones;
      vector<dothraki*> ejercito;
      int cantbarcos;
   public:
      targaryen();
      ~targaryen();
      void setreina(string);
      void setanimal(string);
      void setlema(string);
      void setcantdragones(int);
      void setejercito(dothraki*);
      void setcantbarcos(int);
      string getreina();
      string getanimal();
      string getlema();
      dothraki* getejercito(int);
      int getcantdragones();
      int getcantbarcos();
};



