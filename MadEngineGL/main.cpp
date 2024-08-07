#include <math.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

#include <ogldev_math_3d.h>

#include <stdio.h>

static void RenderSceneCB() {
	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();
}

int main(int argc, char** argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);

	int width = 1920;
	int height = 1080;
	glutInitWindowSize(width, height);

	int x = 200;
	int y = 100;
	glutInitWindowPosition(x, y);

	int win = glutCreateWindow("MadEngineGL");
	printf("window id: %d\n", win);

	GLclampf Red = 0.0f, Green = 0.0f, Blue = 0.0f, Alpha = 0.0f;
	glClearColor(Red, Green, Blue, Alpha);

	glutDisplayFunc(RenderSceneCB);

	glutMainLoop();

	return 0;
}
