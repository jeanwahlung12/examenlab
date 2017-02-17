#include<iostream>
#include "dothraki.h"
#include <string>

using namespace std;

dothraki::dothraki(){
   nombre="";
   jefebarbaro="";
   nombrecaballo="";
   colorcaballo="";
   ataque=0;
   defensa=0;
}

void dothraki::setnombre(string nom){
   nombre = nom;
   
}

void dothraki::setjefebarbaro(string jefe){
   jefebarbaro =jefe;
}

void dothraki::setnombrecaballo(string nomca){
   nombrecaballo=nomca;
}

void dothraki::setcolorcaballo(string color){
   colorcaballo= color;
}

void dothraki::setataque(double attack){
   ataque =attack;
}

void dothraki::setdefensa(double def){
   defensa=def;
}

string dothraki::getnombre(){
   return nombre;

}

string dothraki::getjefebarbaro(){
   return jefebarbaro;
}

string dothraki::getnombrecaballo(){
   return nombrecaballo;
}

string dothraki::getcolorcaballo(){
   return colorcaballo;
}

double dothraki::getataque(){
   return ataque;
}

double dothraki::getdefensa(){
   return defensa;
}



  
