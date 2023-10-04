#include <windows.h>
#include <GL/glut.h>

void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glOrtho(-8,8,-8,8,-8,8);

glBegin(GL_QUADS);
glColor3f(0.52f, 0.25f, 0.923f);
glVertex2f(-4.0f, 3.0f);
glVertex2f(-4.0f, 4.0f);
glVertex2f(4.0f, 4.0f);
glVertex2f(4.0f, 3.0f);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.039f, 0.073f, 0.741f);
glVertex2f(-4.0f, 2.0f);
glVertex2f(-4.0f, 3.0f);
glVertex2f(4.0f, 3.0f);
glVertex2f(4.0f, 2.0f);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.036f, 0.75f, 0.78f);
glVertex2f(-4.0f, 1.0f);
glVertex2f(-4.0f, 2.0f);
glVertex2f(4.0f, 2.0f);
glVertex2f(4.0f, 1.0f);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.01f, 0.332f, 0.1f);
glVertex2f(-4.0f, 0.0f);
glVertex2f(-4.0f, 1.0f);
glVertex2f(4.0f, 1.0f);
glVertex2f(4.0f, 0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.89f, 0.38f, 0.043f);
glVertex2f(-4.0f, -1.0f);
glVertex2f(-4.0f, 0.0f);
glVertex2f(4.0f, 0.0f);
glVertex2f(4.0f, -1.0f);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.875f, 1.0f, 0.043f);
glVertex2f(-4.0f, -2.0f);
glVertex2f(-4.0f, -1.0f);
glVertex2f(4.0f, -1.0f);
glVertex2f(4.0f, -2.0f);
glEnd();


glBegin(GL_QUADS);
glColor3f(1.0f, 0.0f, 0.0);
glVertex2f(-4.0f, -3.0f);
glVertex2f(-4.0f, -2.0f);
glVertex2f(4.0f, -2.0f);
glVertex2f(4.0f, -3.0f);
glEnd();

glFlush();
}

int main(int argc, char** argv) {

glutInit(&argc, argv);
glutInitWindowSize(520, 520);
glutCreateWindow("OpenGL Setup");
glutDisplayFunc(display);
glutMainLoop();
return 0;

}
