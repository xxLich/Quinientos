#include <iostream>
#include "unJugador.h"
#include "menu.h"
#include <stdlib.h>
#include <ctime>
#include <string.h>
#include "puntuacion.h"
#include "rlutil.h"

using namespace std;


void pedirNombreUnJugador(char *nombre, int tamano){
    system("cls");
    rlutil::locate(43,28);
    system("pause");

    int i=0;

    fflush(stdin);
    rlutil::locate(50, 5);
    cout<<"Ingresar nombre de Jugador: "<<endl;
     rlutil::locate(50, 7);
    cout<<"---------------------------- "<<endl;
    rlutil::locate(50, 6);
    for (i=0; i<tamano; i++){

        nombre[i]=cin.get();

        if (nombre[i]=='\n'){

            break;

        }

    }

    nombre[i]='\0';

    fflush(stdin);
    system("cls");

}


//JUGADAS
void sumaDeDadosUnJugador(int dados[],int& puntos, int& contSumaDeDados, int& PuntosSuma){
    PuntosSuma=0;
    puntos=0;
    contSumaDeDados = 0;
    for(int x = 0; x < 6; x++) {
            ///Le sumo +1 al x para que comience en 0 y no sean todos iguales
        for(int i = x+1; i < 6; i++) {
            if(dados[x] == dados[i]) {
            contSumaDeDados++;
        }
    }
   }
    if(contSumaDeDados == 2 || contSumaDeDados==1){
        for(int x=0;x<6;x++){

            puntos+=dados[x];
        }

    }
    PuntosSuma=puntos;



}

void sextetoUnJugador(int dados[], int &puntos, int &puntosTotales, int& varSexteto,int& numeroRepetido,int& sexteto1 ){

   /// SEXTETO
     varSexteto=0;
     numeroRepetido = 0;
     sexteto1 = 0;

    for(int x=0; x<6; x++) {
        for(int i = x+1; i<6; i++) {
            if(dados[x] == dados[i]) {
                sexteto1++;
            }
        }
    }
    ///NO ACUMULABA 6 CUANDO ERAN REPETIDOS, SINO QUE  ACUMULABA 15
    if(sexteto1 == 15) {

        for(int x=0; x<6; x++) {
            if(dados[x] != numeroRepetido) {
                numeroRepetido = dados[x];

                  ///VERIFICA SI EL NUMERO ES 6
                if(numeroRepetido==6){
                     numeroRepetido=0;
                     puntosTotales = 0;

                }

            }
        }

    }

     ///MULTIPLICA EL NUMERO QUE NO SEA 6
     varSexteto = numeroRepetido * 50;


}

void trioUnJugador(int dados[],int &puntos,int& contadorTrio, int& nroRepetidoTrio,int& puntosTrio){
    ///TRIO
    puntosTrio=0;
    for(int x=0;x<6;x++){
    contadorTrio = 0;

    for(int i=0;i<6;i++){

        if(dados[x] == dados[i] ){
            contadorTrio++;
            nroRepetidoTrio = dados[x];

        }
    }
    if(contadorTrio>=3 && contadorTrio<=5 ) {
        if(nroRepetidoTrio * 10 > puntosTrio) {
            puntosTrio = nroRepetidoTrio * 10;
        }
    }
}

}

void escaleraUnJugador(int dados[],int &puntos,int &puntosTotales){


    int aux;
    for(int x=0; x<6; x++){
    for(int i=0; i<5; i++){
        if(dados[i]>dados[i+1]){
            aux = dados[i+1];
            dados[i+1] = dados[i];
            dados[i] = aux;

            }
        }
    }
    if (dados[0] == 1 && dados[1] == 2 && dados[2] == 3 && dados[3] == 4 &&
        dados[4] == 5 && dados[5] == 6) {
        puntosTotales += 500;

    }




}

