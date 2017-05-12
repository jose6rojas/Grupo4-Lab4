// Pieza.h

#include <iostream>
#include <string>

using namespace std;

#ifndef PIEZA_H
#define PIEZA_H

class Pieza
{
	protected:
		string color;
		int x, y; // columna, fila
	public:
		Pieza();
		Pieza(string, int, int); // color, columna, fila
		
		// color
		string getColor();
		void setColor(string);
		// x
		int getX();
		void setX(int);
		// y
		int getY();
		void setY(int);
		
};

#endif
