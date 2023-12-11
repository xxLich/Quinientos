#ifndef DOSJUGADORES_H_INCLUDED
#define DOSJUGADORES_H_INCLUDED

void construccion2(int num,int posx, int posy);
void pedirNombreDosJugadores(char *nombre, int tamano);
void dosJugadores(char nombre1[], char nombre2[], int &puntosTotales1, int &puntosTotales2);
void sumaDeDados(int dados[],int& puntos,int& contSumaDeDados, int& PuntosSuma1 );
void sexteto(int dados[], int &puntos, int &puntosTotales,int& varSexteto,int& numeroRepetido,int& sexteto1);
void trio(int dados[],int &puntos,int& contadorTrio, int& nroRepetidoTrio,int& puntosTrio);
void escalera(int dados[],int &puntos,int &puntosTotales);
void mostrarJugadasJugadorUno(int &rondas1, int &puntosTotales1,char nombre1[],int &puntos1);
void mostrarJugadasJugadorDos(int &rondas2, int &puntosTotales2,char nombre2[],int &puntos2);

void lanzarDadosJugadorUno(int dados1[], int &puntos1, char nombre1[], int &puntosTotales1, int &rondas1);
void lanzarDadosJugadorDos(int dados2[], int &puntos2, char nombre2[], int &puntosTotales2, int &rondas2);
void loopInfinitoDosJugadores(int dados1[], int &puntosTotales1, char nombre1[], int &puntos1, int &rondas1, int dados2[], int &puntosTotales2, char nombre2[], int &puntos2, int &rondas2);

#endif // DOSJUGADORES_H_INCLUDED

