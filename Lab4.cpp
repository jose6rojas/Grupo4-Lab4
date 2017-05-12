// viernes, 12 de mayo de 2017
// Laboratorio IV - Programacion III
// Grupo 4 - Carlos, David y Jose

#include <iostream>
#include <string>
#include <ncurses.h>
#include "Pieza.h"
#include "Marine.h"
// #include "General.h"

using namespace std;

void imprimirMatriz(Pieza***); // matriz

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