void construccion(int num,int posx, int posy){
    if(num==1){
        rlutil::locate(posx, posy);
        cout<<char(218)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(191)<<endl;
        rlutil::locate(posx, posy+1);
        cout<<char(179)<<"       "<<char(179)<<endl;
        rlutil::locate(posx, posy+2);
        cout<<char(179)<<"   "<<char(254)<<"   "<<char(179)<<endl;
        rlutil::locate(posx, posy+3);
        cout<<char(179)<<"       "<<char(179)<<endl;
        rlutil::locate(posx, posy+4);
        cout<<char(192)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(217)<<endl;
    }
    if(num==2){
        rlutil::locate(posx, posy);
        cout<<char(218)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(191)<<endl;
        rlutil::locate(posx, posy+1);
        cout<<char(179)<<"      "<<char(254)<<char(179)<<endl;
        rlutil::locate(posx, posy+2);
        cout<<char(179)<<"       "<<char(179)<<endl;
        rlutil::locate(posx, posy+3);
        cout<<char(179)<<char(254)<<"      "<<char(179)<<endl;
        rlutil::locate(posx, posy+4);
        cout<<char(192)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(217)<<endl;
    }
    if(num==3){
        rlutil::locate(posx, posy);
        cout<<char(218)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(191)<<endl;
        rlutil::locate(posx, posy+1);
        cout<<char(179)<<"      "<<char(254)<<char(179)<<endl;
        rlutil::locate(posx, posy+2);
        cout<<char(179)<<"   "<<char(254)<<"   "<<char(179)<<endl;
        rlutil::locate(posx, posy+3);
        cout<<char(179)<<char(254)<<"      "<<char(179)<<endl;
        rlutil::locate(posx, posy+4);
        cout<<char(192)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(217)<<endl;
    }
    if(num==4){
        rlutil::locate(posx, posy);
        cout<<char(218)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(191)<<endl;
        rlutil::locate(posx, posy+1);
        cout<<char(179)<<char(254)<<"     "<<char(254)<<char(179)<<endl;
        rlutil::locate(posx, posy+2);
        cout<<char(179)<<"       "<<char(179)<<endl;
        rlutil::locate(posx, posy+3);
        cout<<char(179)<<char(254)<<"     "<<char(254)<<char(179)<<endl;
        rlutil::locate(posx, posy+4);
        cout<<char(192)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(217)<<endl;
    }
    if(num==5){
        rlutil::locate(posx, posy);
        cout<<char(218)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(191)<<endl;
        rlutil::locate(posx, posy+1);
        cout<<char(179)<<char(254)<<"     "<<char(254)<<char(179)<<endl;
        rlutil::locate(posx, posy+2);
        cout<<char(179)<<"   "<<char(254)<<"   "<<char(179)<<endl;
        rlutil::locate(posx, posy+3);
        cout<<char(179)<<char(254)<<"     "<<char(254)<<char(179)<<endl;
        rlutil::locate(posx, posy+4);
        cout<<char(192)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(217)<<endl;
    }
    if(num==6){
        rlutil::locate(posx, posy);
        cout<<char(218)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(191)<<endl;
        rlutil::locate(posx, posy+1);
        cout<<char(179)<<char(254)<<"     "<<char(254)<<char(179)<<endl;
        rlutil::locate(posx, posy+2);
        cout<<char(179)<<char(254)<<"     "<<char(254)<<char(179)<<endl;
        rlutil::locate(posx, posy+3);
        cout<<char(179)<<char(254)<<"     "<<char(254)<<char(179)<<endl;
        rlutil::locate(posx, posy+4);
        cout<<char(192)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(217)<<endl;
    }
}


void dibujarDados(int dados[]) {
    cout << "-----------DADOS--------- " << endl;

    srand(time(0));
    for (int i = 0; i < 6; i++) {
        dados[i] = (rand() % 6) + 1;
        construccion(dados[i],32+(i*10),12);
    }
}

void mostrarPuntosTotalesPorRonda(char nombre[], int& puntosTotales, int& rondas){

    cout<<"-------------------------- "<<endl;
        rlutil::locate(50, 22);
    cout<<"NOMBRE: "<<nombre<<endl;
      rlutil::locate(50, 23);
    cout<<"PUNTOS TOTALES:  "<<puntosTotales<<endl;
     rlutil::locate(50, 24);
    cout<<"RONDA: "<<rondas<<endl;
    rlutil::locate(50, 25);
    cout<<"-------------------------- "<<endl;
     rlutil::locate(50,28);
    rlutil::locate(50,30);
    if(puntosTotales>=500){
        system("cls");
    }


}

