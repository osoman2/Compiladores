#ifndef VERTEX_H
#define VERTEX_H
#include <iostream>
#include <vector>
#include "arista.cpp"
using namespace std;
template <class Tnodo,class Tari>
class Vertice
{
private:
    Tnodo data;
    vector <Arista<Tnodo,Tari>*> aristas;
public:
    Vertice(Tnodo dato){
        this.data = dato;
        aristas.clear();
    }
    Tnodo get_data(){
        return this.data;
    }
    void set_data(Tnodo dato){
        this.data = dato;
    }

    ~Vertice(){}
};

#endif