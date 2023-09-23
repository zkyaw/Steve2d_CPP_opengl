#include <iostream>
#include <GL/glut.h>

void drawScene();
void initRendering();
void handleResize(int w, int h);
void bgc();

int main(int argc, char** argv) {
	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Steve");
	
	initRendering();
	bgc();
	glutDisplayFunc(drawScene);
	glutReshapeFunc(handleResize);
	glutMainLoop();
	return 0;
}

void drawScene(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	glBegin(GL_QUAD_STRIP); // r eye
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-3.0f, 11.0f);
	glVertex2f(-3.0f, 12.0f);
	glVertex2f(-2.0f, 11.0f);
	glVertex2f(-2.0f, 12.0f);
	glVertex2f(-1.0f, 11.0f);
	glVertex2f(-1.0f, 12.0f);
	glEnd();
	
	glBegin(GL_QUADS); // head
	glColor3f(0.87f,0.65f,0.29f);
	glVertex2f(-4.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glVertex2f(4.0f,16.0f);
	glVertex2f(-4.0f,16.0f);
	glEnd();
	
	glPointSize(10.0);

	glBegin(GL_POLYGON); // Torso
	glColor3f(0.08f,0.8f,0.87f);
	glVertex2f(-4.0f, 4.0f); //G
	glVertex2f(-4.0f,-2.0f); //H
	glVertex2f(4.0f,-2.0f); //I
	glVertex2f(4.0f,4.0f); //J
	glVertex2f(8.0f,4.0f); //K
	glVertex2f(8.0f,8.0f); //L
	glVertex2f(-8.0f,8.0f); //E
	glVertex2f(-8.0f,4.0f); //F
	glEnd();
	
	glBegin(GL_QUADS); // r arm
	glColor3f(0.87f,0.65f,0.29f);
	glVertex2f(-8.0f,-4.0f);
	glVertex2f(-4.0f,-4.0f);
	glVertex2f(-4.0f,8.0f);
	glVertex2f(-8.0f,8.0f);
	glEnd();
	
	glBegin(GL_QUADS); // l arm
	glColor3f(0.87f,0.65f,0.29f);
	glVertex2f(4.0f,-4.0f);
	glVertex2f(8.0f,-4.0f);
	glVertex2f(8.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glEnd();
	
	glBegin(GL_LINES); //mid
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, -2.0f);
	glVertex2f(0.0f, -16.0f);
	glEnd();
	
	glBegin(GL_QUADS); // r leg
	glColor3f(0.28f,0.09,0.68f);
	glVertex2f(-4.0f,-14.0f);
	glVertex2f(0.0f,-14.0f);
	glVertex2f(0.0f,-2.0f);
	glVertex2f(-4.0f,-2.0f);
	glEnd();
	
	glBegin(GL_QUADS); // l leg
	glColor3f(0.28f,0.09,0.68f);
	glVertex2f(0.0f,-14.0f);
	glVertex2f(4.0f,-14.0f);
	glVertex2f(4.0f,-2.0f);
	glVertex2f(0.0f,-2.0f);
	glEnd();
	
	glBegin(GL_QUADS); // foot
	glColor3f(0.7f,0.7f,0.7f);
	glVertex2f(-4.0f, -16.0f);
	glVertex2f(4.0f, -16.0f);
	glVertex2f(4.0f, -14.0f);
	glVertex2f(-4.0f, -14.0f);
	glEnd();
	
	glutSwapBuffers();
}

void initRendering(){
	glEnable(GL_DEPTH_TEST);
}

void handleResize(int w, int h){
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-20.0,20.0,-20.0,20.0,-20.0,20.0); //left right bottom top near far
	glMatrixMode(GL_MODELVIEW);
}

void bgc(){
	
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
}
