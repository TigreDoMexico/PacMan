#ifndef FANTASMA_H
#define FANTASMA_H

class fantasma
{
	float posX, posY;
		
	public:		
		fantasma(float x, float y);
		void desenhaFantasma(float r, float g, float b);
		void moveFantasmaCima();
		void moveFantasmaBaixo();
		void moveFantasmaDireita();
		void moveFantasmaEsquerda();
		
		float retornaPosicaoX();
		float retornaPosicaoY();		
};

#endif
