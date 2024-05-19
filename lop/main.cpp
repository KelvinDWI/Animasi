#include <GL/gl.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#define PI 3.1416


GLint i, j, k;
float bx = -500;
float ax = 500;
float cx = 500; // car x-coordinate
float px = -500;  // airplane x-coordinate
float cloudX = -500;
float CloudX = -500;
int animationSpeed = 20;  // adjust this value for slower or faster animation

void c1rcl3(GLdouble rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for( i = 0; i <=50; i++, theta += delTheta )
        {
            glVertex2d(rad * cos(theta),rad * sin(theta));
        }
    }
    glEnd();
}
void C1rcl3(GLdouble rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for( i = 0; i <=50; i++, theta += delTheta )
        {
            glVertex2d(rad * cos(theta),rad * sin(theta));
        }
    }
    glEnd();
}

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_POLYGON);
    glVertex2d(cx, cy);
    for (int i = 0; i <= 360; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2d((x + cx), (y + cy));
    }
    glEnd();
}
void c1rcle(GLfloat ox, GLfloat oy, GLfloat ux, GLfloat uy)
{
    glBegin(GL_POLYGON);
    glVertex2d(ux, uy);
    for (int i = 0; i <= 360; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = ox * cos(angle);
        float y = oy * sin(angle);
        glVertex2d((x + ux), (y + uy));
    }
    glEnd();
}
void circl3(GLfloat wx, GLfloat wy, GLfloat tx, GLfloat ty)
{
    glBegin(GL_POLYGON);
    glVertex2d(tx, ty);
    for (int i = 0; i <= 360; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = wx * cos(angle);
        float y = wy * sin(angle);
        glVertex2d((x + tx), (y + ty));
    }
    glEnd();
}
void langit(){
//langit
    glBegin(GL_QUADS);
    glColor3ub(200,0,0);
    glVertex2d(0,600);
    glVertex2d(1000,600);

    glColor3ub(255,255,0);
    glVertex2d(1000,100);
    glVertex2d(0,100);
glEnd();
}
void cloud_model_one(){

    glColor3f(1.25, 0.924, 0.930);

   // Top_Left
    glPushMatrix();
    glTranslatef(320 + cloudX, 410, 0);
    c1rcl3(15);
    glPopMatrix();

    // Top
    glPushMatrix();
    glTranslatef(340 + cloudX, 425, 0);
    c1rcl3(16);
    glPopMatrix();

    // Right
    glPushMatrix();
    glTranslatef(360 + cloudX, 410, 0);
    c1rcl3(16);
    glPopMatrix();

    // middle_Fill
    glPushMatrix();
    glTranslatef(355 + cloudX, 410, 0);
    c1rcl3(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(350 + cloudX, 410, 0);
    c1rcl3(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(345 + cloudX, 404, 0);
    c1rcl3(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(340 + cloudX, 404, 0);
    c1rcl3(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(335 + cloudX, 404, 0);
    c1rcl3(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(330 + cloudX, 404, 0);
    c1rcl3(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(325 + cloudX, 404, 0);
    c1rcl3(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(320 + cloudX, 404, 0);
    c1rcl3(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(315 + cloudX, 404, 0);
    c1rcl3(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(310 + cloudX, 404, 0);
    c1rcl3(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(305 + cloudX, 404, 0);
    c1rcl3(10);
    glPopMatrix();
}

void Cloud_model_two(){

    glColor3f(1.25, 0.924, 0.930);

   // Top_Left
    glPushMatrix();
    glTranslatef(220 + CloudX, 310, 0);
    C1rcl3(25);
    glPopMatrix();

    // Top
    glPushMatrix();
    glTranslatef(240 + CloudX, 325, 0);
    C1rcl3(26);
    glPopMatrix();

    // Right
    glPushMatrix();
    glTranslatef(260 + CloudX, 310, 0);
    C1rcl3(16);
    glPopMatrix();

    // middle_Fill
    glPushMatrix();
    glTranslatef(255 + CloudX, 310, 0);
    C1rcl3(26);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(250 + CloudX, 310, 0);
    C1rcl3(26);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(245 + CloudX, 304, 0);
    C1rcl3(20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(240 + CloudX, 304, 0);
    C1rcl3(20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(235 + CloudX, 304, 0);
    C1rcl3(20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(230 + CloudX, 304, 0);
    C1rcl3(20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(225 + CloudX, 304, 0);
    C1rcl3(20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(220 + CloudX, 304, 0);
    C1rcl3(20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(215 + CloudX, 304, 0);
    C1rcl3(20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(210 + CloudX, 304, 0);
    C1rcl3(20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(205 + CloudX, 304, 0);
    C1rcl3(20);
    glPopMatrix();
}

void kota(){


    //jendela gedung 1
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2d(105,380);
    glVertex2d(100,390);
    glVertex2d(20,380);
    glVertex2d(20,100);
    glVertex2d(105,100);
glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.4);
    glVertex2d(100,390);
    glVertex2d(10,390);
    glVertex2d(10,100);
    glVertex2d(100,100);
glEnd();

    //jendela 1
    glBegin(GL_QUADS);
    glColor3ub(220, 220, 0);
    glVertex2d(90,380);
    glVertex2d(20,380);
    glVertex2d(20,360);
    glVertex2d(90,360);
//1
    glVertex2d(25,350);
    glVertex2d(50,350);
    glVertex2d(50,320);
    glVertex2d(25,320);

    glVertex2d(60,350);
    glVertex2d(85,350);
    glVertex2d(85,320);
    glVertex2d(60,320);
//2
    glVertex2d(25,310);
    glVertex2d(50,310);
    glVertex2d(50,280);
    glVertex2d(25,280);

    glVertex2d(60,310);
    glVertex2d(85,310);
    glVertex2d(85,280);
    glVertex2d(60,280);
//3
    glVertex2d(25,270);
    glVertex2d(50,270);
    glVertex2d(50,240);
    glVertex2d(25,240);

    glVertex2d(60,270);
    glVertex2d(85,270);
    glVertex2d(85,240);
    glVertex2d(60,240);

//4
    glVertex2d(25,230);
    glVertex2d(50,230);
    glVertex2d(50,200);
    glVertex2d(25,200);

    glVertex2d(60,230);
    glVertex2d(85,230);
    glVertex2d(85,200);
    glVertex2d(60,200);
//5
glBegin(GL_QUADS);
    glColor3ub(220, 220, 0);
    glVertex2d(90,190);
    glVertex2d(20,190);
    glVertex2d(20,170);
    glVertex2d(90,170);

glEnd();
 //bayangan gedung 2
    glBegin(GL_POLYGON);
    glColor3f(0.1,0.1,0.1);
    glVertex2d(205,340);
    glVertex2d(200,350);
    glVertex2d(120,340);
    glVertex2d(120,100);
    glVertex2d(205,100);
glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(195,360);
    glVertex2d(190,370);
    glVertex2d(120,360);
    glVertex2d(120,350);
    glVertex2d(195,350);
glEnd();
    //gedung 2
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.0,0.50);
    glVertex2d(200,350);
    glVertex2d(110,350);
    glVertex2d(110,100);
    glVertex2d(200,100);
glEnd();
   glBegin(GL_POLYGON);
    glColor3f(0.4,0.0,0.5);
    glVertex2d(190,370);
    glVertex2d(120,370);
    glVertex2d(120,350);
    glVertex2d(190,350);
glEnd();


    //jendela 2
    glBegin(GL_QUADS);
    glColor3ub(220, 220, 220);
    glVertex2d(185,365);
    glVertex2d(125,365);
    glVertex2d(125,355);
    glVertex2d(185,355);

    glVertex2d(140,340);
    glVertex2d(120,340);
    glVertex2d(120,170);
    glVertex2d(140,170);

    glVertex2d(160,340);
    glVertex2d(150,340);
    glVertex2d(150,170);
    glVertex2d(160,170);

    glVertex2d(190,340);
    glVertex2d(170,340);
    glVertex2d(170,170);
    glVertex2d(190,170);


glEnd();
//jendela gedung 3
 glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(255,280);
    glVertex2d(250,290);
    glVertex2d(210,280);
    glVertex2d(210,100);
    glVertex2d(255,100);
glEnd();
    //gedung 3
     glBegin(GL_POLYGON);
    glColor3f(0.900,0.0,0.30);
    glVertex2d(250,290);
    glVertex2d(210,290);
    glVertex2d(210,100);
    glVertex2d(250,100);
glEnd();
//jendela 3
    glBegin(GL_QUADS);
    glColor3ub(220, 220, 220);
    glVertex2d(240,270);
    glVertex2d(220,270);
    glVertex2d(220,250);
    glVertex2d(240,250);

    glVertex2d(240,230);
    glVertex2d(220,230);
    glVertex2d(220,210);
    glVertex2d(240,210);

    glVertex2d(240,190);
    glVertex2d(220,190);
    glVertex2d(220,170);
    glVertex2d(240,170);
// jendela kecil

    glVertex2d(236,278);
    glVertex2d(224,278);
    glVertex2d(224,273);
    glVertex2d(236,273);

    glVertex2d(236,238);
    glVertex2d(224,238);
    glVertex2d(224,233);
    glVertex2d(236,233);

    glVertex2d(236,198);
    glVertex2d(224,198);
    glVertex2d(224,193);
    glVertex2d(236,193);
glEnd();
//bayangan gedung 4
glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(305,380);
    glVertex2d(300,390);
    glVertex2d(260,380);
    glVertex2d(260,100);
    glVertex2d(305,100);
glEnd();
//gedung 4
     glBegin(GL_POLYGON);
    glColor3f(0.20,0.0,0.600);
    glVertex2d(300,390);
    glVertex2d(260,390);
    glVertex2d(260,100);
    glVertex2d(300,100);
glEnd();

    //jenela gedung 4
     glBegin(GL_QUADS);
    glColor3ub(220, 220, 220);
    glVertex2d(290,370);
    glVertex2d(270,370);
    glVertex2d(270,280);
    glVertex2d(290,280);

    glVertex2d(290,270);
    glVertex2d(270,270);
    glVertex2d(270,170);
    glVertex2d(290,170);

glEnd();
//bayangan gedung 5

     glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(395,280);
    glVertex2d(390,290);
    glVertex2d(310,280);
    glVertex2d(310,100);
    glVertex2d(395,100);

glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(385,305);
    glVertex2d(380,310);
    glVertex2d(320,305);
    glVertex2d(320,290);
    glVertex2d(385,290);

glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(375,325);
    glVertex2d(370,330);
    glVertex2d(330,325);
    glVertex2d(330,310);
    glVertex2d(375,310);

glEnd();
//gedung 5

     glBegin(GL_POLYGON);
    glColor3f(0.0,0.300,0.0);
    glVertex2d(390,290);
    glVertex2d(310,290);
    glVertex2d(310,100);
    glVertex2d(390,100);

glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.0,0.300,0.0);
    glVertex2d(380,310);
    glVertex2d(320,310);
    glVertex2d(320,290);
    glVertex2d(380,290);

glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.0,0.300,0.0);
    glVertex2d(370,330);
    glVertex2d(330,330);
    glVertex2d(330,310);
    glVertex2d(370,310);

glEnd();
//jendela 5
       glBegin(GL_QUADS);
    glColor3ub(220, 220, 0);
    glVertex2d(340,270);
    glVertex2d(320,270);
    glVertex2d(320,170);
    glVertex2d(340,170);

glEnd();

       glBegin(GL_QUADS);
    glColor3ub(220, 220, 0);
    glVertex2d(380,270);
    glVertex2d(360,270);
    glVertex2d(360,170);
    glVertex2d(380,170);

    glVertex2d(355,280);
    glVertex2d(345,280);
    glVertex2d(345,170);
    glVertex2d(355,170);

    glVertex2d(375,305);
    glVertex2d(325,305);
    glVertex2d(325,295);
    glVertex2d(375,295);


    glVertex2d(365,325);
    glVertex2d(335,325);
    glVertex2d(335,315);
    glVertex2d(365,315);
glEnd();
//bayangan gedung 6
     glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(495,405);
    glVertex2d(490,410);
    glVertex2d(400,405);
    glVertex2d(400,100);
    glVertex2d(495,100);

glEnd();
 glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2d(475,445);
    glVertex2d(470,450);
    glVertex2d(420,445);
    glVertex2d(420,410);
    glVertex2d(475,410);

glEnd();
//gedung 6
     glBegin(GL_POLYGON);
    glColor3f(0.0,0.500,0.300);
    glVertex2d(490,410);
    glVertex2d(400,410);
    glVertex2d(400,100);
    glVertex2d(490,100);

glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.0,0.500,0.300);
    glVertex2d(470,450);
    glVertex2d(420,450);
    glVertex2d(420,410);
    glVertex2d(470,410);

glEnd();
//jendela 6
       glBegin(GL_QUADS);
    glColor3ub(220, 220, 220);
    glVertex2d(460,440);
    glVertex2d(430,440);
    glVertex2d(430,420);
    glVertex2d(460,420);

    glVertex2d(480,400);
    glVertex2d(410,400);
    glVertex2d(410,370);
    glVertex2d(480,370);

    glVertex2d(480,360);
    glVertex2d(410,360);
    glVertex2d(410,330);
    glVertex2d(480,330);

     glVertex2d(480,320);
    glVertex2d(410,320);
    glVertex2d(410,290);
    glVertex2d(480,290);

    glVertex2d(480,280);
    glVertex2d(410,280);
    glVertex2d(410,250);
    glVertex2d(480,250);

    glVertex2d(480,240);
    glVertex2d(410,240);
    glVertex2d(410,210);
    glVertex2d(480,210);

     glVertex2d(480,200);
    glVertex2d(410,200);
    glVertex2d(410,170);
    glVertex2d(480,170);
glEnd();
glFlush();
}
void sun(){
glColor3ub(255, 255, 0);
    circle(180, 180, 250, 160);
}


void airplane()
{
    // Airplane body
    glColor3ub(40, 40, 40);
    glBegin(GL_POLYGON);
    glVertex2d(px + 10, 390);
    glVertex2d(px + 90, 390);
    glVertex2d(px + 80, 430);
    glVertex2d(px + 10, 430);
    glEnd();

    // Airplane wing
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(px + 15, 370);
    glVertex2d(px + 50, 405);
    glVertex2d(px + 65, 405);
    glVertex2d(px + 30, 370);
    glEnd();

    glColor3ub(225, 225, 225);
    glBegin(GL_POLYGON);
    glVertex2d(px + 30, 430);
    glVertex2d(px + 15, 460);
    glVertex2d(px + 10, 460);
    glVertex2d(px + 10, 430);
    glEnd();

    // Airplane window
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(px + 15, 410);
    glVertex2d(px + 20, 410);
    glVertex2d(px + 20, 425);
    glVertex2d(px + 15, 425);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(px + 25, 410);
    glVertex2d(px + 30, 410);
    glVertex2d(px + 30, 425);
    glVertex2d(px + 25, 425);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(px + 35, 410);
    glVertex2d(px + 40, 410);
    glVertex2d(px + 40, 425);
    glVertex2d(px + 35, 425);
    glColor3ub(255, 255, 255);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(px + 45, 410);
    glVertex2d(px + 50, 410);
    glVertex2d(px + 50, 425);
    glVertex2d(px + 45, 425);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(px + 55, 410);
    glVertex2d(px + 60, 410);
    glVertex2d(px + 60, 425);
    glVertex2d(px + 55, 425);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(px + 65, 410);
    glVertex2d(px + 70, 410);
    glVertex2d(px + 70, 425);
    glVertex2d(px + 65, 425);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(px + 65, 410);
    glVertex2d(px + 70, 410);
    glVertex2d(px + 70, 425);
    glVertex2d(px + 65, 425);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(px + 75, 410);
    glVertex2d(px + 83, 410);
    glVertex2d(px + 80, 425);
    glVertex2d(px + 75, 425);
    glEnd();
}

void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);
    langit();
    sun();// Draw the city buildings
    kota();
    cloud_model_one();
  cloudX += 0.1;
    if (cloudX > 500)
        cloudX = -500;
      glEnd();

    Cloud_model_two();
  CloudX += 0.1;
    if (CloudX > 500)
        CloudX = -500;
      glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(500, 0);
    glVertex2d(500, 60);
    glVertex2d(0, 60);
    glEnd();

    // Road
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(0, 55);
    glVertex2d(500, 55);
    glVertex2d(500, 115);
    glVertex2d(0, 115);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0, 60);
    glVertex2d(500, 60);
    glVertex2d(500, 110);
    glVertex2d(0, 110);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(10, 70);
    glVertex2d(60, 70);
    glVertex2d(70, 100);
    glVertex2d(20, 100);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(80, 70);
    glVertex2d(130, 70);
    glVertex2d(140, 100);
    glVertex2d(90, 100);
    glEnd();

     glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(150, 70);
    glVertex2d(200, 70);
    glVertex2d(210, 100);
    glVertex2d(160, 100);
    glEnd();

 glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(220, 70);
    glVertex2d(270, 70);
    glVertex2d(280, 100);
    glVertex2d(230, 100);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(290, 70);
    glVertex2d(340, 70);
    glVertex2d(350, 100);
    glVertex2d(300, 100);
    glEnd();

     glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(360, 70);
    glVertex2d(410, 70);
    glVertex2d(420, 100);
    glVertex2d(370, 100);
    glEnd();

 glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2d(430, 65);
    glVertex2d(480, 65);
    glVertex2d(490, 105);
    glVertex2d(440, 105);
    glEnd();

     glColor3f(0.4, 0.1, 0.12);
    glBegin(GL_POLYGON);
    glVertex2d(480, 110);
    glVertex2d(485, 110);
    glVertex2d(485, 250);
    glVertex2d(480, 250);
    glEnd();

    glColor3f(0.110, 0.110, 0.120);
    glBegin(GL_POLYGON);
    glVertex2d(470, 110);
    glVertex2d(495, 110);
    glVertex2d(490, 130);
    glVertex2d(475, 130);
    glEnd();

     glColor3f(0.320, 0.320, 0.320);
    glBegin(GL_POLYGON);
    glVertex2d(456, 180);
    glVertex2d(478, 180);
    glVertex2d(478, 250);
    glVertex2d(456, 250);
    glEnd();



    glColor3ub(100, 0, 0);
    circle(7, 10, 467, 235);

     glColor3ub(100, 100, 0);
    circle(7, 10, 467, 215);

     glColor3ub(0, 255, 0);
    circle(7, 10, 467, 195);
    // Airplane
    airplane();
    px += 0.25;  // Move the airplane to the right
    if (px > 500)
        px = -100;

    // Car
    glPushMatrix();
    glTranslatef(bx, 0, 0);

    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(410, 100);
    glVertex2d(490, 100);
    glVertex2d(485, 130);
    glVertex2d(410, 130);
    glEnd();

    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(420, 130);
    glVertex2d(475, 130);
    glVertex2d(465, 160);
    glVertex2d(430, 160);
    glEnd();

    // Car window
    glColor3ub(220, 220, 220);
    glBegin(GL_POLYGON);
    glVertex2d(425, 130);
    glVertex2d(445, 130);
    glVertex2d(445, 150);
    glVertex2d(430, 150);
    glEnd();

    // Car window
    glColor3ub(220, 220, 220);
    glBegin(GL_POLYGON);
    glVertex2d(450, 130);
    glVertex2d(470, 130);
    glVertex2d(465, 150);
    glVertex2d(450, 150);
    glEnd();

    // Car wheel
    glColor3ub(0, 0, 0);
    circle(10, 14, 435, 100);
    circle(10, 14, 465, 100);

    glColor3ub(245, 245, 245);
    circle(6, 10, 435, 100);
    circle(6, 10, 465, 100);

    glPopMatrix();
    bx += 0.07;
    if (bx > 500)
        bx = -500;
          glEnd();
// Car
    glPushMatrix();
    glTranslatef(bx, 0, 0);

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    glVertex2d(210, 100);
    glVertex2d(290, 100);
    glVertex2d(285, 130);
    glVertex2d(210, 130);
    glEnd();

    glColor3ub(0, 100, 0);
    glBegin(GL_POLYGON);
    glVertex2d(220, 130);
    glVertex2d(275, 130);
    glVertex2d(265, 160);
    glVertex2d(230, 160);
    glEnd();

    // Car window
    glColor3ub(220, 220, 220);
    glBegin(GL_POLYGON);
    glVertex2d(225, 130);
    glVertex2d(245, 130);
    glVertex2d(245, 150);
    glVertex2d(230, 150);
    glEnd();

    // Car window
    glColor3ub(220, 220, 220);
    glBegin(GL_POLYGON);
    glVertex2d(250, 130);
    glVertex2d(270, 130);
    glVertex2d(265, 150);
    glVertex2d(250, 150);
    glEnd();

    // Car wheel
    glColor3ub(0, 0, 0);
    circle(10, 14, 235, 100);
    circle(10, 14, 265, 100);

    glColor3ub(245, 245, 245);
    circle(6, 10, 235, 100);
    circle(6, 10, 265, 100);
    glPopMatrix();

    bx += 0.07;
    if (bx > 500)
        bx = -500;
        glEnd();

// Car3
    glPushMatrix();
    glTranslatef(bx, 0, 0);

    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(10, 100);
    glVertex2d(80, 100);
    glVertex2d(80, 160);
    glVertex2d(10, 160);
    glEnd();

    glColor3ub(255, 100, 0);
    glBegin(GL_POLYGON);
    glVertex2d(80, 100);
    glVertex2d(100, 100);
    glVertex2d(100, 140);
    glVertex2d(80, 140);
    glEnd();

    // Car window
    glColor3ub(220, 220, 220);
    glBegin(GL_POLYGON);
    glVertex2d(85, 120);
    glVertex2d(100, 120);
    glVertex2d(100, 140);
    glVertex2d(85, 140);
    glEnd();

    // Car window
    glColor3ub(220, 220, 0);
    glBegin(GL_POLYGON);
    glVertex2d(10, 130);
    glVertex2d(80, 130);
    glVertex2d(80, 150);
    glVertex2d(10, 150);
    glEnd();

    // Car wheel
    glColor3ub(0, 0, 0);
    circle(10, 14, 35, 100);
    circle(10, 14, 65, 100);

    glColor3ub(245, 245, 245);
    circle(6, 10, 35, 100);
    circle(6, 10, 65, 100);

    glPopMatrix();
    cx -= 0.07;
    if (cx > -500)
        cx = 500;
        glEnd();
    glutPostRedisplay();
    glFlush();
    glutSwapBuffers();
}

void timer(int value)
{
    glutPostRedisplay();
    glutTimerFunc(animationSpeed, timer, 0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(300, 50);
    glutCreateWindow("Pemandangan");
    gluOrtho2D(0.0, 500, 0.0, 500);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
