#include "grafo.cpp"
#include <string>
int main(){
    Vertice<string,string> *nodo1 = new Vertice<string,string>("q1");
    Vertice<string,string> *nodo2 = new Vertice<string,string>("q2");
    Grafo<string,string> intento;
    intento.addnode(*nodo1);
    intento.printnodos();
    
    return 0;
}

