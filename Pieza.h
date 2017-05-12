// Pieza.h

#include <iostream>

#ifndef PIEZA_H
#define PIEZA_H

class Pieza
{
	protected:
		char color;
		int x, y; // columna, fila
	public:
		Pieza();
		Pieza(char, int, int); // color, columna, fila
};

#endif
