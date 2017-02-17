#include<iostream>
#include<string>
#include "dothraki.h"
#include "targaryen.h"
#include<vector>
targaryen::targaryen(){
   reina="";
   
   animal="";
   lema="";
   cantdragones=0;
   
   cantbarcos=0;
}

void targaryen::setreina(string rein){
   reina = rein;
}
void targaryen::setanimal(string anim){
   animal = anim;
}

void targaryen::setlema(string lem){
   lema=lem;
}

void targaryen::setcantdragones(int cant){
   cantdragones=cant;
}

void targaryen::setcantbarcos(int num){
   cantbarcos=num;
}

void targaryen::setejercito(dothraki* doth){
  ejercito->push_back(doth);
}

string targaryen::getreina(){
   return reina;
}

string targaryen::getanimal(){
   return animal;
}
string targaryen::getlema(){
   return lema;
}

int targaryen::getcantdragones(){
   return cantdragones;
}

int targaryen::getcantbarcos(){
   return cantbarcos;
}

dothraki* targaryen::getejercito(int num){
   return ejercito->at(num);
}

