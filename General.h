#include "Pieza.h"
#ifndef GENERAL_H
#define GENERAL_H
class General:public Pieza(){
    public:
        General();
        General(char ,int, int);

//        MoverPieza(int, int);
        int getX();
        int getY();
        
        void setX(int);
        void setY(int);
        
        Pieza** Mover(Pieza**,Pieza,int, int);

};
#endif
