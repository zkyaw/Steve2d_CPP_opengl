#include <iostream>
#include <GL/glut.h>
#include "steve.h"

void drawScene();
void initRendering();
void handleResize(int w, int h);
void bgc();
void keyboardFunc(unsigned char key, int x, int y);

int currentScene = 0;

int main(int argc, char** argv) {
	
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
}

void initRendering(){
	glEnable(GL_DEPTH_TEST);
}

void handleResize(int w, int h){
	glViewport((w - h) / 2, 0, h, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-40.0,40.0,-40.0,40.0,-40.0,40.0); //left right bottom top near far
	glMatrixMode(GL_MODELVIEW);
}

void bgc(){
	glClearColor(0.0,0.0,0.0,0.0);
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
        case 27:
            exit(0);
            break;
        default:
            currentScene = 0; // Default to the initial scene
            break;    
        // Add more cases for scene selection if needed
    }

    glutPostRedisplay(); // Request a redraw
}
