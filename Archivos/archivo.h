#include <iostream>
using namespace std; 
class archivo 
{
    private:         
    string nombreA;     
    
    public:         
    archivo();         
    void setNombreA(string n);         
    string getNombreA();         
    void escribir();         
    void leer();         
    virtual ~archivo(); 
    };