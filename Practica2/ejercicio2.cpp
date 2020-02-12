///Modificar el codigo de tal manera que agregue su Peso como atributo pri-
///vado de la clase Gato y desarrollar los metodos para asignar y obtner el peso del gato, agregar
///otro constructor que acepte como parametros el peso y la edad
#include <iostream>

using namespace std;

class Gato{
public:
    Gato(int edadInicial, float pesoInicial);
    ~Gato();
    int ObtenerEdad();
    void AsingnarEdad(int edad);
    void AsignarPeso(float peso);
    float ObtenerPeso();
    void Maullar();

private:
    int suEdad;
    float suPeso;
};
///Constructor de Gato
Gato::Gato(int edadInicial, float pesoInicial){
    suEdad = edadInicial;
    suPeso = pesoInicial;
    cout <<"Se ha creado un objeto Gato de edad " << edadInicial<<endl;
    cout <<"El objeto Gato tiene un peso de " <<pesoInicial; cout<<"Kg \n"<< endl;
}
Gato::~Gato(){
    cout<< "El objeto Gato se destruira en 3, 2, 1.... ya fue...."<< endl;
}

void Gato::Maullar(){
    cout<<"Miauuuuu"<< endl;
}


int Gato::ObtenerEdad(){
    return suEdad;
}


void Gato::AsingnarEdad(int edad){
    suEdad = edad;
}


float Gato::ObtenerPeso(){
    return suPeso;
}
void Gato::AsignarPeso(float peso){
    suPeso = peso;
}


int main(){
    Gato Pelusa(5,3.7); /// Constructor
    Pelusa.Maullar();
    cout<<"Pelusa es un gato que tiene: \t";
    cout<<Pelusa.ObtenerEdad()<< " años de edad \n" <<endl;
    Pelusa.Maullar();
    Pelusa.AsingnarEdad(7);
    cout <<"\n Ahora Pelusa tiene: \t";
    cout <<Pelusa.ObtenerEdad()<< " años de edad " << endl;
    cout <<"\n Pelusa tiene un peso de:\t";
    cout <<Pelusa.ObtenerPeso()<< " kilogramos \n" <<endl;
    Pelusa.Maullar();
    Pelusa.AsignarPeso(5);
    cout<< "\n Ahora Pelusa pesa: \t ";
    cout << Pelusa.ObtenerPeso()<< " kilogramos \n" <<endl;

    return 0;
}
