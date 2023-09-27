#include <iostream>
#include <GL/glut.h>
#include "steve.h"
#include <ctime>

// Dirt
float colorWeights[] = {0.46687f, 0.29250f, 0.24187f, 0.15750f, 0.1687f, 0.1687f};
float brownColors[][3] = {{93.0f / 255.0f, 64.0f / 255.0f, 55.0f / 255.0f},
                           {121.0f / 255.0f, 85.0f / 255.0f, 72.0f / 255.0f},
                           {62.0f / 255.0f, 39.0f / 255.0f, 35.0f / 255.0f},
                           {141.0f / 255.0f, 110.0f / 255.0f, 99.0f / 255.0f}};
float greyColors[][3] = {{97.0f / 255.0f, 97.0f / 255.0f, 97.0f / 255.0f},
                         {117.0f / 255.0f, 117.0f / 255.0f, 117.0f / 255.0f}};

// BG
float transparentGrey[3] = {117.0f / 255.0f, 117.0f / 255.0f, 117.0f / 255.0f};

// Grass
float greenShades[][3] = {
    {104.0f / 255.0f, 159.0f / 255.0f, 56.0f / 255.0f},   // Green 1
    {85.0f / 255.0f, 139.0f / 255.0f, 47.0f / 255.0f},   // Green 2
    {51.0f / 255.0f, 105.0f / 255.0f, 30.0f / 255.0f},   // Green 3
    {104.0f / 255.0f, 159.0f / 255.0f, 56.0f / 255.0f},   // Green 4
    {139.0f / 255.0f, 195.0f / 255.0f, 74.0f / 255.0f},   // Green 5
    {156.0f / 255.0f, 204.0f / 255.0f, 101.0f / 255.0f},  // Green 6
    {174.0f / 255.0f, 213.0f / 255.0f, 129.0f / 255.0f}  // Green 7
};

void environment() {
    
    int windowWidth = glutGet(GLUT_WINDOW_WIDTH);
    int windowHeight = glutGet(GLUT_WINDOW_HEIGHT);
    float aspectRatio = (float)windowWidth / (float)windowHeight;

    int numRows = 85;
    int numCols = 85 * aspectRatio;

    float squareSizeX = (40.0f * aspectRatio) / numCols; // Adjusted for 40.0f width
    float squareSizeY = 40.0f / numRows; // Adjusted for 40.0f height

    for (int row = 0; row < numRows; row++) {
        for (int col = 0; col < numCols; col++) {
            if ((row + col) % 2 == 0) {
                glColor3f(1.0f, 1.0f, 1.0f);
            } else {
                glColor3fv(transparentGrey);
            }

            glBegin(GL_QUADS);
            glVertex2f(col * squareSizeX - (20.0f * aspectRatio), row * squareSizeY - 20.0f);
            glVertex2f((col + 1) * squareSizeX - (20.0f * aspectRatio), row * squareSizeY - 20.0f);
            glVertex2f((col + 1) * squareSizeX - (20.0f * aspectRatio), (row + 1) * squareSizeY - 20.0f);
            glVertex2f(col * squareSizeX - (20.0f * aspectRatio), (row + 1) * squareSizeY - 20.0f);
            glEnd();
        }

    srand(time(NULL)); // Randomizer

    for (int row = 0; row <= 12; row++) {
        for (int i = 0; i < numCols; i++) {
            int randomIndex = rand() % 4;

            float* selectedColor = brownColors[randomIndex];

            glColor3fv(selectedColor);

            glBegin(GL_QUADS);
            glVertex2f(i * squareSizeX - (20.0f * aspectRatio), row * squareSizeY - 20.0f);
            glVertex2f((i + 1) * squareSizeX - (20.0f * aspectRatio), row * squareSizeY - 20.0f);
            glVertex2f((i + 1) * squareSizeX - (20.0f * aspectRatio), (row + 1) * squareSizeY - 20.0f);
            glVertex2f(i * squareSizeX - (20.0f * aspectRatio), (row + 1) * squareSizeY - 20.0f);
            glEnd();
        }
    }

    int greenRows[] = {13, 14, 15};

    for (int rowIdx = 0; rowIdx < 3; rowIdx++) {
        int row = greenRows[rowIdx];
        for (int i = 0; i < numCols; i++) {
            int randomIndex = rand() % 7;

            float* selectedColor = greenShades[randomIndex];

            glColor3fv(selectedColor);

            glBegin(GL_QUADS);
            glVertex2f(i * squareSizeX - (20.0f * aspectRatio), row * squareSizeY - 20.0f);
            glVertex2f((i + 1) * squareSizeX - (20.0f * aspectRatio), row * squareSizeY - 20.0f);
            glVertex2f((i + 1) * squareSizeX - (20.0f * aspectRatio), (row + 1) * squareSizeY - 20.0f);
            glVertex2f(i * squareSizeX - (20.0f * aspectRatio), (row + 1) * squareSizeY - 20.0f);
            glEnd();
        }
    }
}
}
