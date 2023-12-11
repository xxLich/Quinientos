#include <iostream>
#include "unJugador.h"
#include "menu.h"
#include <stdlib.h>
#include <ctime>
#include <string.h>
#include "puntuacion.h"
#include "rlutil.h"

using namespace std;
void lanzarDadosJugadorUno(int dados[], int& puntos1, char nombre1[], int& puntosTotales1, int& rondas1) {
    srand(time(0));
    puntos1 = 0;
    ///correcion
    int puntosMaxRondas1=0;
    //INICIALIZO LAS VARIABLES DE LAS FUNCIONES JUGADAS
        int PuntosSuma1=0;
        int sumaTrio1 = 0;
        int varSexteto=0;
        int puntosTrio1=0;
        int contSumaDeDados1 = 0;
        int numeroRepetido=0;
        int sexteto1 = 0;
        int contadorTrio =0;
        int nroRepetidoTrio=0;
        int puntosTrio=0;

    for(int j = 1; j <= 3; j++) {
        rlutil::locate(50, 8);
        cout << "------- TIRADA : " << j << " -------" << endl;
        rlutil::locate(50, 9);


        rlutil::locate(50,10);
        dibujarDados(dados);
        sumaDeDadosUnJugador(dados, puntos1,contSumaDeDados1, PuntosSuma1);
        ///inicio de correccion

        retornePuntosMaxPorRondas(puntos1, puntosMaxRondas1, puntosTrio);
        trioUnJugador(dados, puntos1,contadorTrio,nroRepetidoTrio,puntosTrio);

        retornePuntosMaxPorRondas(puntos1, puntosMaxRondas1, puntosTrio);
        sextetoUnJugador(dados, puntos1, puntosTotales1,varSexteto,numeroRepetido,sexteto1);

        retornePuntosMaxPorRondas(puntos1, puntosMaxRondas1, puntosTrio);
        escaleraUnJugador(dados, puntos1, puntosTotales1);

        retornePuntosMaxPorRondas(puntos1, puntosMaxRondas1, puntosTrio);
        rlutil::locate(50, 27);
        cout<<"PUNTOS MAXIMOS POR RONDAS: "<<puntosMaxRondas1<<endl;



        mostrarPuntosPorRonda(puntosTrio, PuntosSuma1, varSexteto,puntosTotales1);
        mostrarPuntosTotalesPorRonda( nombre1, puntosTotales1, rondas1);

        system("pause");
        system("cls");

    }



    puntosTotales1+=puntosMaxRondas1;

     rondas1++ ;




}


///JUGADOR DOS
void lanzarDadosJugadorDos(int dados[], int& puntos2, char nombre2[], int& puntosTotales2, int& rondas2) {
   srand(time(0));
    puntos2 = 0;

    int puntosMaxRondas2=0;

        int PuntosSuma2=0;
        int sumaTrio2 = 0;
        int varSexteto2=0;
        int puntosTrio2=0;
        int contSumaDeDados2 = 0;
        int numeroRepetido2=0;
        int sexteto2 = 0;
        int contadorTrio2 =0;
        int nroRepetidoTrio2=0;




    for(int j = 1; j <= 3; j++) {
        rlutil::locate(50, 8);
        cout << "------- TIRADA : " << j << " -------" << endl;
        rlutil::locate(50, 9);


        rlutil::locate(50,10);
        dibujarDados(dados);
        sumaDeDadosUnJugador(dados, puntos2,contSumaDeDados2, PuntosSuma2);
        ///inicio de correccion

        retornePuntosMaxPorRondas(puntos2, puntosMaxRondas2, puntosTrio2);
        trioUnJugador(dados, puntos2,contadorTrio2,nroRepetidoTrio2,puntosTrio2);

        retornePuntosMaxPorRondas(puntos2, puntosMaxRondas2, puntosTrio2);
        sextetoUnJugador(dados, puntos2, puntosTotales2,varSexteto2,numeroRepetido2,sexteto2);

        retornePuntosMaxPorRondas(puntos2, puntosMaxRondas2, puntosTrio2);
        escaleraUnJugador(dados, puntos2, puntosTotales2);

        retornePuntosMaxPorRondas(puntos2, puntosMaxRondas2, puntosTrio2);
        rlutil::locate(50, 27);
        cout<<"PUNTOS MAXIMOS POR RONDAS: "<<puntosMaxRondas2<<endl;



        mostrarPuntosPorRonda(puntosTrio2, PuntosSuma2, varSexteto2,puntosTotales2);
        mostrarPuntosTotalesPorRonda( nombre2, puntosTotales2, rondas2);

        system("pause");
        system("cls");

    }



    puntosTotales2+=puntosMaxRondas2;

     rondas2++ ;


}

void loopInfinitoDosJugadores(int dados1[], int &puntosTotales1, char nombre1[], int &puntos1, int &rondas1, int dados2[], int &puntosTotales2, char nombre2[], int &puntos2, int &rondas2) {

    while(true) {

        if((puntosTotales1>=500)|| (puntosTotales2>=500)){

                  rlutil::locate(50, 9);
                  cout<<"Felicitaciones ganaste el juego" <<endl;
                  rlutil::locate(50, 10);
                  system("pause");

             break;

                }
    lanzarDadosJugadorUno(dados1, puntos1, nombre1, puntosTotales1, rondas1);
    lanzarDadosJugadorDos(dados2, puntos2, nombre2, puntosTotales2, rondas2);
    }


}




///
void dosJugadores(char nombre1[], char nombre2[], int &puntosTotales1, int &puntosTotales2) {
    puntosTotales1 = 0;
    puntosTotales2 = 0;
    const int tamano = 30;
    char nombre[tamano];
    int puntos;
    int dados1[6] = {0};
    int dados2[6] = {0};
    int rondas1 = 1;
    int rondas2 = 1;

    pedirNombreUnJugador(nombre1, tamano);
    system("cls");
    pedirNombreUnJugador(nombre2, tamano);
    system("cls");

    loopInfinitoDosJugadores(dados1, puntosTotales1, nombre1, puntos, rondas1, dados2, puntosTotales2, nombre2, puntos, rondas2);
}
