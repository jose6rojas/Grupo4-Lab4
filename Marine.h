
#ifndef MARINE_H
#define MARINE_H

#include "Pieza.h"

class Marine : public Pieza{
  public:
    Marine();
    Marine(int,int,char);

    int getX();
    int getY();
    void setX(int);
    void setY(int);
    
    Pieza** Mover(Pieza**,Pieza,int,int);
    


};

#endif
