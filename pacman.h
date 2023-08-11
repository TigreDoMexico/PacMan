#ifndef PACMAN_H
#define PACMAN_H

#if defined(__APPLE__)
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#else
#include <GL/gl.h>
#include <GL/glu.h>
#endif

class pacman
{
	int DEG2RAD;
	
	public:
		void desenhaCirculo(GLfloat x, GLfloat y, GLfloat raio, int blink);
		
};

#endif
