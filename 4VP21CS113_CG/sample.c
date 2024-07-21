#include<GL/glut.h>
void display(){
glClearColor(0.0f,1.0f,1.0f,1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,50.0,0.0,50.0);
glColor3f(1.0f,0.0f,0.0f);
glPointSize(5.0);
glBegin(GL_QUAD_STRIP);
glVertex2f(10.0f,10.0f);
glVertex2f(30.0f,10.0f);
glVertex2f(10.0f,30.0f);
glVertex2f(30.0f,30.0f);
glEnd();
glBegin(GL_QUAD_STRIP);
glVertex2f(30.0f,10.0f);
glVertex2f(45.0f,15.0f);
glVertex2f(30.0f,30.0f);
glVertex2f(45.0f,35.0f);
glEnd();
glFlush();
}
int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutCreateWindow("OpenGL Setup Test");
glutInitWindowSize(500,500);
glutInitWindowPosition(50,50);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
