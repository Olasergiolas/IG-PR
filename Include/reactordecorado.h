#ifndef REACTORDECORADO_H
#define REACTORDECORADO_H

#include"cilindro.h"
#include"tetraedro.h"

class ReactorDecorado
{
private:
    Cilindro* reactor = nullptr;
    Tetraedro* aleron = nullptr;

public:
    ReactorDecorado();
    void draw(modo_visualizacion v, std::set<GLenum> estado_dibujados, modo_coloreado coloreado,
              Tupla3f color = Tupla3f(0.0f, 0.0f, 0.0f));
    void setMaterial(Material m1, Material m2);
    void setColor(Tupla3f color);
};

#endif // REACTORDECORADO_H
