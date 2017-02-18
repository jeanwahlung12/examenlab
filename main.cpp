#include<iostream>
#include"targaryen.h"
#include"dothraki.h"
#include"guardia.h"
#include"pequeñafamilianoble.h"
#include"starks.h"
#include"lannister.h"
#include<string>
#include<vector>

using namespace std;
int main(){
char resp='s';
char resp2='s';
int op;

lannister* lan = new lannister();
targaryen* tar = new targaryen();
starks* stark = new starks();

int op2;
string jefefamilia;
int cantlobos;
string animal;
string lema;
string guerrerovalioso;
int cantintegrantes;
string nombre;
string simbolo;
string lema2;
int cantpersonas;
double ataque;
double defensa;
   while(resp=='s'){
      cout << "1/agregar\n2/listar\n3/eliminar: " << endl;
      cin >> op;
      if (op==1){
         cout << "crear 1/starks\n2/lannister\n3/dothraki:" << endl;
         cin >> op2;
         if (op2==1){
          
            cout << "ingrese el jefe de familia: ";
            cin >> jefefamilia;
            cout << " ingrese cantidad de lobos: ";
            cin >> cantlobos;
            cout << " ingrese el animal emblema: ";
            cin >> animal;
            cout << " ingrese el lema : " ;
            cin >> lema;
            cout << " ingrese el guerrero mas valioso: ";
            cin >> guerrerovalioso;
            cout << " ingrese la cantidad de integrantes: ";
            cin >> cantintegrantes;
            stark->setjefefamilia(jefefamilia);
            stark->setcantlobos(cantlobos);
            stark->setanimal(animal);
            stark->setlema(lema);
            stark->setguerrerovalioso(guerrerovalioso);
            stark->setcantintegrantes(cantintegrantes);
            while(resp2=='s'){
               pequenafamilianoble* family = new pequenafamilianoble();
 
               cout << " ingrese el nombre :";
               cin >> nombre;
               cout << " ingrese el simbolo:";
               cin >> simbolo;
               cout << "ingrese lema : ";
               cin >>lema2;
               cout << " ingrese la cantidad de personas:";
               cin >> cantpersonas; 
               cout << "ingrese el ataque:";
               cin >> ataque;
               cout << " ingrese la defensa:";
               cin >> defensa;
               family->setnombre(nombre);
               family->setsimboloescudo(simbolo);
               family->setlema(lema2);
               family->setcantpersonas(cantpersonas);
               family->setataque(ataque);
               family->setdefensa(defensa);
               stark->setfamilias(family);
               cout << " desea agregar otra familia s/n :";
               cin >> resp2;
            }
         } if(op2 ==2){ 
            char resp3 ='s';
            
            string jefefamilia2;
            string animal2;
            string lema3;
            int cantdinero;
            int fuerzamon;
            int cantintegrantes2;
            cout << " ingrese el jefe de familia: ";
            cin >> jefefamilia2;
            cout << " ingrese el animal emblematico: ";
            cin >> animal2;
            cout << " ingrese el lema : ";
            cin >> lema3;
            cout << " ingrese la cantidad de dinero: ";
            cin >> cantdinero;
            cout << " ingrese la fuerza de la montaña: ";
            cin >> fuerzamon;
            cout << " ingrese la cantidad de integrantes : ";
            cin >> cantintegrantes2;
            lan->setjefefamilia(jefefamilia2);
            lan->setanimal(animal2);
            lan->setlema(lema3);
            lan->setcantdinero(cantdinero);
            lan->setfuerzamon(fuerzamon);
            lan->setcantintegrantes(cantintegrantes2);            
            while (resp3=='s'){
               string name;
               int edad;
               string tipo;
               double ataque2;
               double defensa2;
               guardia* guardias = new guardia();
               cout << " ingrese el nombre : ";
               cin >> name;
               cout << " ingrese la edad: ";
               cin >> edad;
               cout << " ingrese el tipo 1/caballero\n2/jinete\n3/arquero : ";
               cin >> tipo;
               if (tipo =="1")
                  tipo = "caballero";
               if (tipo=="2")
                  tipo= "jinete";
               if (tipo =="3")
                  tipo = "arquer";
               cout << "ingrese el ataque:";
               cin >> ataque2;
               cout <<" ingrese la defensa:";
               cin >> defensa2;
               guardias->setnombre(name);
               guardias->setedad(edad);
               guardias->settiposoldado(tipo);
               guardias->setataque(ataque2);
               guardias->setdefensa(defensa2);
               lan->setguardias(guardias);
               cout << " desea continuas s/n: ";
               cin >> resp3;
          }
       }if (op2==3){
            string reina;
            string animal2;
            string lema3;
            char resp4='s';
            int cantdragones;
            int cantbarcos;
            
            cout << " ingrese el nombre de la reina: ";
            cin >> reina;
            cout << " ingrese el animal: ";
            cin >> animal2;
            cout << " ingrese el lema: ";
            cin >> lema3;
            cout << "ingrese la cantidad de los dragones: ";
            cin >> cantdragones;
            cout << "ingrese la cantidad de barcos: ";
            cin >> cantbarcos;
            tar->setreina(reina);
            tar->setanimal(animal2);
            tar->setlema(lema3);
            tar->setcantdragones(cantdragones);
            tar->setcantbarcos(cantbarcos);
            while(resp4=='s'){
               string name2;
               string jefebarbaro;
               string nombrecaballo;
               string colorcaballo;
               double ataque2;
               double defensa2;
               dothraki* doth = new dothraki();
               cout << " ingrese el nombre: ";
               cin >> name2;
               cout << " ingrese el jefe barbaro: ";
               cin >> jefebarbaro;
               cout << " ingrese el nombre del caballo:";
               cin >>nombrecaballo;
               cout << "ingrese el color del caballo:";
               cin >> colorcaballo;
               cout<< " ingrese el ataque: ";
               cin >> ataque2;
               cout << " ingres la defensa:";
               cin >> defensa2;
               doth->setnombre(name2);
               doth->setjefebarbaro(jefebarbaro);
               doth->setnombrecaballo(nombrecaballo);
               doth->setataque(ataque2);
               doth->setdefensa(defensa2);
               tar->setejercito(doth);
               cout << " desea continuar s/n : ";
               cin >> resp4;
            }
            
         }
       
   }if(op==2){
     int option;
         cout  << "1/starks\n2/lannister\n3/targaryen";
         if (option==1){
            for (int i=0;i<stark->familias.size();i++){
               cout << stark->getfamilias(i);
            }
         }
    }  


}
 return 0;  
}
