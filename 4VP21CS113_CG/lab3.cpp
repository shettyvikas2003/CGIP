#include<GL/glut.h>
GLint l=10,m=10;
void keys(unsigned char key,int x,int y){
switch (key){
case 'p':
l=l+1;
break;
case 'q':
m=m+1;
break;
}
glutPostRedisplay();
}
void MouseFunc(int button,int state,int x,int y){
if(button==GLUT_LEFT_BUTTON&&state==GLUT_DOWN){
l=l-1;
}
else if(button==GLUT_RIGHT_BUTTON&&state==GLUT_UP){
m=m-1;
}glutPostRedisplay();
}
void display(){
glClearColor(0.0f,0.0f,0.0f,1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,50.0,0.0,50.0);
glColor3f(1.0f,0.0f,0.0f);
glPointSize(10.0);
glBegin(GL_POINTS);
glVertex2i(l,m);
glEnd();
glFlush();
}
int main(int argc,char **argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutCreateWindow("OpenGL setup test");
glutInitWindowSize(500,800);
glutInitWindowPosition(50,50);
glutKeyboardFunc(keys);
glutMouseFunc(MouseFunc);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
