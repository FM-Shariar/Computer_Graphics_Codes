#include <iostream>
#include <GL/glut.h>
#include <math.h>
using namespace std;

float _angle1 = 0.0f;

void drawScene()
{
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);

    glOrtho(-5,5,-5,5,-5,5);
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

    glBegin(GL_QUADS);
    glColor3d(0.25,0.25,0.25);
    glVertex2f(-0.2f, -4.0);
    glVertex2f(-0.2f, 0.0f);
    glVertex2f(0.2f, 0.0f);
    glVertex2f(0.2f, -4.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3d(0.25,0.25,0.25);
    glVertex2f(-0.4f, -4.3);
    glVertex2f(-0.4f, -4.0f);
    glVertex2f(0.4f, -4.0f);
    glVertex2f(0.4f, -4.3f);
    glEnd();

    //Blade1
    glPushMatrix();
    glTranslatef(0.0,0.1,0.0);
    glRotatef(_angle1, 0.01f, 0.07f,1.0f);
    glBegin(GL_POLYGON);
    glColor3d(1.0,0.5,0.0);
    glVertex2f(-2.0f, 0.0f);
    glVertex2f(-0.3f, 0.3f);
    glVertex2f(0.3f, 0.3f);
    glVertex2f(2.0f, 0.0f);
    glVertex2f(0.3f, -0.3f);
    glVertex2f(-0.3f, -0.3f);
    glVertex2f(-2.0f, 0.0f);
    glEnd();
    glPopMatrix();

    //Blade2
    glPushMatrix();
    glTranslatef(0.0,0.1,0.0);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glBegin(GL_POLYGON);
    glColor3d(1.0,0.5,0.0);
    glVertex2f(0.0f, -2.0f);
    glVertex2f(-0.3f, -0.3f);
    glVertex2f(-0.3f, 0.3f);
    glVertex2f(0.0f, 2.0f);
    glVertex2f(0.3f, 0.3f);
    glVertex2f(0.3f, -0.3f);
    glVertex2f(0.0f, -2.0f);
    glEnd();
    glPopMatrix();

    glutSwapBuffers();
}
void update(int value)
{
    _angle1+=2.0f;
    glutPostRedisplay(); //Notify GLUT that the display has change
    glutTimerFunc(20, update, 0);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 500);
    glutCreateWindow("Transformation");
    glutDisplayFunc(drawScene);
    glutTimerFunc(20, update, 0); //Add a timer
    glutMainLoop();
    return 0;
}


