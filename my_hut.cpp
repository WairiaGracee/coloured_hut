#include <GL/glut.h>


void display() {
    glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(0.5);

    
    glBegin(GL_TRIANGLES);
	//Vertex 1: blue
    glColor3f(0.0,0.0, 1.0);  
    glVertex2f(0.0, 0.7);
	//Vertex 2: red
	glColor3f(1.0,0.0, 0.0);
    glVertex2f(-0.6, -0.3);
    //Vertex 3:green
	glColor3f(0.0,1.0, 0.0);
	glVertex2f(0.6, -0.3);
    
	glEnd();
	 
	// Draw a square using glPolygon
    glBegin(GL_POLYGON);

    // Specify vertices of the square + color of each vertex
	//vertex A==blue
	glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-0.4, -0.9);
	//vertex B==red
	glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.4, -0.3);
	//vertex C==blue
	glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.4, -0.3);
	//vertex D==green
	glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.4, -0.9);

    glEnd();
	//draw outline
	glBegin(GL_LINES);

	glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.45, -0.95);
    glVertex2f(-0.45, -0.3);

	glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.45, -0.3);
    glVertex2f(0.45, -0.95);

	glColor3f(0.0, 1.0, 0.0);
    glVertex2f(-0.45,-0.95);
    glVertex2f(0.45, -0.95);

    glEnd();



    glFlush();
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("My Hut");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glClearColor(0.0, 0.0, 0.0, 0.0); 

    glutMainLoop();
    return 0;
}
