// CALCULADORA.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <string>

#include <iostream>

#include <cmath>

#include <cstdlib>

#include <iomanip>

#include <cmath>

#include <stdio.h>

#include<vector>

#include<array>

#include<string>

using namespace std;

void pausa();



#define DEFAULT0 "\x1b[0m" //TEXTO

#define DEFAULT1 "\x1b[39m" // COLOR

#define DEFAULTF "\x1b[49m" // FONDO



//== = Colores == = 

//== = Texto == = 

//-Rojo 

#define RED "\x1b[31m" 

//- Verde 

#define GREEN "\x1b[32m" 

//- Negro

#define BLACK "\x1b[30m" 

//- Azul 

#define BLUE "\x1b[34m" 

//- Amarillo 

#define YELLOW "\x1b[33m" 

//- Magenta 

#define MAGENTA "\x1b[35m" 

//- Cyan

#define CYAN "\x1b[36m" 

//- Blanco 

#define WHITE "\x1b[37m" 

//- Gris Claro

#define LIGHT_GRAY "\x1b[90m" 

//- Rojo Claro 

#define LIGHT_RED "\x1b[91m" 

//- Verde Claro 

#define LIGHT_GREEN "\x1b[92m" 

//- Amarillo Claro

#define LIGHT_YELLOW "\x1b[93m" 

//- Azul Claro 

#define LIGHT_BLUE "\x1b[94m" 

//- Magenta Claro 

#define LIGHT_MAGENTA "\x1b[95m" 

//- Cyan Claro 

#define LIGHT_CYAN "\x1b[96m"

//- Blanco Claro 

#define LIGHT_WHITE "\x1b[97m" 



//== = Modificadores == = 

//== = Texto == = 

//-Dim(No identificado aun) 

#define DIM "\x1b[2m" 

//- Reverse(Si el fondo es negro, el texto sera blanco y al contrario) 

#define REVERSE "\x1b[7m"

//- Hidden(No identificado aun) 

#define HIDDEN "\x1b[8b" 

//- Bold(ON / OFF) (No identificado aun) 

#define BOLD_ON "\x1b[1m" 

#define BOLD_OFF "\x1b[21m" 

//- Underline(ON / OFF) (Subraya el texto) 

#define UNDERLINE_ON "\x1b[4m" 

#define UNDERLINE_OFF "\x1b[24m" 

//- Blink(ON / OFF) (No identificado aun) 

#define BLINK_ON "\x1b[5m" 

#define BLINK_OFF "\x1b[25m" 



//== = Fondos == = 

//== = Texto == = 

//-Negro 

#define BLACKF "\x1b[40m" 

//- Rojo 

#define REDF "\x1b[41m" 

//- Verde 

#define GREENF "\x1b[42m" 

//- Amarillo 

#define YELLOWF "\x1b[43m" 

//- Azul 

#define BLUEF "\x1b[44m" 

//- Magenta

#define MAGENTAF "\x1b[45m" 

//- Cyan

#define CYANF "\x1b[46m" 

//- Blanco

#define WHITEF "\x1b[47m"

//- Gris Claro

#define LIGHT_GRAYF "\x1b[100m" 

//- Rojo Claro

#define LIGHT_REDF "\x1b[101m" 

//- Verde Claro

#define LIGHT_GREENF "\x1b[102m" 

//- Amarillo Claro

#define LIGHT_YELLOWF "\x1b[103m" 

//- Azul Claro 

#define LIGHT_BLUEF "\x1b[104m" 

//- Magenta Claro

#define LIGHT_MAGENTAF "\x1b[105m" 

//- Cyan Claro 

#define LIGHT_CYANF "\x1b[106m" 

//- Blanco Claro

#define LIGHT_WHITEF "\x1b[107m" 



int main()

