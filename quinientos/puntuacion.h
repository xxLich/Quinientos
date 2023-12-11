#ifndef PUNTUACION_H_INCLUDED
#define PUNTUACION_H_INCLUDED

void puntuacion(char nombre[],int &puntosTotales,char nombre1[],int& puntosTotales1,char nombre2[],int& puntosTotales2,int& rondas,int& rondas1,int& rondas2);


void noHayPuntos (char nombre[],int &puntosTotales,char nombre1[],int& puntosTotales1,char nombre2[],int& puntosTotales2,int& ronda,int &rondas1,int &rondas2);


void determinarGanador(int& puntosTotales, int& puntosTotales1, int& puntosTotales2,char nombre[],char nombre1[],char nombre2[]);

/*
void pUnJugador (char nombre[],int &puntosTotales,char nombre1[],int& puntosTotales1,char nombre2[],int& puntosTotales2,int& ronda,int &rondas1,int &rondas2){
*/


#endif // PUNTUACION_H_INCLUDED
