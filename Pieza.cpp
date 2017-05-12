// Pieza.cpp

#include "Pieza.h"

Pieza::Pieza()
{
	this -> color = ' ';
	this -> x = 0;
	this -> y = 0;
}

Pieza::Pieza(string color, int x, int y)
{
	this -> color = color;
	this -> x = x;
	this -> y = y;
}

// color
string Pieza::getColor() { return color; }
void Pieza::setColor(string color)
{
	this -> color = color;
}

// x
int Pieza::getX() { return x; }
void Pieza::setX(int x)
{
	this -> x = x;
}

// y
int Pieza::getY() { return y; }
void Pieza::setY(int y)
{
	this -> y = y;
}
