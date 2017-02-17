#include<iostream>
#include<string>
#include "pequeñafamilianoble.h"

pequenafamilianoble::pequenafamilianoble(){
     nombre="";
     simboloescudo ="";
     string lema="";
     cantpersonas=0;
     ataque=0;
     defensa =0;
}

void pequenafamilianoble::setnombre(string nom){
   nombre = nom;
}


void pequenafamilianoble::setsimboloescudo(string simbolo){
   simboloescudo = simbolo;
}


void pequenafamilianoble::setlema(string lem){
   lema = lem;
}
void pequenafamilianoble::setcantpersonas(int cant){
   cantpersonas = cant;
}
void pequenafamilianoble::setataque(double attack){
   ataque = attack;
}

void pequenafamilianoble::setdefensa(double defense){
   defensa = defense;
}

string pequenafamilianoble::getnombre(){
   return nombre;
}

string pequenafamilianoble::getsimboloescudo(){
   return simboloescudo;
}

string pequenafamilianoble::getlema(){
   return lema;
}

int pequenafamilianoble::getcantpersonas(){
   return cantpersonas;
}

double pequenafamilianoble::getataque(){
   return ataque;
}

double pequenafamilianoble::getdefensa(){
   return defensa;
}
    
