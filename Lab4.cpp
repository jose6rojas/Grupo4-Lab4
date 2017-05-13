// viernes, 12 de mayo de 2017
// Laboratorio IV - Programacion III
// Grupo 4 - Carlos, David y Jose

#include <iostream>
#include <string>
#include <ncurses.h>
#include "Pieza.h"
#include "Marine.h"
#include <sstream>
// #include "General.h"

using namespace std;

void imprimirMatriz(Pieza***); // matriz
int Letra(char);//pasar de char a numero
int main(int argc, char const *argv[])
{
	initscr();
	raw();
	
	// printw("hola");
	
	// Crea la matriz de apuntadores
	Pieza*** matriz = new Pieza**[8];
	for(int i = 0; i < 8; i++)
		matriz[i] = new Pieza*[8];
	
	// Inicializa la matriz
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
			matriz[i][j] = NULL;
	}
	
	// Llena la matriz
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			if(i == 0)
			{
				if(j % 2 == 0)
					matriz[i][j] = new Marine("N", i, j);
			}
			else if(i == 1)
			{
				if(j % 2 != 0)
					matriz[i][j] = new Marine("N", i, j);
			}
			else if(i == 2)
			{
				if(j % 2 == 0)
					matriz[i][j] = new Marine("N", i, j);
			}
			else if(i == 5)
			{
				if(j % 2 != 0)
					matriz[i][j] = new Marine("B", i, j);
			}
			else if(i == 6)
			{
				if(j % 2 == 0)
					matriz[i][j] = new Marine("B", i, j);
			}
			else if(i == 7)
			{
				if(j % 2 != 0)
					matriz[i][j] = new Marine("B", i, j);
			}
		}
	}
	
	imprimirMatriz(matriz);
 /* printw("Ingrese la letra de la columna de la pieza que desea mover: \n");
  char x1;
  x1 = getch();
  getstr(x1);
  int x2; 
  stringstream ss;
  
  x2 = Letra(x1);
  ss<<x2;
  string a = ss.str();
  
  printw(a.c_str());
 printw("Ingrese el numero de la fila de la pieza que desea mover: \n");
  char y1;
  y1 = getch();
  int y2;
  y2 = Letra(y1);
  printw("Ingrese la letra de la columna del lugar al que se desea mover: \n");
  char x3;
  x3=getch();
  int x4;
  x4 = Letra(x3);
  printw("Ingrese el numero de fila del lugar al que se desea mover: \n");
  char y3;
  y3 = getch();
  int y4;
  y4 = Letra(y3);
  Marine* m;
  m = reinterpret_cast<Marine*>(matriz[x2][y2]);
  matriz = m->Mover(matriz,m,y4,x4);
  imprimirMatriz(matriz);*/

	// refresh();
	
	// Libera a la matriz
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			delete matriz[i][j];
			matriz[i][j] = NULL;
		}
	}
	
	for(int i = 0; i < 8; i++)
	{
		delete matriz[i];
	}
	
	delete matriz;
	
	getch();
	endwin();
	
	return 0;
}

void imprimirMatriz(Pieza*** matriz)
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			if(matriz[i][j] != NULL)
			{
				if(matriz[i][j] -> getColor() == "N") // negra
				{
					printw("[");
					start_color();
					init_pair(1, COLOR_WHITE, COLOR_BLACK);
					attron(COLOR_PAIR(1));
					string color;
					color = matriz[i][j] -> getColor();
					printw(color.c_str());
					attroff(COLOR_PAIR(1));
					printw("]");
				}
				else if(matriz[i][j] -> getColor() == "B") // blanca
				{
					printw("[");
					start_color();
					init_pair(2, COLOR_BLACK, COLOR_WHITE);
					attron(COLOR_PAIR(2));
					string color;
					color = matriz[i][j] -> getColor();
					printw(color.c_str());
					attroff(COLOR_PAIR(2));
					printw("]");
				}
			}
			else
			{
				printw("[ ]");
			}
		}
		printw("\n");
	}
}

int Letra(string num){
  if(num=="a"||num=="0"){
    return 0;
  }
  if(num=="b"||num=="1"){
    return 1;
  }
  if(num == "c"||num=="2"){
    return 2;
  }
  if(num == "d"||num=="3"){
    return 3;
  }
  if(num == "e"||num=="4"){
    return 4;
  }
  if(num == "f"||num=="5"){
    return 5;
  }
  if(num == "g"||num=="6"){
    return 6;
  }
  if(num == "h"||num=="7"){
    return 7;
  }
  return 0;
}








