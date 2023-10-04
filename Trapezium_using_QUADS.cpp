#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color
glOrtho(-5,5,-5,5,-5,5);

glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
glColor3f(1.0f, 0.0f, 0.0f); // Red
glVertex2f(1.0f, 1.0f);
glVertex2f(1.5f, 2.0f);    // x, y
glVertex2f(2.5f, 2.0f);
glVertex2f(3.0f, 1.0f);    // x, y
glEnd();


glFlush();
}

int main(int argc, char** argv) {

glutInit(&argc, argv);
glutInitWindowSize(520, 520);
glutCreateWindow("Test");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
