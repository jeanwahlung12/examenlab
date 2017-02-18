#pragma once

#include <iostream>
#include<string>
#include <vector>
#include "pequeñafamilianoble.h"
using namespace std;

class starks{
   private:
      string jefefamilia;
      int cantlobos;
      string animal;
      string lema;
      vector<pequenafamilianoble*> familias;
      string guerrerovalioso;
      int cantintegrantes;
   public:
      starks();
      ~starks();
      void setjefefamilia(string);
      void setcantlobos(int);
      void setanimal(string);
      void setlema(string);
      void setfamilias(pequenafamilianoble*);
      void setguerrerovalioso(string);
      void setcantintegrantes(int);
      string getjefefamilia();
      int getcantlobos();
      string getanimal();
      string getlema();
      pequenafamilianoble* getfamilias(int);
      string getguerrerovalioso();
      int getcantintegrantes();
};


