#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color
glOrtho(-5,5,-5,5,-5,5);

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
glColor3f(0.0f, 0.0f, 0.0f); // Black
glVertex2f(-4.5f, 0.0f);    // x, y
glVertex2f(4.5f, 0.0f);    // x, y
glEnd();

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
glColor3f(0.0f, 0.0f, 0.0f); // Black
glVertex2f(0.0f, 4.5f);    // x, y
glVertex2f(0.0f, -4.5f);    // x, y
glEnd();

glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
glColor3f(1.0f, 0.0f, 0.0f); // Red
glVertex2f(-1.0f, 1.0f);
glVertex2f(-1.0f, 2.0f);    // x, y
glVertex2f(-2.5f, 2.0f);
glVertex2f(-2.5f, 1.0f);    // x, y
glEnd();

glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
glColor3f(1.0f,0.98f,0.0f); // Yellow
glVertex2f(1.2f, -2.0f);
glVertex2f(1.9f, -0.7f);    // x, y
glVertex2f(2.6f, -2.0f);
glEnd();

glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
glColor3f(0.0f, 1.0f, 0.0f); // Green
glVertex2f(1.0f, 1.25f);
glVertex2f(1.0f, 1.75f);    // x, y
glVertex2f(2.10f, 1.75f);
glVertex2f(2.10f, 1.25f);    // x, y
glEnd();

glBegin(GL_TRIANGLES);      // Each set of 4 vertices form a quad
glColor3f(0.0f,1.0f,0.0f); // Green
glVertex2f(2.10f, 2.0f);
glVertex2f(2.75f, 1.5f);    // x, y
glVertex2f(2.10f, 1.0f);
glEnd();

glBegin(GL_TRIANGLES);      // Each set of 4 vertices form a quad
glColor3f(0.75f,0.0f,1.0f); // Violate
glVertex2f(-1.2f, -0.7f);
glVertex2f(-2.3f, -1.4f);    // x, y
glVertex2f(-1.2f, -2.0f);
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
