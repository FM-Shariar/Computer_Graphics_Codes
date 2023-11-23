#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;
float _move = 0.0f;
float _angle1=0.0f;

void drawScene()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    glOrtho(-5,5,-5,5,-5,5);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move-4, 0.0f, 1.0f);
//car Body
    glBegin(GL_POLYGON);
    glColor3f(0.90,0.3,0.0);
    glVertex2f(-3.0f, 0.0f);
    glVertex2f(-3.0f, 0.8f);
    glVertex2f(-0.7f, 0.8f);
    glVertex2f(-0.5f, 0.55f);
    glVertex2f(-0.5f, 0.0f);
    glEnd();
//car UP
    glBegin(GL_QUADS);
    glColor3f(0.6,0.6,0.6);
    glVertex2f(-3.0f, 0.8f);
    glVertex2f(-2.7f, 1.3f);
    glVertex2f(-1.7f, 1.3f);
    glVertex2f(-1.35f, 0.8f);
    glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0; i<200; i++)
    {
        glColor3f(0.2,0.2,0.2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.28;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-2.5,y );
    }
    glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0; i<200; i++)
    {
        glColor3f(0.2,0.2,0.2);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.28;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-1.0,y );
    }
    glEnd();
    glPopMatrix();
    glutSwapBuffers();
}

void update(int value) {
_move += 0.04;
if(_move > 12)
{
_move = -1.0;
}
glutPostRedisplay();
glutTimerFunc(20, update, 0);
}

void update1(int value)
{
    _angle1+=0.0f;
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }
    glutPostRedisplay();
    glutTimerFunc(20, update1, 0);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Transformation");
    glutDisplayFunc(drawScene);
    gluOrtho2D(-2,2,-2,2);
    glutTimerFunc(20, update, 0); //Add a timer
    glutTimerFunc(20, update1, 0); //Add a timer
    glutMainLoop();

    return 0;
}


