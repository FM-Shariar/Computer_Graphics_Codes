#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f); //Set Color to White
glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

glBegin(GL_LINES);              // Each set of 4 vertices form a quad
glColor3f(0.0f, 0.0f, 0.0f); // Black
glVertex2f(-0.5f, -0.3f);    // x, y
glVertex2f(0.5f, -0.3f);    // x, y
glEnd();

glBegin(GL_LINES);            // Each set of 4 vertices form a quad
glColor3f(0.0f, 0.0f, 0.0f); // Black
glVertex2f(-0.5f, 0.3f);    // x, y
glVertex2f(0.5f, 0.3f);    // x, y
glEnd();

glBegin(GL_LINES);             // Each set of 4 vertices form a quad
glColor3f(0.0f, 0.0f, 0.0f); // Black
glVertex2f(-0.5f, -0.3f);    // x, y
glVertex2f(-0.5f, 0.3f);    // x, y
glEnd();

glBegin(GL_LINES);            // Each set of 4 vertices form a quad
glColor3f(0.0f, 0.0f, 0.0f); // Black
glVertex2f(0.5f, 0.3f);    // x, y
glVertex2f(0.5f, -0.3f);    // x, y
glEnd();

glFlush();                  // Render now
}

int main(int argc, char** argv) {

glutInit(&argc, argv);                 // Initialize GLUT
glutCreateWindow("OpenGL Setup"); // Create a window with the given title
glutInitWindowSize(720, 480);   // Set the window's initial width & height
glutDisplayFunc(display); // Register display callback handler for window re-paint
glutMainLoop();           // Enter the event-processing loop

return 0;
}
