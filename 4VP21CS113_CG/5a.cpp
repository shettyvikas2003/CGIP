#include<GL/glut.h>
float angle =0.0f;
float scale=1.0f;
float x_translation=0.0f;
float y_translation=0.0f;
float z_translation=-5.0f;

float vertices[8][3]={
	{-0.5,-0.5,-0.5},
	{0.5,-0.5,-0.5},
	{0.5,0.5,-0.5},
	{-0.5,0.5,-0.5},
	
	{-0.5,-0.5,0.5},
	{0.5,-0.5,0.5},
	{0.5,0.5,0.5},
	{-0.5,0.5,0.5},
};
void drawcube(){
	glBegin(GL_QUADS);
			glColor3f(1.0f,0.0f,0.0f);
			glVertex3fv(vertices[0]);
			glColor3f(0.0f,1.0f,0.0f);
			glVertex3fv(vertices[1]);
			glColor3f(0.0f,1.0f,1.0f);
			glVertex3fv(vertices[2]);
			glColor3f(1.0f,1.0f,0.0f);
			glVertex3fv(vertices[3]);
			
			glColor3f(1.0f,0.0f,1.0f);
			glVertex3fv(vertices[4]);
			glColor3f(1.0f,1.0f,0.5f);
			glVertex3fv(vertices[5]);
			glColor3f(1.0f,0.5f,0.5f);
			glVertex3fv(vertices[6]);
			glColor3f(0.5f,0.5f,0.5f);
			glVertex3fv(vertices[7]);
			
			glColor3f(1.0f,1.0f,0.0f);
			glVertex3fv(vertices[3]);
			glColor3f(0.0f,1.0f,1.0f);
			glVertex3fv(vertices[2]);
			glColor3f(1.0f,0.5f,0.5f);
			glVertex3fv(vertices[6]);
			glColor3f(0.5f,0.5f,0.5f);
			glVertex3fv(vertices[7]);
			
			glColor3f(1.0f,0.0f,0.0f);
			glVertex3fv(vertices[0]);
			glColor3f(0.0f,1.0f,0.0f);
			glVertex3fv(vertices[1]);
			glColor3f(1.0f,1.0f,0.5f);
			glVertex3fv(vertices[5]);
			glColor3f(1.0f,0.0f,1.0f);
			glVertex3fv(vertices[4]);
			
			glColor3f(0.0f,1.0f,0.0f);
			glVertex3fv(vertices[1]);
			glColor3f(1.0f,1.0f,0.5f);
			glVertex3fv(vertices[5]);
			glColor3f(1.0f,0.5f,0.5f);
			glVertex3fv(vertices[6]);
			glColor3f(0.0f,1.0f,1.0f);
			glVertex3fv(vertices[2]);
			
			glColor3f(1.0f,0.0f,0.0f);
			glVertex3fv(vertices[0]);
			glColor3f(1.0f,0.0f,1.0f);
			glVertex3fv(vertices[4]);
			glColor3f(0.5f,0.5f,0.5f);
			glVertex3fv(vertices[7]);
			glColor3f(1.0f,1.0f,0.0f);
			glVertex3fv(vertices[3]);
		glEnd();
}
		
void init(){
	glClearColor(1.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(45.0f,1.0f,1.0f,100.0f);
}
void display(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	glTranslatef(x_translation,y_translation,z_translation);
	glRotatef(angle,1.0f,1.0f,0.0f);
	glScalef(scale,scale,scale);
	
	drawcube();
	glutSwapBuffers();
	
}
void reshape(int w,int h){
	glViewport(0,0,w,h);
}

void keyboard(unsigned char key, int x,int y){
	switch(key){
		case 'r': angle+=5.0f;
				break;
		case 'R': angle-=5.0f;
				break;
		case 's': scale+=0.1f;
				break;
		case 'S': scale-=0.1f;
				break;
		case 'x': x_translation+=0.1f;
				break;
		case 'X': x_translation-=0.1f;
				break;
		case 'y': y_translation+=0.1f;
				break;
		case 'Y': y_translation-=0.1f;
				break;
		case 'z': z_translation+=0.1f;
				break;
		case 'Z': z_translation-=0.1f;
				break;
		case 27:exit(0);
			break;
		}
		
		glutPostRedisplay();
}

int main(int argc,char **argv){
		glutInit(&argc,argv);
		glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
		glutInitWindowSize(800,600);
		glutCreateWindow("3D Transformation Demo");
		glEnable(GL_DEPTH_TEST);
		glutDisplayFunc(display);
		glutReshapeFunc(reshape);
		glutKeyboardFunc(keyboard);
		init();
		glutMainLoop();
		return 0;
	}
		

