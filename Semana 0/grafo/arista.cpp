#ifndef ARISTA_H
#define ARISTA_H
#include "vertice.cpp"
template<class Tnodo, class Tari>
class Arista
{
private:
    Vertice<Tnodo,Tari> *partida;
    Vertice<Tnodo,Tari> *llegada;
    Tari dato;
public:
    Arista(void){
        partida,llegada = nullptr;
    }
    Arista(Vertice <Tnodo,Tari> *s,Vertice <Tnodo,Tari> *l,Tari data):partida(s),llegada(l),dato(data){}
    
    Vertice <Tnodo,Tari>* get_partida(void){
        return partida;
    }
    Vertice <Tnodo,Tari>* get_llegada(void){
        return llegada;
    }
 
    Tari get_data(){
        return this.dato;
    }

    ~Arista(){
        
    }



};



#endif