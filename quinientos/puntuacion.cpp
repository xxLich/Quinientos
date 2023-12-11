#include <iostream>
#include "unJugador.h"
#include "dosjugadores.h"
#include "menu.h"
#include "rlutil.h"
#include "puntuacion.h"
using namespace std;

void noHayPuntos (char nombre[],int &puntosTotales,char nombre1[],int& puntosTotales1,char nombre2[],int& puntosTotales2,int& ronda,int &rondas1,int &rondas2){
        system("cls");
      if(puntosTotales ==0 && puntosTotales1 == 0 && puntosTotales2==0){
             rlutil::locate(40,5);
        cout << " ------- NO HAY GANADORES -------" << endl;
          rlutil::locate(40,6);
         system("pause");
        }
    }



void determinarGanador(int& puntosTotales, int& puntosTotales1, int& puntosTotales2,char nombre[],char nombre1[],char nombre2[]) {
    if (puntosTotales > puntosTotales1 && puntosTotales > puntosTotales2) {

        rlutil::locate(40,5);
        cout << " ------- GANADOR -------" << endl;
        rlutil::locate(40,6);
        cout << "NOMBRE: "<<nombre << endl;
        rlutil::locate(40,7);
        cout << "PUNTOS: "<< puntosTotales << endl;
        rlutil::locate(40,8);
        cout << " -----------------------" << endl;

    } else if (puntosTotales1 > puntosTotales && puntosTotales1 > puntosTotales2) {

         rlutil::locate(40,5);
        cout << " ------- GANADOR -------" << endl;
        rlutil::locate(40,6);
        cout << "NOMBRE: "<<nombre1 << endl;
        rlutil::locate(40,7);
        cout << "PUNTOS: "<< puntosTotales1 << endl;
        rlutil::locate(40,8);
        cout << " -----------------------" << endl;


    } else if (puntosTotales2 > puntosTotales && puntosTotales2 > puntosTotales1) {
         rlutil::locate(40,5);
        cout << " ------- GANADOR -------" << endl;

        rlutil::locate(40,6);
        cout << "NOMBRE: "<<nombre2 << endl;
        rlutil::locate(40,7);
        cout << "PUNTOS: "<< puntosTotales2 << endl;
        rlutil::locate(40,8);

        cout << " -----------------------" << endl;
    }
}



void puntuacion(char nombre[],int &puntosTotales,char nombre1[],int& puntosTotales1,char nombre2[],int& puntosTotales2,int& ronda,int &rondas1,int &rondas2){


    noHayPuntos(nombre,puntosTotales,nombre1, puntosTotales1,nombre2,puntosTotales2, ronda,rondas1,rondas2);
    determinarGanador(puntosTotales, puntosTotales1,puntosTotales2,nombre,nombre1,nombre2);
    rlutil::locate(40,9);
    system("pause");


}
