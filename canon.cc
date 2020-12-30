#include "Include/canon.h"

Canon::Canon(){
    cilindro = new Cilindro(25, 25, 20, 10, std::pair<bool, bool>(true, true));
    base = new Cono(20, 50, 20, 10, std::pair<bool, bool>(true, true));

    Material m(negro, gris, blanco, 90.0f);
    base->setMaterial(m);
    cilindro->setMaterial(m);
}

void Canon::draw(modo_visualizacion v, std::set<GLenum> estado_dibujados, modo_coloreado coloreado){
    glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
        glTranslatef(-15.0f, 0.0f, 0.0f);
        glRotatef(90.0f, 0, 0, 1);
        glScalef(1.0f, 15.0f, 1.0f);
        cilindro->draw(v, estado_dibujados, coloreado);
    glPopMatrix();

    glPushMatrix();
        glRotatef(90.0f, 0, 0, 1);
        glScalef(3.0f, 3.0f, 3.0f);
        base->draw(v, estado_dibujados, coloreado);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-20.0f, -20.0f, 10.0);
        glRotatef(-90.0f, 1, 0, 0);
        cilindro->draw(v, estado_dibujados, coloreado);
    glPopMatrix();
}
