#include<iostream>
#include<string>
#include "pequeñafamilianoble.h"
#include "starks.h"
#include<vector>
starks::starks(){
   jefefamilia="";
   cantlobos=0;
   animal="";
   lema="";
   
   guerrerovalioso="";
   cantintegrantes=0;
}

void starks::setjefefamilia(string jefe){
   jefefamilia= jefe;
}

void starks::setcantlobos(int cant){
   cantlobos=cant;
}

void starks::setanimal(string anim){
   animal = anim;
}

void starks::setlema(string lem){
   lema=lem;
}

void starks::setfamilias(pequenafamilianoble* fam){
  familias->push_back(fam);
}

void starks::setguerrerovalioso(string guerrero){
   guerrerovalioso=guerrero;
}

void starks::setcantintegrantes(int cont){
   cantintegrantes=cont;
}

string starks::getjefefamilia(){
   return jefefamilia;
}

int starks::getcantlobos(){
   return cantlobos;
}

string starks::getanimal(){
   return animal;
}

string starks::getlema(){
   return lema;
}

pequenafamilianoble* starks::getfamilias(int num){
   return familias->at(num);
}

string starks::getguerrerovalioso(){
   return guerrerovalioso;
}

int starks::getcantintegrantes(){
   return cantintegrantes;
}
