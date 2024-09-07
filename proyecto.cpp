#include <iostream>
#include <string>
using namespace std;

class Animal{//Clase principal
    private:
    string peso, edad, nombre;
    public:
        Animal(string, string, string);
        void alimentar();
        void tomar_agua();
};
Animal::Animal(string _peso, string _edad, string _nombre){ //Constructor clase Animal
    peso = _peso;
    edad = _edad;
    nombre = _nombre;
}
void Animal :: alimentar(){ //ahi se alimenta el animalito :3
    cout << "El animal fue alimentado"; 
}
void Animal :: tomar_agua(){ //ahi toma agua el animalito :3
    cout << "El animal tomó agua"; 
}

class Perro: public Animal{
    private:
    string raza;
    public:
        Perro(string, string, string, string);
        void ladrar();
};
Perro::Perro(string _peso, string _edad, string _nombre, string _raza):Animal(_peso, _edad, _nombre){
    raza = _raza;
}
void Perro :: ladrar(){
    cout << "El perro ladra";
}


class Gato: public Animal{
    private:
    string colorPelo;
    public:
    Gato(string, string, string, string);
        void maullar();
};
Gato::Gato(string _peso, string _edad, string _nombre, string _colorPelo):Animal(_peso, _edad, _nombre){
    colorPelo = _colorPelo;
}
void Gato :: maullar(){
    cout << "El gato maulla";
}


class Pajaro: public Animal{
    private:
        string longitudAla;
    public:
        Pajaro(string, string, string, string);
        void volar();
};
Pajaro::Pajaro(string _peso, string _edad, string _nombre, string _longitudAla):Animal(_peso, _edad, _nombre){
    longitudAla = _longitudAla;
}
void Pajaro :: volar(){
    cout << "El pájaro vuela";
}



class Hamster: public Animal{
    private:
    string colorOrejitas;
    public:
        Hamster(string, string, string, string);
        void correrEnRuedita(); 
};

Hamster::Hamster(string _peso, string _edad, string _nombre, string _colorOrejitas):Animal(_peso, _edad, _nombre){
    colorOrejitas = _colorOrejitas;
}
void Hamster :: correrEnRuedita(){
    cout << "El hámster corre en su ruedita";
}


int main(){
    const string menu = "1. Añadir nuevos animales a la tienda\n2. Mostrar todos los animales de la tienda\n3.Alimentar a los animales\n4.Vender un animal\n5.Salir del programa";
    
    return 0;
}
