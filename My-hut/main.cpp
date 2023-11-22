#include <iostream>
#include <Windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Draw a colored triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f); //Blue
    glVertex2f(0.0f, 0.5f);
    glColor3f(1.0f, 0.0f, 0.0f); //Red
    glVertex2f(-0.8f, -0.1f);
    glColor3f(0.0f, 1.0f, 0.0f); //Green
    glVertex2f(0.8f, -0.1f);
    glEnd();

    //Draw the points at the vertex of the colored triangle
    glPointSize(5.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.0f, 0.5f);
    glColor3f(0.0f, 1.0f, 0.0f); // Green
    glVertex2f(-0.8f, -0.1f);
    glColor3f(0.0f, 0.0f, 1.0f); // Blue
    glVertex2f(0.8f, -0.1f);
    glEnd();

    //Draw the rectangular part of the hut(walls)
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.5f, 0.0f); // orange
    glVertex2f(-0.6f, -0.1f);
    glVertex2f(-0.6f, -0.8f);
    glVertex2f(0.6f, -0.8f);
    glVertex2f(0.6f, -0.1f);
    glEnd();
    
    //Draw the linestrip 
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0f, 0.0f, 0.0f); //Red
    glVertex2f(-0.7f, -0.1f);
    glVertex2f(-0.7f, -0.9f);
    glColor3f(0.0f, 1.0f, 0.0f); //Green
    glVertex2f(-0.7f, -0.9f);
    glVertex2f(0.7f, -0.9f);
    glColor3f(0.0f, 0.0f, 1.0f); //Blue
    glVertex2f(0.7f, -0.9f);
    glVertex2f(0.7f, -0.1f);
    glEnd();
    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100,100);
    glutCreateWindow("My hut");

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
