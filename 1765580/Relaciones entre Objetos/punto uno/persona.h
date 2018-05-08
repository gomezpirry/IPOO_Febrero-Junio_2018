#ifndef persona_h
#define persona_h
#include <string>

using namespace std;

class persona
{
private:

    string nombre;
    string apellido;
    int identificacion;


public:

    persona();
    ~persona();
    void darNombre (string nombre);
    string obtenernombre ();
    void darapellido(string apellido);
    string obtenerapellido();
    void darcedula(int cedula);


};
#endif // persona_h
