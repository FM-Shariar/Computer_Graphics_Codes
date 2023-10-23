#include<iostream>
#include <windows.h>
#include <math.h>
#include <GL/glut.h>
int day = 1;        //1 for day ,0 for night

void circle3(float radius, float cX, float cY)
{
   glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
        {
            glColor3f(0.988f,0.856f,0.024f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }
}

void circle2(float radius, float cX, float cY)
{
   glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
        {
            glColor3f(1.0f,1.0f,1.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }
}
void circle(float radius, float cX, float cY)
{
   glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
        {
            glColor3f(0.5f,0.5f,0.5f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }
}
///tree
void tree()
{
///tree1
    glBegin(GL_QUADS);
    glColor3f(0.6156863,0,0);
    glVertex3f(50, 350, 0);
    glVertex3f(70, 350, 0);
    glVertex3f(70, 500, 0);
    glVertex3f(50, 500, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(10, 500, 0);
    glVertex3f(110, 500, 0);
    glVertex3f(60, 600, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(15, 550, 0);
    glVertex3f(105, 550, 0);
    glVertex3f(60, 650, 0);
    glEnd();

///tree2
    glBegin(GL_QUADS);
    glColor3f(0.6156863,0,0);
    glVertex3f(50+100, 350, 0);
    glVertex3f(70+100, 350, 0);
    glVertex3f(70+100, 500, 0);
    glVertex3f(50+100, 500, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(10+100, 500, 0);
    glVertex3f(110+100, 500, 0);
    glVertex3f(60+100, 600, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(15+100, 550, 0);
    glVertex3f(105+100, 550, 0);
    glVertex3f(60+100, 650, 0);
    glEnd();

///tree3
    glBegin(GL_QUADS);
    glColor3f(0.6156863,0,0);
    glVertex3f(50+1000, 350+100, 0);
    glVertex3f(70+1000, 350+100, 0);
    glVertex3f(70+1000, 500+100, 0);
    glVertex3f(50+1000, 500+100, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(10+1000, 500+100, 0);
    glVertex3f(110+1000, 500+100, 0);
    glVertex3f(60+1000, 600+100, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(15+1000, 550+100, 0);
    glVertex3f(105+1000, 550+100, 0);
    glVertex3f(60+1000, 650+100, 0);
    glEnd();

///tree4
    glBegin(GL_QUADS);
    glColor3f(0.6156863,0,0);
    glVertex3f(50+1100, 350+200, 0);
    glVertex3f(70+1100, 350+200, 0);
    glVertex3f(70+1100, 500+200, 0);
    glVertex3f(50+1100, 500+200, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(10+1100, 500+200, 0);
    glVertex3f(110+1100, 500+200, 0);
    glVertex3f(60+1100, 600+200, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(15+1100, 550+200, 0);
    glVertex3f(105+1100, 550+200, 0);
    glVertex3f(60+1100, 650+200, 0);
    glEnd();

///tree5
    glBegin(GL_QUADS);
    glColor3f(0.6156863,0,0);
    glVertex3f(50+900, 350+200, 0);
    glVertex3f(70+900, 350+200, 0);
    glVertex3f(70+900, 500+200, 0);
    glVertex3f(50+900, 500+200, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(10+900, 500+200, 0);
    glVertex3f(110+900, 500+200, 0);
    glVertex3f(60+900, 600+200, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex3f(15+900, 550+200, 0);
    glVertex3f(105+900, 550+200, 0);
    glVertex3f(60+900, 650+200, 0);
    glEnd();
}
///river
void river()
{
    glBegin(GL_QUADS);
    glColor3f(0.0352941176470588, 0.5098039215686275, 0.9568627450980392);
    glVertex3f(0, 0, 0);
    glVertex3f(1200, 0, 0);
    glVertex3f(1200, 300, 0);
    glVertex3f(0, 300, 0);
    glEnd();
}

//land
void land()
{
    glBegin(GL_POLYGON);
    glColor3f(0.5,1.0,0.5);
    glVertex3f(0, 300, 0);
    glVertex3f(1200, 300, 0);
    glVertex3f(1200, 600, 0);
    glVertex3f(0, 600, 0);
    glEnd();
}

///hill
void hill()
{
    glBegin(GL_POLYGON);
    glColor3f(0.50196, 0.25098, 0.0);
    glVertex3f(600, 600, 0);
    glVertex3f(800, 900, 0);
    glVertex3f(900, 650, 0);

    glVertex3f(900, 650, 0);
    glVertex3f(1000, 800, 0);
    glVertex3f(1100, 620, 0);

    glColor3f(0.50196, 0.25098, 0.0);
    glVertex3f(1050, 620, 0);
    glVertex3f(1200, 800, 0);
    glVertex3f(1200, 600, 0);
    glEnd();
}

///house
void house()
{
///house1
    glBegin(GL_QUADS);
    glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);
    glVertex3f(220, 350, 0);
    glVertex3f(380, 350, 0);
    glVertex3f(380, 450, 0);
    glVertex3f(220, 450, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0, 0, 1);
    glVertex3f(200, 450, 0);
    glVertex3f(400, 450, 0);
    glVertex3f(300, 650, 0);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_QUADS);
    glVertex3f(280, 350, 0);
    glVertex3f(320, 350, 0);
    glVertex3f(320, 425, 0);
    glVertex3f(280, 425, 0);
    glEnd();

///house2
    glBegin(GL_QUADS);
    glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);
    glVertex3f(220+200, 350+50, 0);
    glVertex3f(380+200, 350+50, 0);
    glVertex3f(380+200, 450+50, 0);
    glVertex3f(220+200, 450+50, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.444, 0.5, 0);
    glVertex3f(200+200, 450+50, 0);
    glVertex3f(400+200, 450+50, 0);
    glVertex3f(300+200, 650+50, 0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,0);
    glVertex3f(280+200, 350+50, 0);
    glVertex3f(320+200, 350+50, 0);
    glVertex3f(320+200, 425+50, 0);
    glVertex3f(280+200, 425+50, 0);
    glEnd();
}

///boat
void boat()
{
///boat1
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(10,150,0);
    glVertex3f(150+50,150,0);
    glVertex3f(120+50,100,0);
    glVertex3f(30,100,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.50196, 0.25098, 0.0);
    glVertex3f(50,150,0);
    glVertex3f(150,150,0);
    glVertex3f(150,220,0);
    glVertex3f(50,220,0);
    glEnd();

///boat2
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(10+200,150+50,0);
    glVertex3f(150+50+200,150+50,0);
    glVertex3f(120+50+200,100+50,0);
    glVertex3f(30+200,100+50,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.50196, 0.25098, 0.0);
    glVertex3f(50+200,150+50,0);
    glVertex3f(150+200,150+50,0);
    glVertex3f(150+200,220+50,0);
    glVertex3f(50+200,220+50,0);
    glEnd();
}
///night
void night_effect()
{
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(0, 300, 0);
    glVertex3f(1200, 300, 0);
    glVertex3f(1200, 1200, 0);
    glVertex3f(0, 1200, 0);
    glEnd();
}
///star
void star()
{
///star1
    glColor3f(1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex3f(30, 1020, 0);
    glVertex3f(50, 1050, 0);
    glVertex3f(50, 1100, 0);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex3f(70, 1020, 0);
    glVertex3f(50, 1100, 0);
    glVertex3f(50, 1050, 0);
    glEnd();
    glColor3f(1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex3f(50, 1050, 0);
    glVertex3f(80, 1070, 0);
    glVertex3f(20, 1070, 0);
    glEnd();

//star2
    glBegin(GL_TRIANGLES);
    glColor3f(1, 1, 1);
    glVertex3f(30+60+60, 1020+60, 0);
    glVertex3f(50+60+60, 1050+60, 0);
    glVertex3f(50+60+60, 1100+60, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1, 1, 1);
    glVertex3f(70+60+60, 1020+60, 0);
    glVertex3f(50+60+60, 1100+60, 0);
    glVertex3f(50+60+60, 1050+60, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1, 1, 1);
    glVertex3f(50+60+60, 1050+60, 0);
    glVertex3f(80+60+60, 1070+60, 0);
    glVertex3f(20+60+60, 1070+60, 0);
    glEnd();

//star3
    glBegin(GL_TRIANGLES);
    glColor3f(1, 1, 1);
    glVertex3f(30+120+120, 1020, 0);
    glVertex3f(50+120+120, 1050, 0);
    glVertex3f(50+120+120, 1100, 0);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex3f(70+120+120, 1020, 0);
    glVertex3f(50+120+120, 1100, 0);
    glVertex3f(50+120+120, 1050, 0);
    glEnd();
    glColor3f(1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex3f(50+120+120, 1050, 0);
    glVertex3f(80+120+120, 1070, 0);
    glVertex3f(20+120+120, 1070, 0);
    glEnd();
//star4
    glColor3f(1, 1, 1);
    glBegin(GL_TRIANGLES);

    glVertex3f(30+120+120+120, 1020+60, 0);
    glVertex3f(50+120+120+120, 1050+60, 0);
    glVertex3f(50+120+120+120, 1100+60, 0);

    glEnd();
    glColor3f(1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex3f(70+120+120+120, 1020+60, 0);
    glVertex3f(50+120+120+120, 1100+60, 0);
    glVertex3f(50+120+120+120, 1050+60, 0);
    glEnd();
    glColor3f(1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex3f(50+120+120+120, 1050+60, 0);
    glVertex3f(80+120+120+120, 1070+60, 0);
    glVertex3f(20+120+120+120, 1070+60, 0);
    glEnd();

}
//sun
void Sun()
{
    circle3(50,1000,1000);
    glEnd();
}
//moon
void Moon()
{
    circle3(50,700,1000);
    glEnd();
}

///cloud
void Cloud1()
{
//cloud1
    circle(25,640,1000);
    glEnd();
    circle(25,670,995);
    glEnd();
    circle(25,670,1030);
    glEnd();
    circle(25,700,1000);
    glEnd();
//cloud2
    circle(25,640+270,1000-50);
    glEnd();
    circle(25,670+270,995-50);
    glEnd();
    circle(25,670+270,1030-50);
    glEnd();
    circle(25,700+270,1000-50);
    glEnd();
}
void Cloud2()
{
//cloud1
    circle2(25,640,1000);
    glEnd();
    circle2(25,670,995);
    glEnd();
    circle2(25,670,1030);
    glEnd();
    circle2(25,700,1000);
    glEnd();
//cloud2
    circle2(25,640+270,1000-50);
    glEnd();
    circle2(25,670+270,995-50);
    glEnd();
    circle2(25,670+270,1030-50);
    glEnd();
    circle2(25,700+270,1000-50);
    glEnd();
}

void draw_object()
{
    if(day==1)
    {
        land();
        hill();
        tree();
        river();
        house();
        Sun();
        boat();
        Sun();
        Cloud2();
    }
    else
    {
        night_effect();
        land();
        star();
        hill();
        tree();
        river();
        house();
        boat();
        Moon();
        Cloud1();
    }
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    draw_object();
    glFlush();
}
void keyboardFunc(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'n':
        day=0;
        display();
        break;
    case 'd':
        day=1;
        display();
        break;
    case 'N':
        day=0;
        display();
        break;
    case 'D':
        day=1;
        display();
        break;
    }

}
void Init()
{
    glClearColor(0.6196078431372549,0.9333333333333333, 0.996078431372549, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1200.0, 0, 1200.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Village Scenario");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboardFunc);
    Init();
    glutMainLoop();
    return 0;
}
