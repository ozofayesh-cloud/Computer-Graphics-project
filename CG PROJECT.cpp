#include <windows.h>
#include <GL/glut.h>
void screen() {
    glBegin(GL_QUADS);
    glVertex2i(0, 0); glVertex2i(3, 0);
    glVertex2i(3, 4); glVertex2i(0, 4);
    glEnd();
}

void wallAndScreen() {
    glColor3ub(230, 220, 200); //Upper part of the wall (beige color)
    glRectf(-20, 0, 20, 20);
    glColor3ub(200, 185, 155); //Darker beige color for upper wall partitions
    glBegin(GL_LINES);
    //Horizontal divisions
    glVertex2i(-20, 4); glVertex2i(20, 4);
    glVertex2i(-20, 8); glVertex2i(20, 8);
    glVertex2i(-20, 12); glVertex2i(20, 12);
    glVertex2i(-20, 16); glVertex2i(20, 16);
    //Vertical divisions
    glVertex2i(-20, 0); glVertex2i(-20, 20);
    glVertex2i(-15, 0); glVertex2i(-15, 20);
    glVertex2i(-10, 0); glVertex2i(-10, 20);
    glVertex2i(-5, 0); glVertex2i(-5, 20);
    glVertex2i(0, 0); glVertex2i(0, 20);
    glVertex2i(5, 0); glVertex2i(5, 20);
    glVertex2i(10, 0); glVertex2i(10, 20);
    glVertex2i(15, 0); glVertex2i(15, 20);
    glVertex2i(20, 0); glVertex2i(20, 20);
    glEnd();
    glColor3ub(128, 30, 30); //Lower part of the wall (maroon color)
    glRectf(-20, -15, 20, 5);
    glColor3ub(100, 20, 20); //Burgundy brown color for lower wall partitions
    glBegin(GL_LINES);
    glVertex2i(-16, -15); glVertex2i(-16, 5);
    glVertex2i(-12, -15); glVertex2i(-12, 5);
    glVertex2i(-8, -15); glVertex2i(-8, 5);
    glVertex2i(-4, -15); glVertex2i(-4, 5);
    glVertex2i(0, -15); glVertex2i(0, 5);
    glVertex2i(4, -15); glVertex2i(4, 5);
    glVertex2i(8, -15); glVertex2i(8, 5);
    glVertex2i(12, -15); glVertex2i(12, 5);
    glVertex2i(16, -15); glVertex2i(16, 5);
    glEnd();
    glColor3ub(70, 70, 70); //Screens at the upper part of the wall (gray color)
    glPushMatrix();
    glTranslatef(-17, 12, 0); screen(); glTranslatef(2, 0, 0); screen(); glTranslatef(2, 0, 0); screen(); //The screen is on the left side
    glPopMatrix();

    glPushMatrix();
    glTranslatef(10, 12, 0); screen(); glTranslatef(2, 0, 0); screen(); glTranslatef(2, 0, 0); screen(); //The screen is on the right side
    glPopMatrix();
}
void floor() {
    glColor3ub(128, 0, 32);

    glBegin(GL_QUADS);

    glVertex2i(-20, -20);
    glVertex2i(20, -20);

    glVertex2i(20, -4);
    glVertex2i(-20, -4);

    glEnd();
}
void stage() {
    glColor3ub(145,75,25);

    glBegin(GL_QUADS);
    glVertex2i(-10, -4);
    glVertex2i(10, -4);
    glVertex2i(10, 3);
    glVertex2i(-10, 3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(-10, 3);
    glVertex2i(-10, -4);
    glVertex2i(-12, -4);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2i(10, 3);
    glVertex2i(10, -4);
    glVertex2i(12, -4);
    glEnd();


}
void stairs() {
    glColor3ub(139, 69, 19);

    glBegin(GL_TRIANGLES);
    glVertex2i(10, 3);
    glVertex2i(17, -4);
    glVertex2i(11, -4);
    glEnd();
}
void paper() {
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glColor3ub(255, 255, 255);
    glRectf(-9, -3, 9, 2);

    glColor3ub(218, 165, 32);
    glRectf(-1.8, 0.4, -0.2, 1);
    glRectf(-1.2, -1.6, -0.8, 0.4);

    glRectf(0.2, -1, 0.6, 1);
    glRectf(1.4, -1, 1.8, 1);
    glRectf(0.2, -1.3, 1.8, -0.5);


    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glColor3ub(0, 0, 0);
    glRectf(-9, -3, 9, 2);
}

void platform() {

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glColor3ub(30, 30, 30);
    glRectf(-8, 3, -6, 10);

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glColor3ub(200, 200, 200);
    glRectf(-8, 3, -6, 10);

}

void speakers() {
    glColor3ub(0, 0, 0);
    glRectf(-9.4, 3, -8.4, 4);
}
void drawFlags() {
	glPushMatrix();
	glTranslatef(-2,8,0);
	glScalef(0.5,0.5,1);
    glColor3ub(160,110,60);
    glBegin(GL_QUADS); 
    glVertex2i(-6, -10); 
    glVertex2i(-5, -10); 
    glVertex2i(-5, 10); 
    glVertex2i(-6, 10); 
    glEnd(); 
 
    glColor3ub(0, 110, 0); 
    glBegin(GL_TRIANGLES); 
    glVertex2i(-5, 10); 
    glVertex2i(-5, 5); 
    glVertex2i(1, 8); 
    glEnd(); 
 
    glColor3ub(160,110,60);
    glBegin(GL_QUADS); 
    glVertex2i(-1, -10); 
    glVertex2i(0, -10); 
    glVertex2i(0, 10); 
    glVertex2i(-1, 10); 
    glEnd(); 
    
    glColor3ub(255, 255, 255); 
    glBegin(GL_TRIANGLES); 
    glVertex2i(0, 10); 
    glVertex2i(0, 5); 
    glVertex2i(6, 8); 
    glEnd();
    glPopMatrix();
}
void drawProjectorScreen() {
    glColor3f(1.0f, 1.0f, 1.0f); 
    glBegin(GL_QUADS);
        glVertex2i(1, 15);
        glVertex2i(7, 15);
        glVertex2i(7, 7);
        glVertex2i(1, 7);
    glEnd();


    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(2.0f);
    glBegin(GL_LINE_LOOP);
        glVertex2i(1, 15);
        glVertex2i(7, 15);
        glVertex2i(7, 7);
        glVertex2i(1, 7);
    glEnd();

   
    glBegin(GL_LINES);
        glVertex2i(4, 7);  glVertex2i(4, 5);
        glVertex2i(4, 5);  glVertex2i(2, 3);
        glVertex2i(4, 5);  glVertex2i(6, 3);
    glEnd(); 
}
float curtainOffset = 0;
bool curtainOpenning = false;
void curtain()
{
    glPushMatrix();
    glTranslatef(0, 14, 0);
    glScalef(0.4, 0.55, 1);

    glColor3ub(145,75,25);

    glBegin(GL_QUADS);

    glVertex2i(-20 + curtainOffset, -20);
    glVertex2i(20 + curtainOffset, -20);
    glVertex2i(20 + curtainOffset, 20);
    glVertex2i(-20 + curtainOffset, 20);

    glEnd();

    glColor3f(0.3, 0.1, 0.0);
    glLineWidth(5.0f);

    glBegin(GL_LINES);

    glVertex2i(-18 + curtainOffset, -20); glVertex2i(-18 + curtainOffset, 20);
    glVertex2i(-16 + curtainOffset, -20); glVertex2i(-16 + curtainOffset, 20);
    glVertex2i(-14 + curtainOffset, -20); glVertex2i(-14 + curtainOffset, 20);
    glVertex2i(-12 + curtainOffset, -20); glVertex2i(-12 + curtainOffset, 20);
    glVertex2i(-10 + curtainOffset, -20); glVertex2i(-10 + curtainOffset, 20);
    glVertex2i(-8 + curtainOffset, -20);  glVertex2i(-8 + curtainOffset, 20);
    glVertex2i(-6 + curtainOffset, -20);  glVertex2i(-6 + curtainOffset, 20);
    glVertex2i(-4 + curtainOffset, -20);  glVertex2i(-4 + curtainOffset, 20);
    glVertex2i(-2 + curtainOffset, -20);  glVertex2i(-2 + curtainOffset, 20);
    glVertex2i(0 + curtainOffset, -20);   glVertex2i(0 + curtainOffset, 20);
    glVertex2i(2 + curtainOffset, -20);   glVertex2i(2 + curtainOffset, 20);
    glVertex2i(4 + curtainOffset, -20);   glVertex2i(4 + curtainOffset, 20);
    glVertex2i(6 + curtainOffset, -20);   glVertex2i(6 + curtainOffset, 20);
    glVertex2i(8 + curtainOffset, -20);   glVertex2i(8 + curtainOffset, 20);
    glVertex2i(10 + curtainOffset, -20);  glVertex2i(10 + curtainOffset, 20);
    glVertex2i(12 + curtainOffset, -20);  glVertex2i(12 + curtainOffset, 20);
    glVertex2i(14 + curtainOffset, -20);  glVertex2i(14 + curtainOffset, 20);
    glVertex2i(16 + curtainOffset, -20);  glVertex2i(16 + curtainOffset, 20);
    glVertex2i(18 + curtainOffset, -20);  glVertex2i(18 + curtainOffset, 20);

    glEnd();
    glPopMatrix();
    glLineWidth(1.0f);
}
void drawChair() {

    int rows = 6;
    int cols = 6;

    float stepx = 2.8;
    float stepy = 2.3;

    for (int row = 0; row < rows; row++) {

        float size = 3.0 - row * 0.3;

        float y = -18 + row * stepy;
 
        for (int col = 0; col < cols; col++) {

            float x = -18 + col * stepx;

            glColor3ub(190, 30, 30);

            glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + size, y);
            glVertex2f(x + size, y + size);
            glVertex2f(x, y + size);
            glEnd();

            glColor3ub(25, 25, 25);

            glBegin(GL_QUADS);
            glVertex2f(x + 0.25, y + 0.25);
            glVertex2f(x + size - 0.25, y + 0.25);
            glVertex2f(x + size - 0.25, y + size - 0.25);
            glVertex2f(x + 0.25, y + size - 0.25);
            glEnd();


            for (int col = 0; col < cols; col++) {

                float x = 3 + col * stepx;

                glColor3ub(190, 30, 30);

                glBegin(GL_QUADS);
                glVertex2f(x, y);
                glVertex2f(x + size, y);
                glVertex2f(x + size, y + size);
                glVertex2f(x, y + size);
                glEnd();

                glColor3ub(25, 25, 25);

                glBegin(GL_QUADS);
                glVertex2f(x + 0.25, y + 0.25);
                glVertex2f(x + size - 0.25, y + 0.25);
                glVertex2f(x + size - 0.25, y + size - 0.25);
                glVertex2f(x + 0.25, y + size - 0.25);
                glEnd();
            }
        }
    }
}

void myMouse(int button, int state, int xMouse, int yMouse) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        curtainOpenning = !curtainOpenning;

    }
}


void update(int value) {

    if (curtainOpenning) {
        if (curtainOffset < 20) {
            curtainOffset += 0.1;
        }
        else {
            curtainOpenning = false;
        }
    }
    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    wallAndScreen();
    floor();
    stage();
    curtain();
    stairs();
    glPushMatrix();
    glScalef(-1.0, 1.0, 1.0);
    stairs();
    glPopMatrix();
    paper();
    platform();
    
    speakers();
    glPushMatrix();
    glScalef(-1.0, 1.0, 1.0);
    speakers();
    glPopMatrix();
    

    drawFlags();
    drawProjectorScreen();
    
    glPushMatrix();
	glScalef(1.1,1.1,1);
    drawChair();
    glPopMatrix();
    
    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("University theater");
    gluOrtho2D(-20, 20, -20, 20);
    glutDisplayFunc(display);
    glutMouseFunc(myMouse);
    glutTimerFunc(0, update, 0);
    glutMainLoop();
    return 0;
}
