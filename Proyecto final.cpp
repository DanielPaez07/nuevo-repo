#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <string.h>

using namespace std;

void mostrar(int matriz[40][40],int i, int j, int tam1, int tam2, int x, int y,int c);
void escribir(char resultado);
void gotoxy(int x1, int y1){
    HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X=x1;
    dwPos.Y=y1;
    SetConsoleCursorPosition(hcon,dwPos);
}

	char opcion;

    int i,j,R,c;
    char h;
    ifstream fin("prueba1.txt");
    int tam1;
    int tam2;
    int matriz[40][40];
    int ub1;
    int ub2;
    int ub3;
    int ub4;
    char ori;
    int numord;
    int aux;
    char ordenes[200];
    string robotcito;

    int x=ub1, y=ub2;

int main(){

system ("COLOR F4");
cout<<"BIENVENIDOS A LA TRAYECTORIA DEL ROBOT\n";
system("pause");

setlocale(LC_CTYPE,"spanish");
  //INGRESAR DATOS DEL txt//

      fin>>tam1>>tam2;//pedir los tamaños
    for(i=0;i<tam1;i++){//pedir la matriz
        for(j=0;j<tam2;j++){
    fin>>matriz[i][j];}
    };

       fin>>ub1>>ub2;//pedir posicion ninicial

    fin>>ub3>>ub4;//pedir posicion final
    fin>>ori;//la orientacion
    fin>>numord;//el numero de ordenes

    
    
        for(i=0;i<200;i++){ //pide las ordenes
        fin>>ordenes[i];
        }
    gotoxy(0,0);//va a (x,y,) (0,0)
    

 
ub1--;//ubica el robot en la posicion deseada
ub2--;
h=ori;
switch(h){//Define la orientacion
case 'E': c=1;break;
case 'S': c=2;break;
case 'O': c=3;break;
case 'N': c=4;break;
};

x=ub1, y=ub2;


mostrar(matriz,i,j,tam1,tam2,x,y,c);//IMPRIME LA primera MATRIZ
for(i=0;i<numord;i++)

{
	if (ordenes[i]=='D')//compara la orden si es 'D' gira 90° en sentido horario
	{
			if(c==4)
		{
			c=1;
		}
		else
		{
			c++;
		}
		
	}
	else if (ordenes[i]=='I')//compara la orde, si es 'I' gira 90° en sentido antihorario
	{
		if(c==1)
		{
		c=4;	
		}
		else
		{
			c--;
		}
	}

	else if(ordenes[i]=='A')//avanza 1 posicion segun la orientacion
	{
		
		
			switch(c){
			case 1: 
			y++;			
			break;
			
			case 2:
			x++;		
			break;
			
			case 3:
			y--;
			break;
			
			case 4:
			x--;			
			break;
				
		
		};	
			
	}
	else if (ordenes[i]!='D' || ordenes[i]!='I' || ordenes[i]!='A')
	{
		cout<<"La orden no es valida";
		system ("pause");
		break;
		
	}
	if(x<0 || y<0){			
			cout<<"Se ha salido de los limites";
			escribir('E');
			exit (-1);
			}
	
	
	if (x>tam1 || y>tam2)//si la posicion no está contenida en la matriz, se cierra el programa
			{			
			cout<<"Se ha salido de los limites";
			escribir('E');
			exit (-1);
			}

		if(matriz[x][y]==1){//si el robot se situa en una casilla con un 1 se cierra el programa
		cout<<"\nEl robot se estrelló";
		escribir('E');
		exit(-1);
		}
 else 
 {
 	cout<<"\nBUEN TRABAJO";
 }
mostrar(matriz,i,j,tam1,tam2,x,y,c);//muestra la matríz con la nueva posicion del robot
escribir('C');

	
}
        return 0;

}


void mostrar(int matriz[40][40],int i, int j, int tam1, int tam2, int x, int y,int c){
system("cls");
	
	
cout<<"BIENVENIDOS A LA TRAYECTORIA DEL ROBOT\n";
cout<<"\nEL ROBOT SE VA MOVIENDO\n";
        for(i=0;i<tam1;i++){//imprimir la matríz
               cout<<"\n";               
         for(j=0;j<tam2;j++){      	 
	
	
	

	  if(i==x&&j==y)//situa el robot en la posicion inicial ver lineas 41, 56	  
	  {
	  	
	  	matriz[i][j]=2;//define la posicion con un entero 2
	  		switch(c){	
	case 1: cout<<"> ";break;//orienta el robot
	case 2: cout<<"v ";break;//orienta el robot
	case 3: cout<<"< ";break;//orienta el robot
	case 4: cout<<"^ ";break;//orienta el robot segun el caso x del switch de la line 109
	};
	  }
	else{
	
	 	 if(matriz[i][j]==2){//imprime el rastro del robot con un *
	 	cout<<"* ";
	 	}
	 	else
	 	cout<<matriz[i][j]<<" "; //imprime el resto de la matriz
}  
	
	 }
}	  
	  cout<<endl;
}

void escribir(char resultado)
{
	ofstream archivo;
	archivo.open("salida.txt",ios::out);
	archivo<<resultado;
	archivo.close();
}
