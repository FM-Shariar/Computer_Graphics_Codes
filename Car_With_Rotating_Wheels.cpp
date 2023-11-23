#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;
float _angle1=0.0f;

void wheel()
{
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-0.5, 0.0f, 0.0f);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glLineWidth(2.5);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    for(int i=0; i<200; i++)
    {
        glColor3f(0.0,0.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.0603;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();

    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-0.2, 0.0f, 0.0f);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
    for(int i=0; i<200; i++)
    {
        glColor3f(0.0,0.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.0603;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();
}
void drawScene()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    glOrtho(-5,5,-5,5,-5,5);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
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
    wheel();
    glPopMatrix();
    glutSwapBuffers();
}

void update1(int value)
{
    _angle1+=2.0f;
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed
    glutTimerFunc(20, update1, 0); //Notify GLUT to call update again in 25 milliseconds
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Transformation");
    glutDisplayFunc(drawScene);
    gluOrtho2D(-2,2,-2,2);
    glutTimerFunc(20, update1, 0); //Add a timer
    glutMainLoop();
    return 0;
}


