#include<iostream>
#include<string>
#include "guardia.h"
#include "lannister.h"
#include<vector>

lannister::lannister(){
   jefefamilia="";
   
   animal="";
   lema="";
   cantdinero=0;
   fuerzamon=0;
   
   cantintegrantes=0;
}

void lannister::setjefefamilia(string jefe){
   jefefamilia =jefe;
}
void lannister::setanimal(string anim){
   animal = anim;
}

void lannister::setlema(string lem){
   lema = lem;
}



void lannister::setcantdinero(int cant){
   cantdinero=cant;
}

void lannister::setfuerzamon(int fue){
   fuerzamon=fue;
}

void lannister::setcantintegrantes(int cant){
   cantintegrantes=cant;
}


void lannister::setguardias(guardia* guar){
  guardias->push_back(guar);
}


string lannister::getjefefamilia(){
   return jefefamilia;
}

string lannister::getanimal(){
   return animal;
}

string lannister::getlema(){
   return lema;
}

int lannister::getcantdinero(){
   return cantdinero;
}

int lannister::getfuerzamon(){
   return fuerzamon;
}

int lannister::getcantintegrantes(){
   return cantintegrantes;
}

guardia* lannister::getguardias(int num){
   return guardias->at(num);
}



