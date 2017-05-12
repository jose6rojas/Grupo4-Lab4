#include "Marine.h"

Marine::Marine(){

}

Marine::Marine(string color,int x,int y):Pieza(color,x,y){
  
}



Pieza*** Marine::Mover(Pieza*** tablero,Pieza* p,int x,int y){
  if(p->getColor() == "N"){
    int i = p->getX();
    int j = p->getY();
    if((x==i+2&&y==j-2)){
      if((tablero[i+1][j-1]==NULL)){
        tablero[x][y] = p;
        tablero[i][j] = NULL;
        return tablero;
      }else{
        if(tablero[i+1][j-1]->getColor()=="B"){
          tablero[i+1][j-1]=NULL;
          tablero[x][y] = p;
          tablero[i][j] = NULL;
          return tablero;
        }
      }
    }
    if((x==i+2&&y==j+2)){
      if(tablero[i+1][j+1]==NULL){
        tablero[x][y] = p;
        tablero[i][j] = NULL;
        return tablero;
      }else{
        if(tablero[i+1][j+1]->getColor()=="B"){
          tablero[i+1][j+1] = NULL;
          tablero[x][y] = p;
          tablero[i][j] = NULL;
          return tablero;
        }
      }
    }
    if(x==i+1&&y==j-1){
      tablero[x][y] = p;
      tablero[i][j] = NULL;
    }
    if(x==i+1&&y==j+1){
      tablero[x][y] = p;
      tablero[i][j] = NULL;
    }

  }
  if(p->getColor() == "B"){
    
    int i = p->getX();
    int j = p->getY();
    if((x==i-2&&y==j-2)){
      if((tablero[i-1][j-1]==NULL)){
        tablero[x][y] = p;
        tablero[i][j] = NULL;
        return tablero;
      }else{
        if(tablero[i-1][j-1]->getColor()=="N"){
          tablero[i-1][j-1]=NULL;
          tablero[x][y] = p;
          tablero[i][j] = NULL;
          return tablero;
        }
      }
    }
    if((x==i-2&&y==j+2)){
      if(tablero[i-1][j+1]==NULL){
        tablero[x][y] = p;
        tablero[i][j] = NULL;
        return tablero;
      }else{
        if(tablero[i-1][j+1]->getColor()=="N"){
          tablero[i-1][j+1] = NULL;
          tablero[x][y] = p;
          tablero[i][j] = NULL;
          return tablero;
        }
      }
    }
    if(x==i-1&&y==j-1){
      tablero[x][y] = p;
      tablero[i][j] = NULL;
    }
    if(x==i-1&&y==j+1){
      tablero[x][y] = p;
      tablero[i][j] = NULL;
    }
  }
}
  
