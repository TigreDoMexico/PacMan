#include "fantasma.h"
#include "movimentos.h"
#if defined(__APPLE__)
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#else
#include <GL/gl.h>
#include <GL/glu.h>
#endif

fantasma::fantasma(float x, float y){
	this->posX = x;
	this->posY = y;
}

void fantasma::desenhaFantasma(float r, float g, float b){
	glLineWidth(1);

	glBegin (GL_QUADS);
        glColor3f (r, g, b);   glVertex2f (this->posX + 0.07, this->posY + 0.07);
        glColor3f (r, g, b);   glVertex2f (this->posX - 0.07, this->posY + 0.07);
        glColor3f (r, g, b);   glVertex2f (this->posX - 0.07, this->posY - 0.07);
        glColor3f (r, g, b);   glVertex2f (this->posX + 0.07, this->posY - 0.07);
    glEnd();
	
}

void fantasma::moveFantasmaCima(){
	movimentos MovimentoFantasma;
	
	if(MovimentoFantasma.verificaLimitesCima(this->posX, this->posY)){
		this->posY += 0.01;
	}
}

void fantasma::moveFantasmaBaixo(){
	movimentos MovimentoFantasma;
	
	if(MovimentoFantasma.verificaLimitesBaixo(this->posX, this->posY)){
		this->posY -= 0.01;
	}
}

void fantasma::moveFantasmaDireita(){
	movimentos MovimentoFantasma;
	
	if(MovimentoFantasma.verificaLimitesDireita(this->posX, this->posY)){
		this->posX += 0.01;
	}
}

void fantasma::moveFantasmaEsquerda(){
	movimentos MovimentoFantasma;
	
	if(MovimentoFantasma.verificaLimitesEsquerda(this->posX, this->posY)){
		this->posX -= 0.01;
	}
}

float fantasma::retornaPosicaoX(){
	return this->posX;
}

float fantasma::retornaPosicaoY(){
	return this->posY;
}
