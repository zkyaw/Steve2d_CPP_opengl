#include <iostream>
#include <GL/glut.h>
#include <GL/freeglut.h>
#include "steve.h"
#include <ctime>

void drawScene();
void initRendering();
void handleResize(int w, int h);
void environment();
void keyboardFunc(unsigned char key, int x, int y);

int currentScene = 0;

int main(int argc, char** argv) {
	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1920, 1080);
	glutCreateWindow("Steve");
	
	initRendering();
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
        environment();
    } else if (currentScene == 2) {
        lineSteve();
    } else if (currentScene == 3) {
    	coloredSteve();
	} else {
		
	}

    glutSwapBuffers();
}

void initRendering(){
	glEnable(GL_DEPTH_TEST);
}

void handleResize(int w, int h){
    int windowWidth = glutGet(GLUT_WINDOW_WIDTH);
    int windowHeight = glutGet(GLUT_WINDOW_HEIGHT);
    float aspectRatio = (float)windowWidth / (float)windowHeight;

    glViewport(0, 0, windowWidth, windowHeight);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-20.0 * aspectRatio, 20.0 * aspectRatio, -20.0, 20.0, -20.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
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
        case '3':
        	currentScene = 3;
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
