#include "Marine.h"

Marine::Marine(){

}

Marine::Marine(char color,int x,int y):Pieza(color,x,y){
  
}



Pieza*** Marine::Mover(Pieza*** tablero,Pieza* p,int x,int y){
  if(p->getColor() == 'N'){
    if(tablero[x][y]==NULL){
      tablero[x][y] = p;
      int i = p->getX();
      int j = p->getY();
      tablero[i][j] = NULL;
    }
  }
  if(p->getColor() == 'B'){
    if(tablero[x][y]==NULL){
      tablero[x][y] = p;
      int i = p->getX();
      int j = p->getY();
      tablero[i][j] = NULL;
    }
  }
  
}
