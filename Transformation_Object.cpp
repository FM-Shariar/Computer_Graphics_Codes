#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>

using namespace std;

float _move = 0.0f;
float _move2 = 0.0f;

void object1() {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);  // Change color to green
    glVertex2f(-2.0f, 2.0f);
    glVertex2f(-2.0f, 3.5f);
    glVertex2f(2.0f, 3.5f);
    glVertex2f(2.0f, 2.0);
    glEnd();
    glPopMatrix();
}

void update(int value) {
    _move += 0.1f;  // Increase movement speed
    if (_move > 4.9) {
        _move = -4.9;
    }
    glutPostRedisplay();
    glutTimerFunc(20, update, 0);
}

void object2() {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move2, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);  // Change color to blue
    glVertex2f(-2.0f, 0.0f);  // Change vertex coordinates
    glVertex2f(-2.0f, -1.5f);
    glVertex2f(2.0f, -1.5f);
    glVertex2f(2.0f, 0.0);
    glEnd();
    glPopMatrix();
}

void update2(int value) {
    _move2 -= 0.1f;  // Increase movement speed
    if (_move2 < -4.9) {
        _move2 = 4.9;
    }
    glutPostRedisplay();
    glutTimerFunc(20, update2, 0);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1, 1, 1);  // Set drawing color to white
    glLoadIdentity();
    glOrtho(-5, 5, -5, 5, -5, 5);
    object1();
    object2();
    glutSwapBuffers();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Transformation");
    glutDisplayFunc(display);
    glutTimerFunc(20, update, 0);
    glutTimerFunc(20, update2, 0);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);  // Set clear color to white
    glutMainLoop();
    return 0;
}

