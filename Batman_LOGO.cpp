#include <windows.h>
#include <GL/glut.h>

void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glOrtho(-17,17,-17,17,-17,17);

//Background
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-3.5f, -7.5f);    // x, y
glVertex2f(-8.5f, -3.5f);    // x, y
glVertex2f(-8.5f, 3.5f);    // x, y
glVertex2f(-3.5f, 7.5f);    // x, y
glVertex2f(3.5f, 7.5f);    // x, y
glVertex2f(8.5f, 3.5f);    // x, y
glVertex2f(8.5f, -3.5f);    // x, y
glVertex2f(3.5f, -7.5f);    // x, y
glEnd();

//Background
glBegin(GL_POLYGON);
glColor3f(1.0f, 0.95f, 0.0f);
glVertex2f(-3.0f, -7.0f);    // x, y
glVertex2f(-8.0f, -3.0f);    // x, y
glVertex2f(-8.0f, 3.0f);    // x, y
glVertex2f(-3.0f, 7.0f);    // x, y
glVertex2f(3.0f, 7.0f);    // x, y
glVertex2f(8.0f, 3.0f);    // x, y
glVertex2f(8.0f, -3.0f);    // x, y
glVertex2f(3.0f, -7.0f);    // x, y
glEnd();

//Center-Quads
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-7.0f, -2.0f);
glVertex2f(-7.0f, 2.0f);
glVertex2f(7.0f, 2.0f);
glVertex2f(7.0f, -2.0f);
glEnd();

//Left-UP
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-4.0f, 2.0f);
glVertex2f(-7.0f, 2.0f);
glVertex2f(-7.0f, 3.0f);
glVertex2f(-6.0f, 3.0f);
glVertex2f(-6.0f, 4.0f);
glVertex2f(-5.0f, 4.0f);
glVertex2f(-5.0f, 5.0f);
glVertex2f(-4.0f, 5.0f);
glEnd();

//Left-Down
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-4.0f, -2.0f);
glVertex2f(-7.0f, -2.0f);
glVertex2f(-7.0f, -3.0f);
glVertex2f(-6.0f, -3.0f);
glVertex2f(-6.0f, -4.0f);
glVertex2f(-5.0f, -4.0f);
glVertex2f(-5.0f, -5.0f);
glVertex2f(-4.0f, -5.0f);
glEnd();

//Right-Up
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(4.0f, 2.0f);
glVertex2f(7.0f, 2.0f);
glVertex2f(7.0f, 3.0f);
glVertex2f(6.0f, 3.0f);
glVertex2f(6.0f, 4.0f);
glVertex2f(5.0f, 4.0f);
glVertex2f(5.0f, 5.0f);
glVertex2f(4.0f, 5.0f);
glEnd();

//Right-Down
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(4.0f, -2.0f);
glVertex2f(7.0f, -2.0f);
glVertex2f(7.0f, -3.0f);
glVertex2f(6.0f, -3.0f);
glVertex2f(6.0f, -4.0f);
glVertex2f(5.0f, -4.0f);
glVertex2f(5.0f, -5.0f);
glVertex2f(4.0f, -5.0f);
glEnd();

//Left-UP-Small Quads
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-3.0f, 4.30f);
glVertex2f(-4.10f, 4.30f);
glVertex2f(-4.10f, 5.50f);
glVertex2f(-3.0f, 5.50f);
glEnd();

//Left-Down-Small Quads
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-3.0f, -4.30f);
glVertex2f(-4.10f, -4.30f);
glVertex2f(-4.10f, -5.50f);
glVertex2f(-3.0f, -5.50f);
glEnd();

//Right-UP-Small Quads
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(3.0f, 4.30f);
glVertex2f(4.10f, 4.30f);
glVertex2f(4.10f, 5.50f);
glVertex2f(3.0f, 5.50f);
glEnd();
//Right-Down-Small Quads
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(3.0f, -4.30f);
glVertex2f(4.10f, -4.30f);
glVertex2f(4.10f, -5.50f);
glVertex2f(3.0f, -5.50f);
glEnd();

//Head
glBegin(GL_POLYGON);
glVertex2f(-1.0f, 2.0f);
glVertex2f(-1.0f, 5.0f);
glVertex2f(-0.4f, 4.0f);
glVertex2f(0.6f, 4.0f);
glVertex2f(1.0f, 5.0f);
glVertex2f(1.0f, 2.0f);
glEnd();

//Left-Up-Twin-Quads
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-3.0f, 2.0f);
glVertex2f(-4.0f, 2.0f);
glVertex2f(-4.0f, 3.0f);
glVertex2f(-3.0f, 3.0f);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-1.0f, 2.0f);
glVertex2f(-2.0f, 2.0f);
glVertex2f(-2.0f, 3.0f);
glVertex2f(-1.0f, 3.0f);
glEnd();

//Left-Down-Twin-Quads
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-3.0f, -2.0f);
glVertex2f(-4.0f, -2.0f);
glVertex2f(-4.0f, -3.0f);
glVertex2f(-3.0f, -3.0f);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-1.0f, -2.0f);
glVertex2f(-2.0f, -2.0f);
glVertex2f(-2.0f, -3.0f);
glVertex2f(-1.0f, -3.0f);
glEnd();

//Right-Up-Twin-Quads
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(3.0f, 2.0f);
glVertex2f(4.0f, 2.0f);
glVertex2f(4.0f, 3.0f);
glVertex2f(3.0f, 3.0f);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(1.0f, 2.0f);
glVertex2f(2.0f, 2.0f);
glVertex2f(2.0f, 3.0f);
glVertex2f(1.0f, 3.0f);
glEnd();

//Right-Down-Twin-Quads
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(3.0f, -2.0f);
glVertex2f(4.0f, -2.0f);
glVertex2f(4.0f, -3.0f);
glVertex2f(3.0f, -3.0f);
glEnd();
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(1.0f, -2.0f);
glVertex2f(2.0f, -2.0f);
glVertex2f(2.0f, -3.0f);
glVertex2f(1.0f, -3.0f);
glEnd();

//Bottom-Right-Quads
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.5f, -3.0f);
glVertex2f(1.5f, -3.0f);
glVertex2f(1.5f, -4.0f);
glVertex2f(0.5f, -4.0f);
glEnd();
//Bottom-Left-Quads
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-0.5f, -3.0f);
glVertex2f(-1.5f, -3.0f);
glVertex2f(-1.5f, -4.0f);
glVertex2f(-0.5f, -4.0f);
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
