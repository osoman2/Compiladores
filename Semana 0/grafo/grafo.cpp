#ifndef GRAPH_H
#define GRAPH_H
#include "vertice.cpp"
template<class N,class A>
class Grafo
{
private:
    vector <Arista<N,A>*> aristas;
    vector <Vertice<N,A>*> vertices;
public:
    Grafo(){
        aristas.clear();
        vertices.clear();
    }
    ~Grafo();
    void makelink(Vertice<N,A>&p,Vertice<N,A>&ll,A a_dato){
        Arista<N,A> *arista = new Arista<N,A>(p,ll,a_dato);
        aristas.insert(arista);
    }
    void addnode(const Vertice<N,A> &nuevo){
        this.vertices.insert(nuevo);
    }

    void addnode_value(N nuevo){
        Vertice<N,A> *nodo= new Vertice<N,A>(nuevo); 
        this.vertices.insert(nodo);
    }
    void printnodos(){
        for(int i = 0;i<vertices.capacity();i++){
            cout<<vertices.at(i)->get_data()<<" ";
        }
    }
};








#endif