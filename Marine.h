
#ifndef MARINE_H
#define MARINE_H

#include "Pieza.h"

class Marine : public Pieza{
  public:
    Marine();
    Marine(char,int,int);

    
    
    Pieza*** Mover(Pieza***,Pieza,int,int);
    


};

#endif
