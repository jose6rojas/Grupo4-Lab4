// viernes, 12 de mayo de 2017
// Laboratorio IV - Programacion III
// Grupo 4 - Carlos, David y Jose

#include <iostream>
#include <ncurses>
#include "Pieza.h"
#include "Marine.h"
#include "General.h"

using namespace std;

void imprimirMatriz(Pieza**); // matriz

int main(int argc, char const *argv[])
{
	initscr();
	raw();
	
	// Crea la matriz de apuntadores
	Pieza** matriz = new Pieza*[8];
	for(int i = 0; i < 8; i++)
		matriz[i] = new Pieza[8];
	
	// Inicializa la matriz
	for(int i = 1; i <= 8; i++)
	{
		for(int j = 1; j <= 8; j++)
		{
			if(i <= 2)
			{
				if(j % 2 == 0)
					matriz[i][j] = new Marine('N', i, j);
			}
			if(i >= 5)
			{
				if(j % 2 != 0)
					matriz[i][j] = new Marine('B', i, j);
			}
		}
	}
	
	
	
	return 0;
}

void 
