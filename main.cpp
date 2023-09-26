#include <iostream>
#include <GL/glut.h>
#include "steve.h"

void drawScene();
void initRendering();
void handleResize(int w, int h);
void bgc();
void keyboardFunc(unsigned char key, int x, int y);
<<<<<<< HEAD

int currentScene = 0;
=======
>>>>>>> b6fbf6fb947c1fbf91d0aafd90f0e6b16fb526e3


int currentScene = 0;

void lineSteve(){
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
	
<<<<<<< HEAD
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1920, 1080);
	glutCreateWindow("Steve");
	
	initRendering();
	bgc();
	glutDisplayFunc(drawScene);
	glutReshapeFunc(handleResize);
	glutKeyboardFunc(keyboardFunc);
	glutMainLoop();
	return 0;
}

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    // Check the current scene and call the appropriate rendering function
    if (currentScene == 1) {
        lineSteve();
    } else if (currentScene == 2) {
        coloredSteve();
    } else {
    	
	}

    glutSwapBuffers();
=======
	glBegin(GL_POLYGON); // Torso
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
}

void coloredSteve(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	glPointSize(10.0);
	
	glBegin(GL_POINTS); //Patches
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-2.5, 11.5); // r eye
	glColor3f(0.29f, 0.15f, 0.56f);
	glVertex2f(-1.5, 11.5);
	glEnd();
	
	glBegin(GL_QUADS); // head
	glColor3f(0.87f,0.65f,0.29f);
	glVertex2f(-4.0f,8.0f);
	glVertex2f(4.0f,8.0f);
	glVertex2f(4.0f,16.0f);
	glVertex2f(-4.0f,16.0f);
	glEnd();
	
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
>>>>>>> b6fbf6fb947c1fbf91d0aafd90f0e6b16fb526e3
}

int main(int argc, char** argv) {
	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1920, 1080);
	glutCreateWindow("Steve");
	
	initRendering();
	glutDisplayFunc(drawScene);
	glutReshapeFunc(handleResize);
	bgc();
	glutKeyboardFunc(keyboardFunc);
	glutMainLoop();
	return 0;
}

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    // Check the current scene and call the appropriate rendering function
    if (currentScene == 1) {
        lineSteve();
    } else if (currentScene == 2) {
        coloredSteve();
    }

    glutSwapBuffers();
}

void initRendering(){
	glEnable(GL_DEPTH_TEST);
}

void handleResize(int w, int h){
<<<<<<< HEAD
	glViewport((w - h) / 2, 0, h, h);
=======
	glViewport(0,0,200,200);
>>>>>>> b6fbf6fb947c1fbf91d0aafd90f0e6b16fb526e3
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-40.0,40.0,-40.0,40.0,-40.0,40.0); //left right bottom top near far
	glMatrixMode(GL_MODELVIEW);
}

void bgc(){
<<<<<<< HEAD
	glClearColor(0.0,0.0,0.0,0.0);
=======
	
>>>>>>> b6fbf6fb947c1fbf91d0aafd90f0e6b16fb526e3
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    int windowWidth = glutGet(GLUT_WINDOW_WIDTH);
    int windowHeight = glutGet(GLUT_WINDOW_HEIGHT);
    float aspectRatio = (float)windowWidth / (float)windowHeight;

    int numRows = 85; 
    int numCols = 85 * aspectRatio; 

    float squareSizeX = 2.0f / numCols;
    float squareSizeY = 2.0f / numRows;

    for (int i = 0; i < numCols; i++) {
        for (int j = 0; j < numRows; j++) {
            if ((i + j) % 2 == 0) {
                glColor3f(1.0f, 1.0f, 1.0f); 
            } else {
                glColor3f(0.5f, 0.5f, 0.5f); 
            }

            glBegin(GL_QUADS);
            glVertex2f(i * squareSizeX - 1, j * squareSizeY - 1);
            glVertex2f((i + 1) * squareSizeX - 1, j * squareSizeY - 1);
            glVertex2f((i + 1) * squareSizeX - 1, (j + 1) * squareSizeY - 1);
            glVertex2f(i * squareSizeX - 1, (j + 1) * squareSizeY - 1);
            glEnd();
        }
    }
    glutSwapBuffers();
}

void keyboardFunc(unsigned char key, int x, int y) {
    // Handle keyboard input to change the current scene
    switch (key) {
        case '1':
            currentScene = 1;
            break;
        case '2':
            currentScene = 2;
            break;
<<<<<<< HEAD
        case 27:
            exit(0);
            break;
        default:
            currentScene = 0; // Default to the initial scene
            break;    
=======
>>>>>>> b6fbf6fb947c1fbf91d0aafd90f0e6b16fb526e3
        // Add more cases for scene selection if needed
    }

    glutPostRedisplay(); // Request a redraw
}
