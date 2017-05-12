
#ifndef MARINE_H
#define MARINE_H

#include "Pieza.h"
#include <string>
class Marine : public Pieza{
  public:
    Marine();
    Marine(string,int,int);

    
    
    Pieza*** Mover(Pieza***,Pieza*,int,int);
    


};

#endif