{

	bool bandera = false;

	char tecla;

	do

	{

		system("cls");

		cin.clear();

		system("cls");

		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;

		cout << LIGHT_YELLOWF << BLUE << BLINK_ON << "||    C A L C U L A D O R A                     ||" DEFAULT0 << endl;

		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;

		cout << LIGHT_YELLOWF << BLUE << "||                                                          ||" DEFAULT0 << endl;

		cout << LIGHT_YELLOWF << BLUE << "||----------------------------------------------------------||" DEFAULT0 << endl;
		 
		cout << LIGHT_YELLOWF << BLUE << "||                                                          ||" DEFAULT0 << endl;

		cout << LIGHT_YELLOWF << BLUE << "||                       CREADOR:                           ||" DEFAULT0 << endl;

		cout << LIGHT_YELLOWF << BLUE << "||               JUAN PABLO CHIPRES ARTEAGA                 ||" DEFAULT0 << endl;

		cout << LIGHT_YELLOWF << BLUE << "||                   BACHILLERATO NO.8                      ||" DEFAULT0 << endl;

		cout << LIGHT_YELLOWF << BLUE << "||                         3B                               ||" DEFAULT0 << endl;

		cout << LIGHT_YELLOWF << BLUE << "||----------------------------------------------------------||" DEFAULT0 << endl;

		cout << LIGHT_YELLOWF << BLUE << "||                                                          ||" DEFAULT0 << endl;

		cout << LIGHT_YELLOWF << BLUE << "|| " DEFAULT0 << LIGHT_YELLOWF << RED << "E s t a s   s o n   l a s   o p c i o n e s:" DEFAULT0 << LIGHT_YELLOWF << BLUE << "             ||" DEFAULT0 << endl;

		cout << LIGHT_YELLOWF << BLUE << "||                                                          ||" DEFAULT0 << endl;

		cout << LIGHT_MAGENTAF << WHITE << "||                     \t1.- SUMA                 ||" DEFAULT0 << endl;

		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;

		cout << LIGHT_MAGENTAF << WHITE << "||                     \t2.- RESTA                 ||" DEFAULT0 << endl;

		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;

		cout << LIGHT_MAGENTAF << WHITE << "||                     \t3.- MULTIPLICACION                   ||" DEFAULT0 << endl;

		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;

		cout << LIGHT_MAGENTAF << WHITE << "||                     \t4.- DIVISION             ||" DEFAULT0 << endl;

		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;

		cout << LIGHT_MAGENTAF << WHITE << "||                     \t5.-" DEFAULT0 << BLACKF << RED " SALIR " DEFAULT0 << LIGHT_MAGENTAF << WHITE << "                          ||" << endl;

		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;

		cout << "Elige una opcion: ";

		cin >> tecla;

		switch (tecla)

		{

		case '1':

			system("cls");

			cout << BLUEF << LIGHT_GREEN << "--------------------------------------------------------------" DEFAULT0 << endl;

			cout << BLUEF << BLACK << "||  H A S   E L E G I D O   L A  O P C I O N  D E  S U M A R   ||" DEFAULT0 << endl;

			cout << BLUEF << LIGHT_GREEN << "--------------------------------------------------------------" DEFAULT0 << endl;

			cout << BLUEF << LIGHT_GREEN << "||                                                          ||" DEFAULT0 << endl; // 54 + 8

			{

				int a,b;
				int suma;

				cout << WHITEF << GREEN << "|| Introduce el primer numero:                             ||" DEFAULT0 << endl;

				cin >> a;
				cout << WHITEF << GREEN << "|| Introduce el segundo numero:                             ||" DEFAULT0 << endl;

				cin >> b;
				suma = a + b;


				cout << WHITEF << GREEN << "||----------------------------------------------------------||" DEFAULT0 << endl;

				cout << WHITEF << GREEN << "||  El resultado de la suma es: " << suma << "                                       ||" DEFAULT0 << endl;

				cout << WHITEF << GREEN << "||----------------------------------------------------------||" DEFAULT0 << endl;

			}

			pausa();

			break;

		case '2':

			system("cls");

			cout << WHITEF << MAGENTA << "--------------------------------------------------------------" DEFAULT0 << endl;

			cout << WHITEF << MAGENTA << "||  H A S   E L E G I D O   L A  O P C I O N  D E  R E S T A   ||" DEFAULT0 << endl;

			cout << WHITEF << MAGENTA << "--------------------------------------------------------------" DEFAULT0 << endl;

			cout << WHITEF << MAGENTA << "||                                                          ||" DEFAULT0 << endl; //61

			{

				{

					int a, b;
					int resta;

					cout << WHITEF << GREEN << "|| Introduce el primer numero:                             ||" DEFAULT0 << endl;

					cin >> a;
					cout << WHITEF << GREEN << "|| Introduce el segundo numero:                             ||" DEFAULT0 << endl;

					cin >> b;
					resta = a - b;


					cout << WHITEF << GREEN << "||----------------------------------------------------------||" DEFAULT0 << endl;

					cout << WHITEF << GREEN << "||  El resultado de la resta es: " << resta << "                                       ||" DEFAULT0 << endl;

					cout << WHITEF << GREEN << "||----------------------------------------------------------||" DEFAULT0 << endl;

				}

			}

			pausa();

			break;

		case '3':

			system("cls");

			cout << GREENF << RED << "--------------------------------------------------------------" DEFAULT0 << endl;

			cout << GREENF << RED << "||    H A S   E L E G I D O   M U L T I P L I C A C I O N     ||" DEFAULT0 << endl;

			cout << GREENF << RED << "--------------------------------------------------------------" DEFAULT0 << endl;

			cout << GREENF << RED << "||                                                          ||" DEFAULT0 << endl;

			{

				{

					int a, b;
					int multi;

					cout << WHITEF << GREEN << "|| Introduce el primer numero:                             ||" DEFAULT0 << endl;

					cin >> a;
					cout << WHITEF << GREEN << "|| Introduce el segundo numero:                             ||" DEFAULT0 << endl;

					cin >> b;
					multi = a * b;


					cout << WHITEF << GREEN << "||----------------------------------------------------------||" DEFAULT0 << endl;

					cout << WHITEF << GREEN << "||  El resultado de la multiplicacion es: " << multi << "                                       ||" DEFAULT0 << endl;

					cout << WHITEF << GREEN << "||----------------------------------------------------------||" DEFAULT0 << endl;

				}
			}

			pausa();

			break;

		case '4':

			system("cls");

			cout << LIGHT_WHITEF << MAGENTA << "--------------------------------------------------------------" DEFAULT0 << endl;

			cout << LIGHT_WHITEF << MAGENTA << "|| E L E G I S T E  L A  O P C I O N  D E  D I V I S I O N  ||" << endl;

			cout << LIGHT_WHITEF << MAGENTA << "--------------------------------------------------------------" DEFAULT0 << endl;

			cout << LIGHT_WHITEF << MAGENTA << "||                                                          ||" DEFAULT0 << endl;
			{

				int a, b;
				int div;

				cout << WHITEF << GREEN << "|| Introduce el primer numero:                             ||" DEFAULT0 << endl;

				cin >> a;
				cout << WHITEF << GREEN << "|| Introduce el segundo numero:                             ||" DEFAULT0 << endl;

				cin >> b;
				div = a / b;


				cout << WHITEF << GREEN << "||----------------------------------------------------------||" DEFAULT0 << endl;

				cout << WHITEF << GREEN << "||  El resultado de la suma es: " << div << "                                       ||" DEFAULT0 << endl;

				cout << WHITEF << GREEN << "||----------------------------------------------------------||" DEFAULT0 << endl;

			}

			pausa();

			break;

		case '5':

			bandera = true;

			getwchar();

			return 0;

			// exit(1);

			break;

		default:

			system("cls");

			cout << "Opcion no valida. \a\n";

			pausa();

			break;



		}



	} while (bandera != true);

	return 0;



}



//Desarrollamos la función

void pausa()

{

	cout << "Pulsa una tecla para continuar... ";

	getwchar();

	getwchar();

}