#include <GLUT/glut.h>
#include <OpenGL/gl.h>

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glOrtho(-4, 4, -4, 4, -4, 4);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINE_STRIP);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0, 3);
    glVertex2f(0, -3);

    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(3, 0);
    glVertex2f(-3, 0);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Simple Line Strip");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}