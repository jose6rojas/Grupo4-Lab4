#include "Marine.h"

Marine::Marine(){

}

Marine::Marine(int x,int y,char color):Pieza(color,x,y){
  
}

int Marine::getX(){
  return this->x;
}
int Marine::getY(){
  return this->y;
}
void Marine::setX(int px){
  this->x = px;
}
void Marine::setY(int py){
  this->y = py;
}

Pieza** Marine::Mover(Pieza** tablero,Pieza p,int x,int y){
  /*if(p.getColor = 'N'){
    if((x==p.getX+2&&y==p.getY-2)||(x==p.getX+2&&y==p.getY+2)){
      if((tablero[x+1][y-1]==nullptr)||(tablero[x+1][y+1]==nullptr)){
        cout<<"La pieza no se pudo mover.";
        return tablero;
      }else{
        if(tablero[x+1][y-1].getColor == p.getColor){
          cout<<"La pieza no se pudo mover.";
          return tablero;
        }else{
          
        }
      }
    }
  }
  if(Pieza.getColor = 'B'){
  
  }
  */
}
