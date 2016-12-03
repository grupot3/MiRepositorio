#include<iostream>
using namespace std;


class MiClaseEjemplo
{
  public:

    void mostrar() {
      cout << "Hola Mundo!!!!!!\n";
    }
};

int main() {
	MiClaseEjemplo objeto;    // Creamos un objeto de la clase MiClaseEjemplo
	objeto.mostrar();  // Invocamos el método "mostrar"
	return 0;
}
