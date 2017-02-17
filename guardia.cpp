#include "guardia.h"
#include<iostream>
#include<string>

guardia::guardia(){
   nombre="";
   edad=0;
   tiposoldado="";
   ataque=0;
   defensa=0;
}
void guardia::setnombre(string nom){
   nombre=nom;
}

void guardia::setedad(int age){
   edad=age;
}

void guardia::settiposoldado(string tip){
   tiposoldado=tip;
}

void guardia::setataque(double attack){
   ataque=attack;
}

void guardia::setdefensa(double def){
   defensa=def;
}

string guardia::getnombre(){
   return nombre;
}

int guardia::getedad(){
   return edad ;
}
string guardia::gettiposoldado(){
   return tiposoldado;
}

double guardia::getataque(){
   return ataque;
}

double guardia::getdefensa(){
   return defensa;
}

