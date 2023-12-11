#include <iostream>
#include "menu.h"
#include <ctime>
#include "rlutil.h"
#include "dados.h"
using namespace std;



int main()
{



    mostrarPantallaInicio();
    rlutil::locate(40,10);
    system("pause");
    system("cls");
    rlutil::setBackgroundColor(rlutil::BLACK);
    rlutil::setColor(rlutil::YELLOW); // Cambiar el color del texto
    const int tamano= 30;
    char nombre[tamano];
    int puntosTotales=0;
    char nombre1[tamano];
    char nombre2[tamano];
    int puntosTotales1=0;
    int puntosTotales2=0;
    int ronda=0;
    int rondas1=0;
    int rondas2=0;
    menu(nombre,puntosTotales,nombre1,nombre2,puntosTotales1,puntosTotales2,ronda,rondas1,rondas2);
    return 0;
}

