#include "General.h"

General::General(){
   x=0;
   y=0;
   color=' ';

}

General::General(char color,int x, int y)::Pieza(color,x,y){
    this->color= color;
    this->x=x;
    this->y=y;
}

char General::color(){
    return color;
}

int General::x(){
    return x;
}

int General::y(){
    return y;
};

int General::getX(){
    return x;
}

void General::setX(int pX){
    x=pX;
}

int General::getY(){
    return y;
}

void General::setY(int pY){
    y = pY;
}

Pieza** General::Pieza(Pieza** tablero, Pieza p, int x, int y){
   /* if(y= p -1 ){
    }else{
        if(x
    }*/

}

