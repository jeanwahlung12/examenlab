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
            starks* stark = new starks();
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
         else if(op2 ==2){
            string jefefamilia2;
            string animal2;
            
      }
   }


}
 return 0;  
}
