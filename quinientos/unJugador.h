#ifndef UNJUGADOR_H_INCLUDED
#define UNJUGADOR_H_INCLUDED

void pedirNombreUnJugador(char *nombre, int tamano);
void sumaDeDadosUnJugador(int dados[],int& puntos,int& contSumaDeDados, int& PuntosSuma );
void sextetoUnJugador(int dados[], int &puntos, int &puntosTotales,int& varSexteto,int& numeroRepetido,int& sexteto);
void trioUnJugador(int dados[],int &puntos,int& contadorTrio, int& nroRepetidoTrio,int& puntosTrio);
void construccion(int num,int posx, int posy);
void dibujarDados(int dados[]);
void escaleraUnJugador(int dados[],int &puntos,int &puntosTotales);
void dibujarDado(int dados[]);
void lanzarDadosUnJugador(int dados[], int& puntos, char nombre[], int& puntosTotales, int& rondas);
void loopInfinitoUnJugador(int dados[], int &puntosTotales, char nombre[], int &puntos, int &rondas);
void unJugador(char nombre[],int &puntosTotales);

//nuevas funciones
void dibujarDados(int dados[]);
void mostrarPuntosTotalesPorRonda(char nombre[], int& puntosTotales, int& rondas);
void mostrarPuntosPorRonda(int& puntosTrio, int& PuntosSuma, int& varSexteto,int &puntosTotales);
void retornePuntosMaxPorRondas(int& puntos, int& puntosMaxRondas, int& puntosTrio);




#endif // UNJUGADOR_H_INCLUDED
