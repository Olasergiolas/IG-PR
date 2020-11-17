#include "luzdireccional.h"

LuzDireccional::LuzDireccional(Tupla2f direccion, GLenum idLuzOpenGL, Tupla4f colorAmbiente, Tupla4f colorEspecular,
                               Tupla4f colorDifuso)
{
    alpha = direccion(0);
    beta = direccion(1);
    posicion = Tupla4f(1.0, 1.0, 0.0, 0.0);
    id = idLuzOpenGL;
    this->colorAmbiente = colorAmbiente;
    this->colorDifuso = colorDifuso;
    this->colorEspecular = colorEspecular;
}

void LuzDireccional::variarAnguloAlpha(float incremento){
    alpha += incremento;
}

void LuzDireccional::variarAnguloBeta(float incremento){
    beta += incremento;
}
