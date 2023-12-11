#include <iostream>
#include "rlutil.h"
#include "menu.h"
using namespace std;

void mostrarPantallaInicio() {
    rlutil::cls();
    rlutil::setColor(rlutil::YELLOW);
    rlutil::setBackgroundColor(0);

   rlutil::locate(40,5);
    cout << "**********************************************\n";
   rlutil::locate(40,6);
    cout << "*                                            *\n";
    rlutil::locate(40,7);
    cout << "*            Bienvenido a Quinientos         *\n";
    rlutil::locate(40,8);
    cout << "*                                            *\n";
    rlutil::locate(40,9);
    cout << "**********************************************\n\n";


    rlutil::resetColor();
}
