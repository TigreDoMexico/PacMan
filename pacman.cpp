#include <math.h>
#if defined(__APPLE__)
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#else
#include <GL/gl.h>
#include <GL/glu.h>
#endif
#include "pacman.h"
#define PI 3.1415

void pacman::desenhaCirculo(GLfloat x, GLfloat y, GLfloat raio, int blink){
	int i;
	int triangleAmount = 20;
	GLfloat duploPI = 2.0f * PI;
	
	glBegin(GL_TRIANGLE_FAN);	
		
		glColor3f (1.0f, 1.0f, 0.0f);
		glVertex2f(x, y);
		
		if(blink){
			for(i=0; i<=triangleAmount; i++){
			
			glVertex2f(
				x + (raio * cos(i * duploPI / triangleAmount)),
				y + (raio * sin(i * duploPI / triangleAmount)));							
			}		
		}else{
			for(i=0; i<=triangleAmount - 1; i++){
				if( i > 0 && i != triangleAmount){
					glVertex2f(
						x + (raio * cos(i * duploPI / triangleAmount)),
						y + (raio * sin(i * duploPI / triangleAmount)));							
				}		
			}
		}
	glEnd();	
}
