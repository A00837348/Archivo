#include "archivo.h" 
#include <iostream> 
#include<fstream>  

using namespace std;

archivo::archivo() 
{     
    nombreA=""; 
}  

void archivo::setNombreA(string n){     
    nombreA=n; 
}  

string archivo::getNombreA(){     
    return nombreA; 
}

void archivo::escribir(){      
    ofstream archivo;     
    string cadena;     
    int numero;      
    
    archivo.open(nombreA,ios::out);     
    if(archivo.fail()){         
        cout<<"El archivo no se pudo abrir";                 
            exit(1);     
    }      
    
    for(int i=0;i<5;i++){     	
        cout<<"Nombre: ";     	
        cin>>cadena;         
    archivo<<i<<cadena<<endl;     
    }     
    
    archivo.close(); 
}  

void archivo::leer(){     
    ifstream archivo;     
    string cadena;     
    
    int numero;      
    
    archivo.open(nombreA,ios::in);     
    if(archivo.fail()){         
        cout<<"El archivo no se pudo abrir";         
        exit(1);     
        }      
    while(!archivo.eof()){     
        (archivo,cadena);        
        archivo>>numero>>cadena;        
        cout<<numero<<cadena<<endl;     
    } 
}  
    
archivo::~archivo() 
{ 

}
