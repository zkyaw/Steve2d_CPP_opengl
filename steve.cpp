#include <iostream>
#include <GL/glut.h>
#include "steve.h"

/*float cyanShades[][3] = {
    {0.0f, 1.0f, 1.0f},  // Cyan
    {0.0f, 0.9f, 0.9f},  // A slightly darker shade
    {0.0f, 0.8f, 0.8f},  // An even darker shade
    // Add more shades as needed
};*/

void convertRGBtoGLColor3f(float r, float g, float b) {
    glColor3f(r / 255.0f, g / 255.0f, b / 255.0f);
}

void lineSteve(){
	glLineWidth(3.0f);
	glBegin(GL_LINES); // head
	glColor3f(0.87f,0.65f,0.29f);
	glVertex2f(-4.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glVertex2f(4.0f,16.0f);
	glVertex2f(4.0f,16.0f);
	glVertex2f(-4.0f,16.0f);
	glVertex2f(-4.0f,16.0f);
	glVertex2f(-4.0f,8.0f);
	glEnd();
	
	glBegin(GL_LINES); // Torso
	glColor3f(0.08f,0.8f,0.87f);
	glVertex2f(-4.0f, 4.0f); //G
	glVertex2f(-4.0f,-2.0f); //H
	
	glVertex2f(-4.0f,-2.0f); //H
	glVertex2f(4.0f,-2.0f); //I
	
	glVertex2f(4.0f,-2.0f); //I
	glVertex2f(4.0f,4.0f); //J
	
	glVertex2f(4.0f,4.0f); //J
	glVertex2f(8.0f,4.0f); //K
	
	glVertex2f(8.0f,4.0f); //K
	glVertex2f(8.0f,8.0f); //L
	
	glVertex2f(8.0f,8.0f); //L
	glVertex2f(-8.0f,8.0f); //E
	
	glVertex2f(-8.0f,8.0f); //E
	glVertex2f(-8.0f,4.0f); //F
	
	glVertex2f(-8.0f,4.0f); //F
	glVertex2f(-4.0f, 4.0f); //G
	glEnd();
	
	glBegin(GL_LINES); // r arm
	glColor3f(0.87f,0.65f,0.29f);
	glVertex2f(-8.0f,-4.0f);
	glVertex2f(-4.0f,-4.0f);
	glVertex2f(-4.0f,-4.0f);
	glVertex2f(-4.0f,8.0f);
	glVertex2f(-4.0f,8.0f);
	glVertex2f(-8.0f,8.0f);
	glVertex2f(-8.0f,8.0f);
	glVertex2f(-8.0f,-4.0f);
	glEnd();
	
	glBegin(GL_LINES); // l arm
	glColor3f(0.87f,0.65f,0.29f);
	glVertex2f(4.0f,-4.0f);
	glVertex2f(8.0f,-4.0f);
	glVertex2f(8.0f,-4.0f);
	glVertex2f(8.0f,8.0f);
	glVertex2f(8.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glVertex2f(4.0f,-4.0f);
	glEnd();
	
	glBegin(GL_LINES); //mid
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, -2.0f);
	glVertex2f(0.0f, -16.0f);
	glEnd();
	
	glBegin(GL_LINES); // r leg
	glColor3f(0.28f,0.09,0.68f);
	glVertex2f(-4.0f,-14.0f);
	glVertex2f(0.0f,-14.0f);
	glVertex2f(0.0f,-14.0f);
	glVertex2f(0.0f,-2.0f);
	glVertex2f(0.0f,-2.0f);
	glVertex2f(-4.0f,-2.0f);
	glVertex2f(-4.0f,-2.0f);
	glVertex2f(-4.0f,-14.0f);
	glEnd();
	
	glBegin(GL_LINES); // l leg
	glColor3f(0.28f,0.09,0.68f);
	glVertex2f(0.0f,-14.0f);
	glVertex2f(4.0f,-14.0f);
	glVertex2f(4.0f,-14.0f);
	glVertex2f(4.0f,-2.0f);
	glVertex2f(4.0f,-2.0f);
	glVertex2f(0.0f,-2.0f);
	glVertex2f(0.0f,-2.0f);
	glVertex2f(0.0f,-14.0f);
	glEnd();
	
	glBegin(GL_LINES); // foot
	glColor3f(0.7f,0.7f,0.7f);
	glVertex2f(-4.0f, -16.0f);
	glVertex2f(4.0f, -16.0f);
	glVertex2f(4.0f, -16.0f);
	glVertex2f(4.0f, -14.0f);
	glVertex2f(4.0f, -14.0f);
	glVertex2f(-4.0f, -14.0f);
	glVertex2f(-4.0f, -14.0f);
	glVertex2f(-4.0f, -16.0f);
	glEnd();
	
	environment();
}

void coloredSteve(){	
	
	// Right Eye
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-3.0f,11.0f);
	glVertex2f(-2.0f,11.0f);
	glVertex2f(-2.0f,12.0f);
	glVertex2f(-3.0f,12.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(82.0f, 61.0f, 137.0f);
	glVertex2f(-2.0f,11.0f);
	glVertex2f(-1.0f,11.0f);
	glVertex2f(-1.0f,12.0f);
	glVertex2f(-2.0f,12.0f);
	glEnd();
	
	// Left Eye
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(3.0f,11.0f);
	glVertex2f(2.0f,11.0f);
	glVertex2f(2.0f,12.0f);
	glVertex2f(3.0f,12.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(82.0f, 61.0f, 137.0f);
	glVertex2f(2.0f,11.0f);
	glVertex2f(1.0f,11.0f);
	glVertex2f(1.0f,12.0f);
	glVertex2f(2.0f,12.0f);
	glEnd();
	
	/*
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(43.0f, 30.0f, 13.0f);
	glVertex2f(-4.0f,14.0f);
	glVertex2f(4.0f,14.0f);
	glVertex2f(4.0f,16.0f);
	glVertex2f(-4.0f,16.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(43.0f, 30.0f, 13.0f);
	glVertex2f(-4.0f,13.0f);
	glVertex2f(-3.0f,13.0f);
	glVertex2f(-3.0f,14.0f);
	glVertex2f(-4.0f,14.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(43.0f, 30.0f, 13.0f);
	glVertex2f(4.0f,13.0f);
	glVertex2f(3.0f,13.0f);
	glVertex2f(3.0f,14.0f);
	glVertex2f(4.0f,14.0f);
	glEnd();
	*/
	
	glPointSize(10.0);
	glBegin(GL_POLYGON);
	convertRGBtoGLColor3f(43.0f, 30.0f, 13.0f);
	glVertex2f(-3.0f,14.0f);//8
	glVertex2f(3.0f,14.0f); //1
	
	glVertex2f(4.0f,16.0f); // 4
	glVertex2f(-4.0f,16.0f); //5 
	glVertex2f(-4.0f,13.0f);//6
	glVertex2f(-3.0f,13.0f);//7
	glEnd();
	
	
	// Mouth
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(104.0f, 64.0f, 48.0f);
	glVertex2f(-1.0f,10.0f);
	glVertex2f(1.0f,10.0f);
	glVertex2f(1.0f,11.0f);
	glVertex2f(-1.0f,11.0f);
	glEnd();
	
	// Chin
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(138.0f, 76.0f, 61.0f);
	glVertex2f(-1.0f,9.0f);
	glVertex2f(1.0f,9.0f);
	glVertex2f(1.0f,10.0f);
	glVertex2f(-1.0f,10.0f);
	glEnd();
	
	// Beard
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(65.0f, 33.0f, 12.0f);
	glVertex2f(-2.0f,9.0f);
	glVertex2f(-1.0f,9.0f);
	glVertex2f(-1.0f,10.0f);
	glVertex2f(-2.0f,10.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(65.0f, 33.0f, 12.0f);
	glVertex2f(-2.0f,8.0f);
	glVertex2f(2.0f,8.0f);
	glVertex2f(2.0f,10.0f);
	glVertex2f(-2.0f,10.0f);
	glEnd();
	
	// Head
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(187.0f, 137.0f, 114.0f);
	glVertex2f(-4.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glVertex2f(4.0f,16.0f);
	glVertex2f(-4.0f,16.0f);
	glEnd();
	
	// V Neck
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(187.0f, 137.0f, 114.0f);
	glVertex2f(-2.0f,7.0f);
	glVertex2f(2.0f,7.0f);
	glVertex2f(2.0f,8.0f);
	glVertex2f(-2.0f,8.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(187.0f, 137.0f, 114.0f);
	glVertex2f(-1.0f,6.0f);
	glVertex2f(1.0f,6.0f);
	glVertex2f(1.0f,7.0f);
	glVertex2f(-1.0f,7.0f);
	glEnd();
	
	// Torso
	glBegin(GL_POLYGON); 
	convertRGBtoGLColor3f(0.0f, 175.0f, 175.0f);
	glVertex2f(-4.0f, 4.0f); //G
	glVertex2f(-4.0f,-2.0f); //H
	glVertex2f(4.0f,-2.0f); //I
	glVertex2f(4.0f,4.0f); //J
	glVertex2f(8.0f,4.0f); //K
	glVertex2f(8.0f,8.0f); //L
	glVertex2f(-8.0f,8.0f); //E
	glVertex2f(-8.0f,4.0f); //F
	glEnd();
	
	glBegin(GL_POLYGON); 
	convertRGBtoGLColor3f(0.0f, 175.0f, 175.0f);
	glVertex2f(3.0f, -3.0f); 
	glVertex2f(3.0f,-4.0f); 
	glVertex2f(4.0f,-4.0f);
	glVertex2f(4.0f,-2.0f); 
	glVertex2f(2.0f,-2.0f);
	glVertex2f(2.0f,-3.0f);
	glEnd();
	
	// Right Arm
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(187.0f, 137.0f, 114.0f);
	glVertex2f(-8.0f,-4.0f);
	glVertex2f(-4.0f,-4.0f);
	glVertex2f(-4.0f,8.0f);
	glVertex2f(-8.0f,8.0f);
	glEnd();
	
	// Left Arm
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(187.0f, 137.0f, 114.0f);
	glVertex2f(4.0f,-4.0f);
	glVertex2f(8.0f,-4.0f);
	glVertex2f(8.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glEnd();
	
	// Mid
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, -2.0f);
	glVertex2f(0.0f, -16.0f);
	glEnd();
	
	// Right Leg
	glBegin(GL_QUADS); 
	convertRGBtoGLColor3f(70.0f, 58.0f, 165.0f);
	glVertex2f(-4.0f,-14.0f);
	glVertex2f(0.0f,-14.0f);
	glVertex2f(0.0f,-2.0f);
	glVertex2f(-4.0f,-2.0f);
	glEnd();
	
	// left Leg
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(70.0f, 58.0f, 165.0f);
	glVertex2f(0.0f,-14.0f);
	glVertex2f(4.0f,-14.0f);
	glVertex2f(4.0f,-2.0f);
	glVertex2f(0.0f,-2.0f);
	glEnd();
	
	// Feet
	glBegin(GL_QUADS);
	convertRGBtoGLColor3f(107.0f, 107.0f, 107.0f);
	glVertex2f(-4.0f, -16.0f);
	glVertex2f(4.0f, -16.0f);
	glVertex2f(4.0f, -14.0f);
	glVertex2f(-4.0f, -14.0f);
	glEnd();
	
	environment();

}
