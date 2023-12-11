#include <iostream>
#include "menu.h"
#include "unJugador.h"
#include "puntuacion.h"
#include <stdlib.h>
#include "rlutil.h"
#include "dosJugadores.h"


using namespace std;

void menu(char nombre[],int &puntosTotales,char nombre1[],char nombre2[],int &puntosTotales1,int &puntosTotales2,int& ronda,int& rondas1,int& rondas2){

    while(true){
        int eleccion;
        system("cls");
    rlutil::locate(50, 5);
    cout<<"------------------"<<endl;
    rlutil::locate(50, 6);
    cout<<"[1]Un Jugador"<<endl;
     rlutil::locate(50, 7);
    cout<<"[2]Dos Jugadores "<<endl;
     rlutil::locate(50, 8);
    cout<<"[3]Puntuacion" <<endl;
     rlutil::locate(50, 9);
    cout<<"[4]Salir"<<endl;
     rlutil::locate(50, 10);
    cout<<"------------------"<<endl;
     rlutil::locate(50, 11);
    ///La persona selecciona su opcion
    cout<<"ELEGIR NUMERO: ";
    cin>>eleccion;

      switch (eleccion){
    case 1:
      unJugador(nombre,puntosTotales);
      break;
    case 2:
      dosJugadores(nombre1,nombre2,puntosTotales1,puntosTotales2);
      break;
    case 3:
       puntuacion(nombre,puntosTotales,nombre1,puntosTotales1,nombre2,puntosTotales2,ronda,rondas1,rondas2);
    break;
    case 4:
      return ;
    default:
         rlutil::locate(50, 12);
      cout<<"OPCION NO VALIDA"<<endl;
      system("pause");

  }


    }










}