void mostrarPuntosPorRonda(int& puntosTrio, int& PuntosSuma, int& varSexteto, int &puntosTotales){
    rlutil::locate(50, 18);
   cout<<"Puntos trio: "<<puntosTrio<<endl;
    rlutil::locate(50, 19);
   cout<<"Puntos Suma De Dados: "<<PuntosSuma<<endl;
    rlutil::locate(50, 20);
   cout<<"Sexteto: "<<varSexteto<<endl;
    rlutil::locate(50, 20);
    rlutil::locate(50, 21);
    if(puntosTotales>=500){

        system("cls");
    }

}

void retornePuntosMaxPorRondas(int& puntos, int& puntosMaxRondas, int& puntosTrio){
        if (puntos>puntosMaxRondas){
            puntosMaxRondas=puntos;
        }
        if(puntosTrio>0){
            if(puntosTrio>puntosMaxRondas){
            puntosMaxRondas=puntosTrio;
            }
        }

}

void lanzarDadosUnJugador(int dados[], int& puntos, char nombre[], int& puntosTotales, int& rondas) {
    puntos = 0;

    ///Correccion
    int puntosMaxRondas=0, PuntosSuma=0, varSexteto=0, puntosTrio=0, contSumaDeDados = 0, numeroRepetido=0, sexteto = 0, contadorTrio =0, nroRepetidoTrio=0;
    for(int j = 0; j < 3; j++) {
        rlutil::locate(50, 9);
        cout << "------- TIRADA : " << j+1 << "-------" << endl;
        //nueva funcion
        rlutil::locate(50,11);
        dibujarDados(dados);
        sumaDeDadosUnJugador(dados, puntos,contSumaDeDados, PuntosSuma);
        ///inicio de correccion

        retornePuntosMaxPorRondas(puntos, puntosMaxRondas, puntosTrio);
        trioUnJugador(dados, puntos,contadorTrio,nroRepetidoTrio,puntosTrio);

        retornePuntosMaxPorRondas(puntos, puntosMaxRondas, puntosTrio);
        sextetoUnJugador(dados, puntos, puntosTotales,varSexteto,numeroRepetido,sexteto);

        retornePuntosMaxPorRondas(puntos, puntosMaxRondas, puntosTrio);
        escaleraUnJugador(dados, puntos, puntosTotales);

        retornePuntosMaxPorRondas(puntos, puntosMaxRondas, puntosTrio);
        rlutil::locate(50, 27);
        cout<<"PUNTOS MAXIMOS POR RONDAS: "<<puntosMaxRondas<<endl;

        mostrarPuntosPorRonda(puntosTrio, PuntosSuma, varSexteto,puntosTotales);
        mostrarPuntosTotalesPorRonda( nombre, puntosTotales, rondas);

        system("pause");
        system("cls");

    }

    puntosTotales+=puntosMaxRondas;
    rondas++;
}

void loopInfinitoUnJugador(int dados[], int &puntosTotales, char nombre[], int &puntos, int &rondas) {

    while(true) {
            if(puntosTotales>=500){
                  rlutil::locate(50, 9);

                  cout<<"Felicitaciones ganaste el juego" <<endl;
                  rlutil::locate(50, 10);
                  system("pause");

                break;
            }
            lanzarDadosUnJugador(dados, puntos, nombre, puntosTotales, rondas);

    }
}

void unJugador(char nombre[],int &puntosTotales) {
    puntosTotales = 0;
    const int tamano = 30;
    int puntos;
    int dados[6] = {0};
    int rondas = 1;

    pedirNombreUnJugador(nombre, tamano);
    system("cls");
    loopInfinitoUnJugador(dados, puntosTotales, nombre, puntos, rondas);
}

