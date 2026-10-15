#include <windows.h>
#include <GL/glut.h>

void drawChair() {

    int rows = 6;
    int cols = 6;

    float stepx = 2.8;
    float stepy = 2.3;

    for (int row = 0; row < rows; row++) {

        // الصفوف الأمامية أكبر ثم تصغر للخلف
        float size = 3.0 - row * 0.3;

        // يبدأ من تحت ويتجه للأعلى
        float y = -18 + row * stepy;

        // اليسار 
        for (int col = 0; col < cols; col++) {

            float x = -18 + col * stepx;

            // ظهر الكرسي
            glColor3ub(220, 30, 30);

            glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + size, y);
            glVertex2f(x + size, y + size);
            glVertex2f(x, y + size);
            glEnd();

            // داخل أسود
            glColor3ub(25, 25, 25);

            glBegin(GL_QUADS);
            glVertex2f(x + 0.25, y + 0.25);
            glVertex2f(x + size - 0.25, y + 0.25);
            glVertex2f(x + size - 0.25, y + size - 0.25);
            glVertex2f(x + 0.25, y + size - 0.25);
            glEnd();


            //  اليمين 
            for (int col = 0; col < cols; col++) {

                //  الممر  اللي بالنص
                float x = 3 + col * stepx;

                glColor3ub(220, 30, 30);

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

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    drawChair();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("University theater");
    gluOrtho2D(-20, 20, -20, 20);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


    
    