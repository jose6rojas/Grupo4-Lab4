#include "General.h"

General::General(){
}

General::General(char color,int x, int y)::Pieza(color,x,y){
  
}


Pieza** General::Pieza(Pieza*** tablero, Pieza* p, int x, int y){
    
    if(p.getColor = 'N' ){
        //diagonal
        if(x>p.getX+2&&y==p.getY-2)||(x==p.getX+2&&y==p.getY+2)
            if((tablero[x+1][y-1]==' ')||(tablero[x+1][y+1]==' ')){
            cout<<"la casilla esta ocupada";
            return tablero;
        }else{
            if(tablero[x+1][y-1].getColor==p.getColor){
                cout<<"La pieza no se puede mover";
                return tablero;
            }
        
        }
        //horizontal
        if((y>p.getY+1&&x==p.getX-1||)||(y==p.getY+1&&x==p.getX+1))
            if((tablero[x+1][y-1]==' ')||(tablero[x+1][y-1]==' ')){
                cout<<"La casilla esta ocupado";
                return tablero;
            }else{
                if((tablero[x+1][y-1]==' ')||(tablero[x+1][y+1]==' ')){
                    cout"la pieza no se puede mover";
                    return tablero;
                }
         }

    }

}

