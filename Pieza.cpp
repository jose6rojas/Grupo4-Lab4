// Pieza.cpp

#include "Pieza.h"

Pieza::Pieza()
{
	this -> color = ' ';
	this -> x = 0;
	this -> y = 0;
}

Pieza::Pieza(char color, int x, int y)
{
	this -> color = color;
	this -> x = x;
	this -> y = y;
}
