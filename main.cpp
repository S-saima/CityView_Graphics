#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <Math.h>


GLfloat position = 0.0f;
GLfloat position2 =0.0f;
GLfloat position3 =0.0f;
GLfloat position4 =0.0f;
GLfloat speed = 0.009f;
GLfloat speed2 =0.009f;
GLfloat speed3 =0.008f;
GLfloat speed4 =0.02f;

GLfloat i= 0.0f;

void update(int value) {

    if(position > 1.5)
        position = -1.2f;

    position += speed;


	glutPostRedisplay();
	glutTimerFunc(100, update, 0);



}


void update2(int value) {


if(position2 < -1.0)
position2 = 1.2f;


position2 -= speed2;


glutPostRedisplay();
glutTimerFunc(100, update2, 0);

}
void update3(int value){
if(position3 > 1.0)
    position3 = -1.2f;
position3 += speed3;

glutPostRedisplay();
glutTimerFunc(100, update3, 0);

}

void update4(int value){
if(position4 <= -1.7)
    position4 = 1.6f;
position4 -= speed4;

glutPostRedisplay();
glutTimerFunc(100, update4, 0);

}


void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed += 0.009f;
			speed4+=0.009f;
			printf("clicked at (%d, %d)\n", x, y);
		}

	}
	else if(button ==GLUT_RIGHT_BUTTON)
    {
        if(state == GLUT_DOWN)
            {
            speed -=0.009f;
            speed4-=0.009f;
            printf("clicked at (%d, %d)\n", x, y);
        }
    }

	glutPostRedisplay();
}



void cloud1(){
    glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);
 glBegin(GL_TRIANGLE_FAN);
glColor3ub(193,190,186);

 glVertex2f(-0.6f, 0.9f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.6, 0.06*sin(M_PI * i / 180.0) + 0.9);

 glVertex2f(-0.55f, 0.9f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.05*cos(M_PI * i / 180.0) - 0.55, 0.09*sin(M_PI * i / 180.0) + 0.9);

 glVertex2f(-0.50f, 0.9f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.50, 0.06*sin(M_PI * i / 180.0) + 0.9);

 glEnd();
 //cloud 2
 glBegin(GL_TRIANGLE_FAN);
glColor3ub(226,226,209);

glVertex2f(-0.8f, 0.8f);
   for(i = 0.0f; i <= 360; i++)
   glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.8, 0.06*sin(M_PI * i / 180.0) + 0.8);

 glVertex2f(-0.85f, 0.8f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.05*cos(M_PI * i / 180.0) - 0.85, 0.09*sin(M_PI * i / 180.0) + 0.8);

 glVertex2f(-0.90f, 0.8f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.90, 0.06*sin(M_PI * i / 180.0) + 0.8);

 glEnd();
 //cloud3
  glBegin(GL_TRIANGLE_FAN);
glColor3ub(226,220,209);

 glVertex2f(-0.3f, 0.77f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.3, 0.06*sin(M_PI * i / 180.0) + 0.77);


 glVertex2f(-0.25f, 0.77f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.05*cos(M_PI * i / 180.0) - 0.25, 0.09*sin(M_PI * i / 180.0) + 0.77);


  glVertex2f(-0.20f, 0.77f);
for(i = 0.0f; i <= 360; i++)
glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.20, 0.06*sin(M_PI * i / 180.0) + 0.77);

 glEnd();
 glPopMatrix();



}


void bird(){
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.27f,0.64f);// 1st
glVertex2f(0.30f,0.63f);
glVertex2f(0.30f,0.63f);
glVertex2f(0.29f,0.62f);
glVertex2f(0.29f,0.62f);
glVertex2f(0.29f,0.62f);
glVertex2f(0.28f,0.61f);
glVertex2f(0.28f,0.60f);
glVertex2f(0.27f,0.62f);
glVertex2f(0.26f,0.62f);
glVertex2f(0.26f,0.62f);
glVertex2f(0.26f,0.63f);
glVertex2f(0.27f,0.64f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.29f,0.44f);// 2nd
glVertex2f(0.32f,0.43f);
glVertex2f(0.33f,0.43f);
glVertex2f(0.32f,0.42f);
glVertex2f(0.313f,0.422f);
glVertex2f(0.315f,0.414f);
glVertex2f(0.31f,0.40f);
glVertex2f(0.308f,0.417f);
glVertex2f(0.295f,0.414f);
glVertex2f(0.29f,0.422f);
glVertex2f(0.28f,0.43f);
glVertex2f(0.28f,0.431f);
glVertex2f(0.29f,0.43f);

 glEnd();
 glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(0.37f,0.517f);// 3rd
glVertex2f(0.39f,0.505f);
glVertex2f(0.405f,0.497f);
glVertex2f(0.39f,0.4914f);
glVertex2f(0.39f,0.494f);
glVertex2f(0.39f,0.488f);
glVertex2f(0.385f,0.488f);
glVertex2f(0.38f,0.48f);
glVertex2f(0.37f,0.494f);
glVertex2f(0.36f,0.4914f);
glVertex2f(0.366f,0.5f);
glVertex2f(0.363f,0.511f);
glVertex2f(0.37f,0.511f);

 glEnd();
 glPopMatrix();

}


void sky(){


            glBegin(GL_QUADS);//sky line 1
    glColor3ub(3, 8, 161); //
    glVertex2f(-1.0f, 0.96f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, 0.96f);


       glColor3ub(13, 18, 205);
    glVertex2f(-1.0f, 0.94f);
    glVertex2f(-1.0f, 0.96f);
    glVertex2f(1.0f, 0.96f);
    glVertex2f(1.0f, 0.94f);

glColor3ub(23, 28, 205);
      //
    glVertex2f(-1.0f, 0.90f);
    glVertex2f(-1.0f, 0.94f);
    glVertex2f(1.0f, 0.94f);
    glVertex2f(1.0f, 0.90f);


glColor3ub(33, 38, 225);
       //
    glVertex2f(-1.0f, 0.86f);
    glVertex2f(-1.0f, 0.9f);
    glVertex2f(1.0f, 0.9f);
    glVertex2f(1.0f, 0.86f);


 glColor3ub(43, 48, 245);
       //
    glVertex2f(-1.0f, 0.82f);
    glVertex2f(-1.0f, 0.86f);
    glVertex2f(1.0f, 0.86f);
    glVertex2f(1.0f, 0.82f);


glColor3ub(53, 58, 255);
      //
    glVertex2f(-1.0f, 0.78f);
    glVertex2f(-1.0f, 0.82f);
    glVertex2f(1.0f, 0.82f);
    glVertex2f(1.0f, 0.78f);


glColor3ub(63, 68, 255);
      //
    glVertex2f(-1.0f, 0.74f);
    glVertex2f(-1.0f, 0.78f);
    glVertex2f(1.0f, 0.78f);
    glVertex2f(1.0f, 0.74f);


glColor3ub(73, 78, 245); //
    glVertex2f(-1.0f, 0.7f);
    glVertex2f(-1.0f, 0.74f);
    glVertex2f(1.0f, 0.74f);
    glVertex2f(1.0f, 0.7f);


glColor3ub(83, 88, 245);   //
    glVertex2f(-1.0f, 0.66f);
    glVertex2f(-1.0f, 0.7f);
    glVertex2f(1.0f, 0.7f);
    glVertex2f(1.0f, 0.66f);


glColor3ub(93, 98, 255); //
    glVertex2f(-1.0f, 0.62f);
    glVertex2f(-1.0f, 0.66f);
    glVertex2f(1.0f, 0.66f);
    glVertex2f(1.0f, 0.62f);


glColor3ub(103, 108, 255); //
    glVertex2f(-1.0f, 0.58f);
    glVertex2f(-1.0f, 0.62f);
    glVertex2f(1.0f, 0.62f);
    glVertex2f(1.0f, 0.58f);


glColor3ub(113, 118, 245); //
    glVertex2f(-1.0f, 0.54f);
    glVertex2f(-1.0f, 0.58f);
    glVertex2f(1.0f, 0.58f);
    glVertex2f(1.0f, 0.54f);
       //

glColor3ub(123, 128, 245); //
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(-1.0f, 0.54f);
    glVertex2f(1.0f, 0.54f);
    glVertex2f(1.0f, 0.5f);

glColor3ub(133, 138, 255); //
    glVertex2f(-1.0f, 0.46f);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(1.0f, 0.5f);
    glVertex2f(1.0f, 0.46f);


glColor3ub(143, 148, 255); //
    glVertex2f(-1.0f, 0.42f);
    glVertex2f(-1.0f, 0.46f);
    glVertex2f(1.0f, 0.46f);
    glVertex2f(1.0f, 0.42f);


glColor3ub(153, 158, 245); //
    glVertex2f(-1.0f, 0.38f);
    glVertex2f(-1.0f, 0.42f);
    glVertex2f(1.0f, 0.42f);
    glVertex2f(1.0f, 0.38f);


glColor3ub(163, 168, 245); //
    glVertex2f(-1.0f, 0.34f);
    glVertex2f(-1.0f, 0.38f);
    glVertex2f(1.0f, 0.38f);
    glVertex2f(1.0f, 0.34f);


    ////


glColor3ub(173, 178, 255); //
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(-1.0f, 0.34f);
    glVertex2f(1.0f, 0.34f);
    glVertex2f(1.0f, 0.3f);


glColor3ub(183, 188, 255); //
    glVertex2f(-1.0f, 0.26f);
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(1.0f, 0.26f);


glColor3ub(193, 198, 245); //
    glVertex2f(-1.0f, 0.22f);
    glVertex2f(-1.0f, 0.26f);
    glVertex2f(1.0f, 0.26f);
    glVertex2f(1.0f, 0.22f);

glColor3ub(203, 208, 245); //
    glVertex2f(-1.0f, 0.2f);
    glVertex2f(-1.0f, 0.22f);
    glVertex2f(1.0f, 0.22f);
    glVertex2f(1.0f, 0.2f);
glColor3ub(213, 218, 245); //
    glVertex2f(-1.0f, 0.18f);
    glVertex2f(-1.0f, 0.2f);
    glVertex2f(1.0f, 0.2f);
    glVertex2f(1.0f, 0.18f);
glColor3ub(213, 218, 245); //
    glVertex2f(-1.0f, 0.18f);
    glVertex2f(-1.0f, 0.2f);
    glVertex2f(1.0f, 0.2f);
    glVertex2f(1.0f, 0.18f);




	glEnd();


}
void building(){

  glBegin(GL_QUADS);//house line
     glColor3f(0.4f, 0.45f, 0.5f); //
    glVertex2f(-1.0f, 0.18f);
    glVertex2f(-1.0f, 0.2f);
    glVertex2f(1.0f, 0.2f);
    glVertex2f(1.0f, 0.18f);

     glColor3f(0.8f, 0.4f, 0.5f); //left house(1)from left
    glVertex2f(-0.92f, 0.2f);
    glVertex2f(-0.92f, 0.68f);
    glVertex2f(-0.82f, 0.68f);
    glVertex2f(-0.82f, 0.2f);
 glColor3ub(255, 235, 213);
    glVertex2f(-0.90f, 0.25f);//window(down)
    glVertex2f(-0.90f, 0.35f);
    glVertex2f(-0.84f, 0.35f);
    glVertex2f(-0.84f, 0.25f);

    glVertex2f(-0.90f, 0.4f);//window(middle)
    glVertex2f(-0.90f, 0.5f);
    glVertex2f(-0.84f, 0.5f);
    glVertex2f(-0.84f, 0.4f);

     glVertex2f(-0.90f, 0.55f);//window(up)
    glVertex2f(-0.90f, 0.65f);
    glVertex2f(-0.84f, 0.65f);
    glVertex2f(-0.84f, 0.55f);




     glColor3f(0.6f, 0.4f, 0.5f); //left house side line(1)
    glVertex2f(-0.82f, 0.68f);
    glVertex2f(-0.79f, 0.65f);
    glVertex2f(-0.79f, 0.2f);
    glVertex2f(-0.82f, 0.2f);

//............................

      glColor3f(0.0f, 0.5f, 0.5f); //left house(2)
    glVertex2f(-0.75f, 0.2f);
    glVertex2f(-0.75f, 0.6f);
    glVertex2f(-0.65f, 0.6f);
    glVertex2f(-0.65f, 0.2f);

  glColor3ub(255, 235, 213);
    glVertex2f(-0.73f, 0.25f);//window(down)
    glVertex2f(-0.73f, 0.37f);
    glVertex2f(-0.67f, 0.37f);
    glVertex2f(-0.67f, 0.25f);

    glVertex2f(-0.73f, 0.43f);//window(middle)
    glVertex2f(-0.73f, 0.55f);
    glVertex2f(-0.67f, 0.55f);
    glVertex2f(-0.67f, 0.43f);

     glColor3f(0.0f, 0.4f, 0.5f); //left house side line(2)
    glVertex2f(-0.65f, 0.6f);
    glVertex2f(-0.63f, 0.58f);
    glVertex2f(-0.63f, 0.2f);
    glVertex2f(-0.65f, 0.2f);
///////////////////////

     glColor3f(0.4f, 0.4f, 0.4f); //left house(3)
    glVertex2f(-0.59f, 0.2f);
    glVertex2f(-0.59f, 0.7f);
    glVertex2f(-0.48f, 0.7f);
    glVertex2f(-0.48f, 0.2f);

   glColor3ub(255, 235, 213);
    glVertex2f(-0.57f, 0.25f);//window(down)
    glVertex2f(-0.57f, 0.35f);
    glVertex2f(-0.50f, 0.35f);
    glVertex2f(-0.50f, 0.25f);

    glVertex2f(-0.57f, 0.4f);//window(middle)
    glVertex2f(-0.57f, 0.5f);
    glVertex2f(-0.50f, 0.5f);
    glVertex2f(-0.50f, 0.4f);

     glVertex2f(-0.57f, 0.55f);//window(up)
    glVertex2f(-0.57f, 0.65f);
    glVertex2f(-0.50f, 0.65f);
    glVertex2f(-0.50f, 0.55f);
     glColor3f(0.4f, 0.35f, 0.4f); //left house side line(3)
    glVertex2f(-0.48f, 0.7f);
    glVertex2f(-0.46f, 0.65f);
    glVertex2f(-0.46f, 0.2f);
    glVertex2f(-0.48f, 0.2f);

/////////////
     glColor3ub(9, 125, 117); //left house(4)
    glVertex2f(-0.42f, 0.2f);
    glVertex2f(-0.42f, 0.67f);
    glVertex2f(-0.33f, 0.67f);
    glVertex2f(-0.33f, 0.2f);
      glColor3ub(255, 235, 213);
    glVertex2f(-0.40f, 0.23f);//window(down)
    glVertex2f(-0.40f, 0.33f);
    glVertex2f(-0.35f, 0.33f);
    glVertex2f(-0.35f, 0.23f);

    glVertex2f(-0.40f, 0.38f);//window(middle)
    glVertex2f(-0.40f, 0.48f);
    glVertex2f(-0.35f, 0.48f);
    glVertex2f(-0.35f, 0.38f);

     glVertex2f(-0.40f, 0.53f);//window(up)
    glVertex2f(-0.40f, 0.63f);
    glVertex2f(-0.35f, 0.63f);
    glVertex2f(-0.35f, 0.53f);
    glColor3ub(7, 105, 96); //left house side line(4)
    glVertex2f(-0.33f, 0.67f);
    glVertex2f(-0.31f, 0.65f);
    glVertex2f(-0.31f, 0.2f);
    glVertex2f(-0.33f, 0.2f);


/////////////////////
        glColor3ub(149, 79, 93);//left house(5)
    glVertex2f(-0.27f, 0.2f);
    glVertex2f(-0.27f, 0.75f);
    glVertex2f(-0.15f, 0.75f);
    glVertex2f(-0.15f, 0.2f);

      glColor3ub(255, 235, 213);
    glVertex2f(-0.25f, 0.22f);//window(down)
    glVertex2f(-0.25f, 0.32f);
    glVertex2f(-0.17f, 0.32f);
    glVertex2f(-0.17f, 0.22f);

    glVertex2f(-0.25f, 0.35f);//window(middle low)
    glVertex2f(-0.25f, 0.45f);
    glVertex2f(-0.17f, 0.45f);
    glVertex2f(-0.17f, 0.35f);

     glVertex2f(-0.25f, 0.48f);//window(middle up)
    glVertex2f(-0.25f, 0.58f);
    glVertex2f(-0.17f, 0.58f);
    glVertex2f(-0.17f, 0.48f);
      glVertex2f(-0.25f, 0.61f);//window(up)
    glVertex2f(-0.25f, 0.71f);
    glVertex2f(-0.17f, 0.71f);
    glVertex2f(-0.17f, 0.61f);
   glColor3ub(132, 71, 83); //left house side line(5)
    glVertex2f(-0.15f, 0.75f);
    glVertex2f(-0.13f, 0.73f);
    glVertex2f(-0.13f, 0.2f);
    glVertex2f(-0.15f, 0.2f);
//////////////////////

            glColor3ub(74, 87, 172); //middle house
    glVertex2f(0.08f, 0.2f);
    glVertex2f(0.08f, 0.8f);
    glVertex2f(-0.03f, 0.8f);
    glVertex2f(-0.03f, 0.2f);
         glColor3ub(255, 235, 213);
    glVertex2f(0.06f, 0.22f);//window(down)
    glVertex2f(0.06f, 0.32f);
    glVertex2f(-0.01f, 0.32f);
    glVertex2f(-0.01f, 0.22f);

    glVertex2f(0.06f, 0.37f);//window(middle low)
    glVertex2f(0.06f, 0.47f);
    glVertex2f(-0.01f, 0.47f);
    glVertex2f(-0.01f, 0.37f);

     glVertex2f(0.06f, 0.51f);//window(middle up)
    glVertex2f(0.06f, 0.61f);
    glVertex2f(-0.01f, 0.61f);
    glVertex2f(-0.01f, 0.51f);

      glVertex2f(0.06f, 0.65f);//window(up)
    glVertex2f(0.06f, 0.75f);
    glVertex2f(-0.01f, 0.75f);
    glVertex2f(-0.01f, 0.65f);
       glColor3ub(63, 75, 149); //middle house side line
    glVertex2f(-0.03f, 0.8f);
    glVertex2f(-0.05f, 0.76f);
    glVertex2f(-0.05f, 0.2f);
    glVertex2f(-0.03f, 0.2f);
///////////////////////

     glColor3ub(38, 78, 47);//right house(1)from right
    glVertex2f(0.92f, 0.2f);
    glVertex2f(0.92f, 0.7f);
    glVertex2f(0.82f, 0.7f);
    glVertex2f(0.82f, 0.2f);
    glColor3ub(255, 235, 213);
    glVertex2f(0.90f, 0.25f);//window(down)
    glVertex2f(0.90f, 0.35f);
    glVertex2f(0.84f, 0.35f);
    glVertex2f(0.84f, 0.25f);

    glVertex2f(0.90f, 0.4f);//window(middle)
    glVertex2f(0.90f, 0.5f);
    glVertex2f(0.84f, 0.5f);
    glVertex2f(0.84f, 0.4f);

     glVertex2f(0.90f, 0.55f);//window(up)
    glVertex2f(0.90f, 0.65f);
    glVertex2f(0.84f, 0.65f);
    glVertex2f(0.84f, 0.55f);

     glColor3ub(31, 65, 39); //right house side line(1)
    glVertex2f(0.82f, 0.7f);
    glVertex2f(0.79f, 0.65f);
    glVertex2f(0.79f, 0.2f);
    glVertex2f(0.82f, 0.2f);
/////////////////////


      glColor3ub(127, 58, 102); //right house(2)
    glVertex2f(0.73f, 0.2f);
    glVertex2f(0.73f, 0.67f);
    glVertex2f(0.63f, 0.67f);
    glVertex2f(0.63f, 0.2f);
     glColor3ub(255, 235, 213);
    glVertex2f(0.71f, 0.23f);//window(down)
    glVertex2f(0.71f, 0.33f);
    glVertex2f(0.65f, 0.33f);
    glVertex2f(0.65f, 0.23f);

    glVertex2f(0.71f, 0.38f);//window(middle)
    glVertex2f(0.71f, 0.48f);
    glVertex2f(0.65f, 0.48f);
    glVertex2f(0.65f, 0.38f);

     glVertex2f(0.71f, 0.53f);//window(up)
    glVertex2f(0.71f, 0.63f);
    glVertex2f(0.65f, 0.63f);
    glVertex2f(0.65f, 0.53f);
     glColor3ub(101, 48, 81); //right house side line(2)
    glVertex2f(0.63f, 0.67f);
    glVertex2f(0.60f, 0.65f);
    glVertex2f(0.60f, 0.2f);
    glVertex2f(0.63f, 0.2f);

///////////////
     glColor3ub(128, 168, 134); //right house(3)
    glVertex2f(0.57f, 0.2f);
    glVertex2f(0.57f, 0.7f);
    glVertex2f(0.47f, 0.7f);
    glVertex2f(0.47f, 0.2f);
    glColor3ub(255, 235, 213);
    glVertex2f(0.55f, 0.25f);//window(down)
    glVertex2f(0.55f, 0.35f);
    glVertex2f(0.49f, 0.35f);
    glVertex2f(0.49f, 0.25f);

    glVertex2f(0.55f, 0.4f);//window(middle)
    glVertex2f(0.55f, 0.5f);
    glVertex2f(0.49f, 0.5f);
    glVertex2f(0.49f, 0.4f);

     glVertex2f(0.55f, 0.55f);//window(up)
    glVertex2f(0.55f, 0.65f);
    glVertex2f(0.49f, 0.65f);
    glVertex2f(0.49f, 0.55f);

      glColor3ub(104, 144, 110); //right house side line(3)
    glVertex2f(0.47f, 0.7f);
    glVertex2f(0.44f, 0.65f);
    glVertex2f(0.44f, 0.2f);
    glVertex2f(0.47f, 0.2f);
//////////////////

      glColor3ub(9, 159, 139); //left house(4)
    glVertex2f(0.40f, 0.2f);
    glVertex2f(0.40f, 0.6f);
    glVertex2f(0.31f, 0.6f);
    glVertex2f(0.31f, 0.2f);
     glColor3ub(255, 235, 213);
    glVertex2f(0.38f, 0.25f);//window(down)
    glVertex2f(0.38f, 0.37f);
    glVertex2f(0.33f, 0.37f);
    glVertex2f(0.33f, 0.25f);

    glVertex2f(0.38f, 0.42f);//window(middle)
    glVertex2f(0.38f, 0.54f);
    glVertex2f(0.33f, 0.54f);
    glVertex2f(0.33f, 0.42f);
     glColor3ub(3, 131, 114); //left house side line(4)
    glVertex2f(0.31f, 0.6f);
    glVertex2f(0.29f, 0.55f);
    glVertex2f(0.29f, 0.2f);
    glVertex2f(0.31f, 0.2f);
//////////////////
         glColor3ub(191, 21, 21); //right house(5)
    glVertex2f(0.26f, 0.2f);
    glVertex2f(0.26f, 0.77f);
    glVertex2f(0.16f, 0.77f);
    glVertex2f(0.16f, 0.2f);
      glColor3ub(255, 235, 213);
    glVertex2f(0.24f, 0.25f);//window(down)
    glVertex2f(0.24f, 0.37f);
    glVertex2f(0.18f, 0.37f);
    glVertex2f(0.18f, 0.25f);

    glVertex2f(0.24f, 0.42f);//window(middle)
    glVertex2f(0.24f, 0.54f);
    glVertex2f(0.18f, 0.54f);
    glVertex2f(0.18f, 0.42f);
     glVertex2f(0.24f, 0.59f);//window(up)
    glVertex2f(0.24f, 0.71f);
    glVertex2f(0.18f, 0.71f);
    glVertex2f(0.18f, 0.59f);
    glColor3ub(166, 17, 17); //right house side line(5)
    glVertex2f(0.16f, 0.77f);
    glVertex2f(0.13f, 0.74f);
    glVertex2f(0.13f, 0.2f);
    glVertex2f(0.16f, 0.2f);

    glEnd();
}

void nightbuilding(){

  glBegin(GL_QUADS);//house line
     glColor3f(0.4f, 0.45f, 0.5f); //
    glVertex2f(-1.0f, 0.18f);
    glVertex2f(-1.0f, 0.2f);
    glVertex2f(1.0f, 0.2f);
    glVertex2f(1.0f, 0.18f);

     glColor3f(0.8f, 0.4f, 0.5f); //left house(1)from left
    glVertex2f(-0.92f, 0.2f);
    glVertex2f(-0.92f, 0.68f);
    glVertex2f(-0.82f, 0.68f);
    glVertex2f(-0.82f, 0.2f);
 glColor3ub(237, 255, 261);
    glVertex2f(-0.90f, 0.25f);//window(down)
    glVertex2f(-0.90f, 0.35f);
    glVertex2f(-0.84f, 0.35f);
    glVertex2f(-0.84f, 0.25f);

    glVertex2f(-0.90f, 0.4f);//window(middle)
    glVertex2f(-0.90f, 0.5f);
    glVertex2f(-0.84f, 0.5f);
    glVertex2f(-0.84f, 0.4f);

     glVertex2f(-0.90f, 0.55f);//window(up)
    glVertex2f(-0.90f, 0.65f);
    glVertex2f(-0.84f, 0.65f);
    glVertex2f(-0.84f, 0.55f);




     glColor3f(0.6f, 0.4f, 0.5f); //left house side line(1)
    glVertex2f(-0.82f, 0.68f);
    glVertex2f(-0.79f, 0.65f);
    glVertex2f(-0.79f, 0.2f);
    glVertex2f(-0.82f, 0.2f);

//............................

      glColor3f(0.0f, 0.5f, 0.5f); //left house(2)
    glVertex2f(-0.75f, 0.2f);
    glVertex2f(-0.75f, 0.6f);
    glVertex2f(-0.65f, 0.6f);
    glVertex2f(-0.65f, 0.2f);

  glColor3ub(237, 255, 261);
    glVertex2f(-0.73f, 0.25f);//window(down)
    glVertex2f(-0.73f, 0.37f);
    glVertex2f(-0.67f, 0.37f);
    glVertex2f(-0.67f, 0.25f);

    glVertex2f(-0.73f, 0.43f);//window(middle)
    glVertex2f(-0.73f, 0.55f);
    glVertex2f(-0.67f, 0.55f);
    glVertex2f(-0.67f, 0.43f);

     glColor3f(0.0f, 0.4f, 0.5f); //left house side line(2)
    glVertex2f(-0.65f, 0.6f);
    glVertex2f(-0.63f, 0.58f);
    glVertex2f(-0.63f, 0.2f);
    glVertex2f(-0.65f, 0.2f);
///////////////////////

     glColor3f(0.4f, 0.4f, 0.4f); //left house(3)
    glVertex2f(-0.59f, 0.2f);
    glVertex2f(-0.59f, 0.7f);
    glVertex2f(-0.48f, 0.7f);
    glVertex2f(-0.48f, 0.2f);

   glColor3ub(237, 255, 261);
    glVertex2f(-0.57f, 0.25f);//window(down)
    glVertex2f(-0.57f, 0.35f);
    glVertex2f(-0.50f, 0.35f);
    glVertex2f(-0.50f, 0.25f);

    glVertex2f(-0.57f, 0.4f);//window(middle)
    glVertex2f(-0.57f, 0.5f);
    glVertex2f(-0.50f, 0.5f);
    glVertex2f(-0.50f, 0.4f);

     glVertex2f(-0.57f, 0.55f);//window(up)
    glVertex2f(-0.57f, 0.65f);
    glVertex2f(-0.50f, 0.65f);
    glVertex2f(-0.50f, 0.55f);
     glColor3f(0.4f, 0.35f, 0.4f); //left house side line(3)
    glVertex2f(-0.48f, 0.7f);
    glVertex2f(-0.46f, 0.65f);
    glVertex2f(-0.46f, 0.2f);
    glVertex2f(-0.48f, 0.2f);

/////////////
     glColor3ub(9, 125, 117); //left house(4)
    glVertex2f(-0.42f, 0.2f);
    glVertex2f(-0.42f, 0.67f);
    glVertex2f(-0.33f, 0.67f);
    glVertex2f(-0.33f, 0.2f);
glColor3ub(237, 255, 261);
    glVertex2f(-0.40f, 0.23f);//window(down)
    glVertex2f(-0.40f, 0.33f);
    glVertex2f(-0.35f, 0.33f);
    glVertex2f(-0.35f, 0.23f);

    glVertex2f(-0.40f, 0.38f);//window(middle)
    glVertex2f(-0.40f, 0.48f);
    glVertex2f(-0.35f, 0.48f);
    glVertex2f(-0.35f, 0.38f);

     glVertex2f(-0.40f, 0.53f);//window(up)
    glVertex2f(-0.40f, 0.63f);
    glVertex2f(-0.35f, 0.63f);
    glVertex2f(-0.35f, 0.53f);
    glColor3ub(7, 105, 96); //left house side line(4)
    glVertex2f(-0.33f, 0.67f);
    glVertex2f(-0.31f, 0.65f);
    glVertex2f(-0.31f, 0.2f);
    glVertex2f(-0.33f, 0.2f);


/////////////////////
        glColor3ub(149, 79, 93);//left house(5)
    glVertex2f(-0.27f, 0.2f);
    glVertex2f(-0.27f, 0.75f);
    glVertex2f(-0.15f, 0.75f);
    glVertex2f(-0.15f, 0.2f);

glColor3ub(237, 255, 261);
    glVertex2f(-0.25f, 0.22f);//window(down)
    glVertex2f(-0.25f, 0.32f);
    glVertex2f(-0.17f, 0.32f);
    glVertex2f(-0.17f, 0.22f);

    glVertex2f(-0.25f, 0.35f);//window(middle low)
    glVertex2f(-0.25f, 0.45f);
    glVertex2f(-0.17f, 0.45f);
    glVertex2f(-0.17f, 0.35f);

     glVertex2f(-0.25f, 0.48f);//window(middle up)
    glVertex2f(-0.25f, 0.58f);
    glVertex2f(-0.17f, 0.58f);
    glVertex2f(-0.17f, 0.48f);
      glVertex2f(-0.25f, 0.61f);//window(up)
    glVertex2f(-0.25f, 0.71f);
    glVertex2f(-0.17f, 0.71f);
    glVertex2f(-0.17f, 0.61f);
   glColor3ub(132, 71, 83); //left house side line(5)
    glVertex2f(-0.15f, 0.75f);
    glVertex2f(-0.13f, 0.73f);
    glVertex2f(-0.13f, 0.2f);
    glVertex2f(-0.15f, 0.2f);
//////////////////////

            glColor3ub(74, 87, 172); //middle house
    glVertex2f(0.08f, 0.2f);
    glVertex2f(0.08f, 0.8f);
    glVertex2f(-0.03f, 0.8f);
    glVertex2f(-0.03f, 0.2f);
glColor3ub(237, 255, 261);
    glVertex2f(0.06f, 0.22f);//window(down)
    glVertex2f(0.06f, 0.32f);
    glVertex2f(-0.01f, 0.32f);
    glVertex2f(-0.01f, 0.22f);

    glVertex2f(0.06f, 0.37f);//window(middle low)
    glVertex2f(0.06f, 0.47f);
    glVertex2f(-0.01f, 0.47f);
    glVertex2f(-0.01f, 0.37f);

     glVertex2f(0.06f, 0.51f);//window(middle up)
    glVertex2f(0.06f, 0.61f);
    glVertex2f(-0.01f, 0.61f);
    glVertex2f(-0.01f, 0.51f);

      glVertex2f(0.06f, 0.65f);//window(up)
    glVertex2f(0.06f, 0.75f);
    glVertex2f(-0.01f, 0.75f);
    glVertex2f(-0.01f, 0.65f);
       glColor3ub(63, 75, 149); //middle house side line
    glVertex2f(-0.03f, 0.8f);
    glVertex2f(-0.05f, 0.76f);
    glVertex2f(-0.05f, 0.2f);
    glVertex2f(-0.03f, 0.2f);
///////////////////////

     glColor3ub(38, 78, 47);//right house(1)from right
    glVertex2f(0.92f, 0.2f);
    glVertex2f(0.92f, 0.7f);
    glVertex2f(0.82f, 0.7f);
    glVertex2f(0.82f, 0.2f);
glColor3ub(237, 255, 261);
    glVertex2f(0.90f, 0.25f);//window(down)
    glVertex2f(0.90f, 0.35f);
    glVertex2f(0.84f, 0.35f);
    glVertex2f(0.84f, 0.25f);

    glVertex2f(0.90f, 0.4f);//window(middle)
    glVertex2f(0.90f, 0.5f);
    glVertex2f(0.84f, 0.5f);
    glVertex2f(0.84f, 0.4f);

     glVertex2f(0.90f, 0.55f);//window(up)
    glVertex2f(0.90f, 0.65f);
    glVertex2f(0.84f, 0.65f);
    glVertex2f(0.84f, 0.55f);

     glColor3ub(31, 65, 39); //right house side line(1)
    glVertex2f(0.82f, 0.7f);
    glVertex2f(0.79f, 0.65f);
    glVertex2f(0.79f, 0.2f);
    glVertex2f(0.82f, 0.2f);
/////////////////////


      glColor3ub(127, 58, 102); //right house(2)
    glVertex2f(0.73f, 0.2f);
    glVertex2f(0.73f, 0.67f);
    glVertex2f(0.63f, 0.67f);
    glVertex2f(0.63f, 0.2f);
glColor3ub(237, 255, 261);
    glVertex2f(0.71f, 0.23f);//window(down)
    glVertex2f(0.71f, 0.33f);
    glVertex2f(0.65f, 0.33f);
    glVertex2f(0.65f, 0.23f);

    glVertex2f(0.71f, 0.38f);//window(middle)
    glVertex2f(0.71f, 0.48f);
    glVertex2f(0.65f, 0.48f);
    glVertex2f(0.65f, 0.38f);

     glVertex2f(0.71f, 0.53f);//window(up)
    glVertex2f(0.71f, 0.63f);
    glVertex2f(0.65f, 0.63f);
    glVertex2f(0.65f, 0.53f);
     glColor3ub(101, 48, 81); //right house side line(2)
    glVertex2f(0.63f, 0.67f);
    glVertex2f(0.60f, 0.65f);
    glVertex2f(0.60f, 0.2f);
    glVertex2f(0.63f, 0.2f);

///////////////
     glColor3ub(128, 168, 134); //right house(3)
    glVertex2f(0.57f, 0.2f);
    glVertex2f(0.57f, 0.7f);
    glVertex2f(0.47f, 0.7f);
    glVertex2f(0.47f, 0.2f);
glColor3ub(237, 255, 261);
    glVertex2f(0.55f, 0.25f);//window(down)
    glVertex2f(0.55f, 0.35f);
    glVertex2f(0.49f, 0.35f);
    glVertex2f(0.49f, 0.25f);

    glVertex2f(0.55f, 0.4f);//window(middle)
    glVertex2f(0.55f, 0.5f);
    glVertex2f(0.49f, 0.5f);
    glVertex2f(0.49f, 0.4f);

     glVertex2f(0.55f, 0.55f);//window(up)
    glVertex2f(0.55f, 0.65f);
    glVertex2f(0.49f, 0.65f);
    glVertex2f(0.49f, 0.55f);

      glColor3ub(104, 144, 110); //right house side line(3)
    glVertex2f(0.47f, 0.7f);
    glVertex2f(0.44f, 0.65f);
    glVertex2f(0.44f, 0.2f);
    glVertex2f(0.47f, 0.2f);
//////////////////

      glColor3ub(9, 159, 139); //left house(4)
    glVertex2f(0.40f, 0.2f);
    glVertex2f(0.40f, 0.6f);
    glVertex2f(0.31f, 0.6f);
    glVertex2f(0.31f, 0.2f);
glColor3ub(237, 255, 261);
    glVertex2f(0.38f, 0.25f);//window(down)
    glVertex2f(0.38f, 0.37f);
    glVertex2f(0.33f, 0.37f);
    glVertex2f(0.33f, 0.25f);

    glVertex2f(0.38f, 0.42f);//window(middle)
    glVertex2f(0.38f, 0.54f);
    glVertex2f(0.33f, 0.54f);
    glVertex2f(0.33f, 0.42f);
     glColor3ub(3, 131, 114); //left house side line(4)
    glVertex2f(0.31f, 0.6f);
    glVertex2f(0.29f, 0.55f);
    glVertex2f(0.29f, 0.2f);
    glVertex2f(0.31f, 0.2f);
//////////////////
         glColor3ub(191, 21, 21); //right house(5)
    glVertex2f(0.26f, 0.2f);
    glVertex2f(0.26f, 0.77f);
    glVertex2f(0.16f, 0.77f);
    glVertex2f(0.16f, 0.2f);
glColor3ub(237, 255, 261);
    glVertex2f(0.24f, 0.25f);//window(down)
    glVertex2f(0.24f, 0.37f);
    glVertex2f(0.18f, 0.37f);
    glVertex2f(0.18f, 0.25f);

    glVertex2f(0.24f, 0.42f);//window(middle)
    glVertex2f(0.24f, 0.54f);
    glVertex2f(0.18f, 0.54f);
    glVertex2f(0.18f, 0.42f);
     glVertex2f(0.24f, 0.59f);//window(up)
    glVertex2f(0.24f, 0.71f);
    glVertex2f(0.18f, 0.71f);
    glVertex2f(0.18f, 0.59f);
    glColor3ub(166, 17, 17); //right house side line(5)
    glVertex2f(0.16f, 0.77f);
    glVertex2f(0.13f, 0.74f);
    glVertex2f(0.13f, 0.2f);
    glVertex2f(0.16f, 0.2f);

    glEnd();
}




void river(){


    glBegin(GL_QUADS);
    glColor3ub(55, 159, 212);  //ocean
    glVertex2f(-1.0f, -0.3f);

	glColor3f(0.0f,0.125f,0.761f);
	glVertex2f(1.0f, -0.3f);

	glColor3f(0.22f,0.675f,0.925f);
	glVertex2f(1.0f, 0.2f);

	glColor3f(0.231f,0.725f,1.0f);
	glVertex2f(-1.0f, 0.2f);

	glEnd();
}
void nightriver(){

    glBegin(GL_QUADS);
    glColor3ub(6,66,115);  //ocean

	glVertex2f(-1.0f, -0.3f);
	glVertex2f(1.0f, -0.3f);
	glVertex2f(1.0f, 0.2f);
	glVertex2f(-1.0f, 0.2f);

	glEnd();
}

void road(){

 //Right Car
    glBegin(GL_QUADS);
    glColor3f(0.337f,0.314f,0.318f); //grey road
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(-1.0f, -0.3f);

    glColor3f(1.0f,1.0f,1.0f); //middle white 1
    glVertex2f(-0.9f, -0.70f);
    glVertex2f(-0.85f, -0.75f);
    glVertex2f(-0.70f, -0.75f);
    glVertex2f(-0.75f, -0.70f);

    glColor3f(1.0f,1.0f,1.0f); //middle white 2
    glVertex2f(-0.55f, -0.70f);
    glVertex2f(-0.50f, -0.75f);
    glVertex2f(-0.35f, -0.75f);
    glVertex2f(-0.40f, -0.70f);

    glColor3f(1.0f,1.0f,1.0f); //middle white 4
    glVertex2f(0.15f, -0.70f);
    glVertex2f(0.20f, -0.75f);
    glVertex2f(0.35f, -0.75f);
    glVertex2f(0.30f, -0.70f);

    glColor3f(1.0f,1.0f,1.0f); //middle white 3
    glVertex2f(-0.05f, -0.70f);
    glVertex2f(-0.00f, -0.75f);
    glVertex2f(-0.15f, -0.75f);
    glVertex2f(-0.20f, -0.70f);

    glColor3f(1.0f,1.0f,1.0f); //middle white 5
    glVertex2f(0.45f, -0.70f);
    glVertex2f(0.50f, -0.75f);
    glVertex2f(0.65f, -0.75f);
    glVertex2f(0.60f, -0.70f);

    glColor3f(1.0f,1.0f,1.0f); //middle white 6
    glVertex2f(0.75f, -0.70f);
    glVertex2f(0.80f, -0.75f);
    glVertex2f(0.95f, -0.75f);
    glVertex2f(0.90f, -0.70f);

    glColor3f(1.0f,1.0f,1.0f); //white upper road
    glVertex2f(1.0f, -0.38f);
    glVertex2f(-1.0f, -0.38f);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(1.0f, -0.3f);

    glColor3f(0.0f,0.0f,0.0f); // upper black
    glVertex2f(-0.75f, -0.38f);
    glVertex2f(-0.9f, -0.38f);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-0.75f, -0.3f);

    glColor3f(0.0f,0.0f,0.0f); //black
    glVertex2f(-0.45f, -0.38f);
    glVertex2f(-0.60f, -0.38f);
    glVertex2f(-0.60f, -0.3f);
    glVertex2f(-0.45f, -0.3f);
   glEnd();




glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f); //black
    glVertex2f(-0.15f, -0.38f);
    glVertex2f(-0.30f, -0.38f);
    glVertex2f(-0.30f, -0.3f);
    glVertex2f(-0.15f, -0.3f);

    glColor3f(0.0f,0.0f,0.0f); //black
    glVertex2f(0.15f, -0.38f);
    glVertex2f(0.00f, -0.38f);
    glVertex2f(0.00f, -0.3f);
    glVertex2f(0.15f, -0.3f);

    glColor3f(0.0f,0.0f,0.0f); //black
    glVertex2f(0.45f, -0.38f);
    glVertex2f(0.30f, -0.38f);
    glVertex2f(0.30f, -0.3f);
    glVertex2f(0.45f, -0.3f);

    glColor3f(0.0f,0.0f,0.0f); //black
    glVertex2f(0.75f, -0.38f);
    glVertex2f(0.60f, -0.38f);
    glVertex2f(0.60f, -0.3f);
    glVertex2f(0.75f, -0.3f);

    glColor3f(0.0f,0.0f,0.0f); //black
    glVertex2f(1.0f, -0.38f);
    glVertex2f(0.90f, -0.38f);
    glVertex2f(0.90f, -0.3f);
    glVertex2f(1.0f, -0.3f);

    glColor3f(1.0f,1.0f,1.0f); //white lower road
    glVertex2f(1.0f, -0.96f);
    glVertex2f(-1.0f, -0.96f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);

    glColor3f(0.0f,0.0f,0.0f); //black
    glVertex2f(-1.0f, -0.96f);
    glVertex2f(-0.9f, -0.96f);
    glVertex2f(-0.9f, -1.0f);
    glVertex2f(-1.0f, -1.0f);

    glColor3f(0.0f,0.0f,0.0f); //black
    glVertex2f(-0.70f, -0.96f);
    glVertex2f(-0.55f, -0.96f);
    glVertex2f(-0.55f, -1.0f);
    glVertex2f(-0.70f, -1.0f);

    glColor3f(0.0f,0.0f,0.0f); //black
    glVertex2f(-0.40f, -0.96f);
    glVertex2f(-0.25f, -0.96f);
    glVertex2f(-0.25f, -1.0f);
    glVertex2f(-0.40f, -1.0f);

    glColor3f(0.0f,0.0f,0.0f); //black
    glVertex2f(-0.10f, -0.96f);
    glVertex2f(0.05f, -0.96f);
    glVertex2f(0.05f, -1.0f);
    glVertex2f(-0.10f, -1.0f);

    glColor3f(0.0f,0.0f,0.0f); //black
    glVertex2f(0.40f, -0.96f);
    glVertex2f(0.25f, -0.96f);
    glVertex2f(0.25f, -1.0f);
    glVertex2f(0.40f, -1.0f);

    glColor3f(0.0f,0.0f,0.0f); //black
    glVertex2f(0.70f, -0.96f);
    glVertex2f(0.55f, -0.96f);
    glVertex2f(0.55f, -1.0f);
    glVertex2f(0.70f, -1.0f);

    glColor3f(0.0f,0.0f,0.0f); //black
    glVertex2f(1.0f, -0.96f);
    glVertex2f(0.9f, -0.96f);
    glVertex2f(0.9f, -1.0f);
    glVertex2f(1.0f, -1.0f);


   glEnd();



}

void lamppost(){

 //Lamppost

     glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost
    glVertex2f(-0.85f, -0.3f);
    glVertex2f(-0.85f, -0.1f);
    glVertex2f(-0.87f, -0.1f);
    glVertex2f(-0.87f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
  glColor3ub(255,255,255);
 glVertex2f(-0.86f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.86, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();
 ////////////
      glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost
    glVertex2f(-0.65f, -0.3f);
    glVertex2f(-0.65f, -0.1f);
    glVertex2f(-0.67f, -0.1f);
    glVertex2f(-0.67f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
  glColor3ub(255,255,255);
 glVertex2f(-0.66f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.66, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();
 ////////////
    glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost
    glVertex2f(-0.45f, -0.3f);
    glVertex2f(-0.45f, -0.1f);
    glVertex2f(-0.47f, -0.1f);
    glVertex2f(-0.47f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
 glColor3ub(255,255,255);
 glVertex2f(-0.46f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.46, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();

///////////////////////
 glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost 2
    glVertex2f(-0.25f, -0.3f);
    glVertex2f(-0.25f, -0.1f);
    glVertex2f(-0.27f, -0.1f);
    glVertex2f(-0.27f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
  glColor3ub(255,255,255);
 glVertex2f(-0.26f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.26, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();
 /////////////////////
  glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost 3
    glVertex2f(-0.05f, -0.3f);
    glVertex2f(-0.05f, -0.1f);
    glVertex2f(-0.07f, -0.1f);
    glVertex2f(-0.07f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
  glColor3ub(255,255,255);
 glVertex2f(-0.06f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.06, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();

 //////////////////
  glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost 4
    glVertex2f(0.15f, -0.3f);
    glVertex2f(0.15f, -0.1f);
    glVertex2f(0.17f, -0.1f);
    glVertex2f(0.17f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
  glColor3ub(255,255,255);
 glVertex2f(0.16f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) + 0.16, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();
 ////////////
  glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost 5
    glVertex2f(0.35f, -0.3f);
    glVertex2f(0.35f, -0.1f);
    glVertex2f(0.37f, -0.1f);
    glVertex2f(0.37f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
  glColor3ub(255,255,255);
 glVertex2f(0.36f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) + 0.36, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();
 //////////////

  glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost 6
    glVertex2f(0.55f, -0.3f);
    glVertex2f(0.55f, -0.1f);
    glVertex2f(0.57f, -0.1f);
    glVertex2f(0.57f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
 glColor3ub(255,255,255);
 glVertex2f(0.56f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) + 0.56, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();
 /////////////
  glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost 7
    glVertex2f(0.75f, -0.3f);
    glVertex2f(0.75f, -0.1f);
    glVertex2f(0.77f, -0.1f);
    glVertex2f(0.77f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
 glColor3ub(255,255,255);
 glVertex2f(0.76f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) + 0.76, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();
 //////////////
 glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost 8
    glVertex2f(0.95f, -0.3f);
    glVertex2f(0.95f, -0.1f);
    glVertex2f(0.97f, -0.1f);
    glVertex2f(0.97f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
 glColor3ub(255,255,255);
 glVertex2f(0.96f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) + 0.96, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();
 /////////////////

}

void nightlamppost(){

 //Lamppost

     glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost
    glVertex2f(-0.85f, -0.3f);
    glVertex2f(-0.85f, -0.1f);
    glVertex2f(-0.87f, -0.1f);
    glVertex2f(-0.87f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
  glColor3ub(255,230,0);
 glVertex2f(-0.86f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.86, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();
 ////////////
      glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost
    glVertex2f(-0.65f, -0.3f);
    glVertex2f(-0.65f, -0.1f);
    glVertex2f(-0.67f, -0.1f);
    glVertex2f(-0.67f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
  glColor3ub(255,230,0);
 glVertex2f(-0.66f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.66, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();
 ////////////
    glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost
    glVertex2f(-0.45f, -0.3f);
    glVertex2f(-0.45f, -0.1f);
    glVertex2f(-0.47f, -0.1f);
    glVertex2f(-0.47f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
 glColor3ub(255,230,0);
 glVertex2f(-0.46f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.46, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();

///////////////////////
 glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost 2
    glVertex2f(-0.25f, -0.3f);
    glVertex2f(-0.25f, -0.1f);
    glVertex2f(-0.27f, -0.1f);
    glVertex2f(-0.27f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
  glColor3ub(255,230,0);
 glVertex2f(-0.26f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.26, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();
 /////////////////////
  glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost 3
    glVertex2f(-0.05f, -0.3f);
    glVertex2f(-0.05f, -0.1f);
    glVertex2f(-0.07f, -0.1f);
    glVertex2f(-0.07f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
  glColor3ub(255,230,0);
 glVertex2f(-0.06f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.06, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();

 //////////////////
  glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost 4
    glVertex2f(0.15f, -0.3f);
    glVertex2f(0.15f, -0.1f);
    glVertex2f(0.17f, -0.1f);
    glVertex2f(0.17f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
  glColor3ub(255,230,0);
 glVertex2f(0.16f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) + 0.16, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();
 ////////////
  glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost 5
    glVertex2f(0.35f, -0.3f);
    glVertex2f(0.35f, -0.1f);
    glVertex2f(0.37f, -0.1f);
    glVertex2f(0.37f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
  glColor3ub(255,230,0);
 glVertex2f(0.36f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) + 0.36, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();
 //////////////

  glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost 6
    glVertex2f(0.55f, -0.3f);
    glVertex2f(0.55f, -0.1f);
    glVertex2f(0.57f, -0.1f);
    glVertex2f(0.57f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
glColor3ub(255,230,0);
 glVertex2f(0.56f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) + 0.56, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();
 /////////////
  glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost 7
    glVertex2f(0.75f, -0.3f);
    glVertex2f(0.75f, -0.1f);
    glVertex2f(0.77f, -0.1f);
    glVertex2f(0.77f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
glColor3ub(255,230,0);
 glVertex2f(0.76f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) + 0.76, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();
 //////////////
 glBegin(GL_QUADS);
     glColor3f(0.2f,0.4f,0.4f); //left lamppost 8
    glVertex2f(0.95f, -0.3f);
    glVertex2f(0.95f, -0.1f);
    glVertex2f(0.97f, -0.1f);
    glVertex2f(0.97f, -0.3f);
glEnd();
    glBegin(GL_TRIANGLE_FAN);//middle wheel
 glColor3ub(255,230,0);
 glVertex2f(0.96f, -0.1f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) + 0.96, 0.05*sin(M_PI * i / 180.0) - 0.1);

 glEnd();
 /////////////////
}

void car4(){
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
 glBegin(GL_QUADS);
  //night car
    glColor3f(0.082f,0.192f,0.494f); //blue colour
    glVertex2f(0.00f, -0.25f);
    glVertex2f(-0.05f, -0.4f);
    glVertex2f(0.20f, -0.4f);
    glVertex2f(0.15f, -0.25f);

    glColor3f(0.082f,0.192f,0.494f); //middle cream colour
    glVertex2f(-0.05f, -0.4f);
    glVertex2f(-0.10f, -0.43f);
    glVertex2f(0.25f, -0.43f);
    glVertex2f(0.20f, -0.4f);


    glColor3f(0.082f,0.192f,0.494f); //bottom cream colour
    glVertex2f(-0.10f, -0.43f);
    glVertex2f(-0.10f, -0.53f);
    glVertex2f(0.25f, -0.53f);
    glVertex2f(0.25f, -0.43f);


    glColor3f(0.984f,0.694f,0.09f); //left yellow light
    glVertex2f(-0.10f, -0.43f);
    glVertex2f(-0.10f, -0.49f);
    glVertex2f(-0.07f, -0.49f);
    glVertex2f(-0.07f, -0.43f);

    glColor3f(0.984f,0.694f,0.09f); //right yellow light
    glVertex2f(0.22f, -0.43f);
    glVertex2f(0.22f, -0.49f);
    glVertex2f(0.25f, -0.49f);
    glVertex2f(0.25f, -0.43f);

    glColor3f(0.263f,0.776f,0.859f); //right window
    glVertex2f(0.09f, -0.28f);
    glVertex2f(0.09f, -0.37f);
    glVertex2f(0.18f, -0.37f);
    glVertex2f(0.15f, -0.28f);

    glColor3f(0.263f,0.776f,0.859f); //left window
    glVertex2f(0.00f, -0.28f);
    glVertex2f(-0.03f, -0.37f);
    glVertex2f(0.06f, -0.37f);
    glVertex2f(0.06f, -0.28f);
    glEnd();



 glBegin(GL_TRIANGLE_FAN);//middle wheel
  glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(0.18f, -0.55f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) + 0.18, 0.05*sin(M_PI * i / 180.0) - 0.55);

 glEnd();

 glBegin(GL_TRIANGLE_FAN);//middle wheel
  glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(-0.03f, -0.55f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.03, 0.05*sin(M_PI * i / 180.0) - 0.55);

 glEnd();
 glPopMatrix();

}


void car3(){
glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
 glBegin(GL_QUADS);
  //middle car
    glColor3f(0.898f,0.894f,0.886f); //cream colour
    glVertex2f(0.00f, -0.25f);
    glVertex2f(-0.05f, -0.4f);
    glVertex2f(0.20f, -0.4f);
    glVertex2f(0.15f, -0.25f);

    glColor3f(0.898f,0.894f,0.886f); //middle cream colour
    glVertex2f(-0.05f, -0.4f);
    glVertex2f(-0.10f, -0.43f);
    glVertex2f(0.25f, -0.43f);
    glVertex2f(0.20f, -0.4f);


    glColor3f(0.898f,0.894f,0.886f); //bottom cream colour
    glVertex2f(-0.10f, -0.43f);
    glVertex2f(-0.10f, -0.53f);
    glVertex2f(0.25f, -0.53f);
    glVertex2f(0.25f, -0.43f);

    glColor3f(1.0,0.0f,0.0f); //red light
    glVertex2f(0.05f, -0.22f);
    glVertex2f(0.05f, -0.25f);
    glVertex2f(0.10f, -0.25f);
    glVertex2f(0.10f, -0.22f);


    glColor3f(0.984f,0.694f,0.09f); //left yellow light
    glVertex2f(-0.10f, -0.43f);
    glVertex2f(-0.10f, -0.49f);
    glVertex2f(-0.07f, -0.49f);
    glVertex2f(-0.07f, -0.43f);

    glColor3f(0.984f,0.694f,0.09f); //right yellow light
    glVertex2f(0.22f, -0.43f);
    glVertex2f(0.22f, -0.49f);
    glVertex2f(0.25f, -0.49f);
    glVertex2f(0.25f, -0.43f);

    glColor3f(0.263f,0.776f,0.859f); //right window
    glVertex2f(0.09f, -0.28f);
    glVertex2f(0.09f, -0.37f);
    glVertex2f(0.18f, -0.37f);
    glVertex2f(0.15f, -0.28f);

    glColor3f(0.263f,0.776f,0.859f); //left window
    glVertex2f(0.00f, -0.28f);
    glVertex2f(-0.03f, -0.37f);
    glVertex2f(0.06f, -0.37f);
    glVertex2f(0.06f, -0.28f);
    glEnd();



 glBegin(GL_TRIANGLE_FAN);//middle wheel
  glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(0.18f, -0.55f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) + 0.18, 0.05*sin(M_PI * i / 180.0) - 0.55);

 glEnd();

 glBegin(GL_TRIANGLE_FAN);//middle wheel
  glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(-0.03f, -0.55f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.03, 0.05*sin(M_PI * i / 180.0) - 0.55);

 glEnd();
 glPopMatrix();

}


void car1(){
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);

   glBegin(GL_QUADS);
   glColor3f(0.294f,0.0f,0.51f); //purple
    glVertex2f(0.9f, -0.85f);
    glVertex2f(0.9f, -0.7f);
    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.7f, -0.85f);

    glColor3f(0.294f,0.0f,0.51f); //purple
    glVertex2f(0.7f, -0.85f);
    glVertex2f(0.7f, -0.82f);
    glVertex2f(0.67f, -0.82f);
    glVertex2f(0.67f, -0.85f);

    glColor3f(0.294f,0.0f,0.51f); //purple
    glVertex2f(0.67f, -0.7f);
    glVertex2f(0.6f, -0.7f);
    glVertex2f(0.6f, -0.85f);
    glVertex2f(0.67f, -0.85f);

    glColor3f(0.8f, 0.99f, 1.7f); //light blue
    glVertex2f(0.67f, -0.7f);
    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.7f, -0.82f);
    glVertex2f(0.67f, -0.82f);


    glColor3f(0.5f, 0.0f, 0.7f); // upper purple//
    glVertex2f(0.67f, -0.7f);
    glVertex2f(0.67f, -0.6f);
    glVertex2f(0.9f, -0.6f);
    glVertex2f(0.9f, -0.7f);

    glColor3f(1.0f,1.0f,0.761f); //skin colour
    glVertex2f(0.7f, -0.62f);
    glVertex2f(0.7f, -0.68f);
    glVertex2f(0.76f, -0.68f);
    glVertex2f(0.76f, -0.62f);

    glColor3f(1.0f,1.0f,0.761f); //skin colour
    glVertex2f(0.78f, -0.62f);
    glVertex2f(0.84f, -0.62f);
    glVertex2f(0.84f, -0.68f);
    glVertex2f(0.78f, -0.68f);

glColor3f(1.0f,1.0f,0.761f); //skin colour
    glVertex2f(0.59f, -0.8f);
    glVertex2f(0.59f, -0.83f);
    glVertex2f(0.6f, -0.83f);
    glVertex2f(0.6f, -0.8f);
glEnd();

glBegin(GL_TRIANGLES);

    glColor3f(0.8f, 0.99f, 1.7f); //light blue
    glVertex2f(0.6f, -0.7f);
    glVertex2f(0.67f, -0.6f);
    glVertex2f(0.67f, -0.7f);
    glEnd();
//right car wheel
glBegin(GL_TRIANGLE_FAN);
  glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(0.85f, -0.85f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) + 0.85, 0.05*sin(M_PI * i / 180.0) - 0.85);
glEnd();


glBegin(GL_TRIANGLE_FAN);
  glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(0.65f, -0.85f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) + 0.65, 0.05*sin(M_PI * i / 180.0) - 0.85);

 glEnd();
 glPopMatrix();
}

void car2(){
    //left car
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.624f,0.0f,0.059f); //red
    glVertex2f(-0.95f, -0.25f);
    glVertex2f(-0.95f, -0.4f);
    glVertex2f(-0.50f, -0.4f);
    glVertex2f(-0.50f, -0.25f);



    glColor3f(0.0f,0.0f,0.502f); //blue
    glVertex2f(-0.95f, -0.4f);
    glVertex2f(-0.95f, -0.57f);
    glVertex2f(-0.50f, -0.57f);
    glVertex2f(-0.50f, -0.4f);



    glColor3f(0.8f, 0.99f, 1.7f); //glass
    glVertex2f(-0.62f, -0.28f);
    glVertex2f(-0.62f, -0.4f);
    glVertex2f(-0.50f, -0.4f);
    glVertex2f(-0.50f, -0.28f);



    glColor3f(0.8f, 0.99f, 1.7f); //door
    glVertex2f(-0.64f, -0.4f);
    glVertex2f(-0.64f, -0.53f);
    glVertex2f(-0.62f, -0.53f);
    glVertex2f(-0.62f, -0.4f);



    glColor3f(1.0f,1.0f,0.761f); //window 1
    glVertex2f(-0.71f, -0.28f);
    glVertex2f(-0.71f, -0.35f);
    glVertex2f(-0.66f, -0.35f);
    glVertex2f(-0.66f, -0.28f);



    glColor3f(1.0f,1.0f,0.761f); //window 2
    glVertex2f(-0.81f, -0.28f);
    glVertex2f(-0.81f, -0.35f);
    glVertex2f(-0.76f, -0.35f);
    glVertex2f(-0.76f, -0.28f);



    glColor3f(1.0f,1.0f,0.761f); //window 3
    glVertex2f(-0.91f, -0.28f);
    glVertex2f(-0.91f, -0.35f);
    glVertex2f(-0.86f, -0.35f);
    glVertex2f(-0.86f, -0.28f);
    glEnd();



//left car wheel
 glBegin(GL_TRIANGLE_FAN);
  glColor3f(0.0f,0.0f,0.0f);



 glVertex2f(-0.85f, -0.55f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.85, 0.05*sin(M_PI * i / 180.0) - 0.55);
glEnd();



glBegin(GL_TRIANGLE_FAN);
  glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(-0.60f, -0.55f);
 for(double i = 0.0f; i <= 360; i++)
 glVertex2f(0.04*cos(M_PI * i / 180.0) - 0.60, 0.05*sin(M_PI * i / 180.0) - 0.55);



 glEnd();
 glPopMatrix();

}

void sun(){
    glBegin(GL_TRIANGLE_FAN);//SUN
    glColor3ub(255, 247, 0);

    glVertex2f(0.6, 0.75);
     for(i = 0.0f; i <= 360; i++)
    glVertex2f(0.12*cos(M_PI * i / 180.0) + 0.6, 0.15*sin(M_PI * i / 180.0) + 0.75);

    glEnd();




}
void ship(){
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);



	glBegin(GL_QUADS);
   glColor3f(0.506f,0.02f,0.255f);
   glVertex2f(0.3f, 0.0f);
   glVertex2f(-0.3f, 0.0f);
   glColor3f(0.1f, 0.3f, 0.5f);
   glVertex2f(-0.3f, 0.3f);
   glVertex2f(0.6f, 0.3f);



   glColor3f(0.1f, 0.1f, 0.3f);
   glVertex2f(-0.2f, 0.3f);
   glVertex2f(0.4f, 0.3f);
   glColor3f(0.1f, 0.0f, 0.7f);
   glVertex2f(0.3f, 0.5f);
   glVertex2f(-0.2f, 0.5f);



   glColor3f(0.7f, 0.7f, 0.5f);
   glVertex2f(-0.1f, 0.4f);
   glVertex2f(0.01f, 0.4f);
   glVertex2f(0.01f, 0.3f);
   glVertex2f(-0.1f, 0.3f);



   glColor3f(0.7f, 0.7f, 0.5f);
   glVertex2f(0.1f, 0.4f);
   glVertex2f(0.2f, 0.4f);
   glVertex2f(0.2f, 0.3f);
   glVertex2f(0.1f, 0.3f);






   glEnd();


	glPopMatrix();

}
void nightboat(){

////////////////AJMAYEEN ADIL PART from here
     glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
glBegin(GL_POLYGON_BIT);
 glColor3ub(230,360,87);
 glVertex2f(0.3f,-0.2f);
 glColor3ub(130,160,87);
 glVertex2f(0.9f,-0.2f);
 glVertex2f(0.4f,-0.3f);
 glVertex2f(0.8f,-0.3f);
 glEnd();
 glBegin(GL_POLYGON_BIT);
 glColor3f(0.75f,0.75f,0.75f);
  glVertex2f(0.4f,-0.13f);
   glVertex2f(0.8f,-0.13f);
   glColor3ub(30,250,87);
   glVertex2f(0.4f,-0.2f);
    glVertex2f(0.8f,-0.2f);
    glEnd();
    	glPopMatrix();
/////////To here//////////
 glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_QUADS);
     glColor3ub(230,160,87);  //boat

	glVertex2f(0.3f, 0.0f);
	glColor3ub(193,140,77);
	glVertex2f(0.8f, 0.0f);
	glColor3ub(180,240,284);
	glVertex2f(1.0f, 0.2f);
	glVertex2f(0.1f, 0.2f);

	glEnd();



    glBegin(GL_QUADS);
    glColor3ub(168,168,168);

	glVertex2f(0.3f, 0.2f);
	glVertex2f(0.8f, 0.2f);
	glVertex2f(0.8f, 0.25f);
	glVertex2f(0.3f, 0.25f);

    glVertex2f(0.4f, 0.25f);
	glVertex2f(0.7f, 0.25f);
	glVertex2f(0.7f, 0.3f);
	glVertex2f(0.4f, 0.3f);

	glVertex2f(0.44f, 0.3f);
	glVertex2f(0.53f, 0.3f);
	glVertex2f(0.53f, 0.4f);
	glVertex2f(0.44f, 0.4f);

	glVertex2f(0.57f, 0.3f);
	glVertex2f(0.65f, 0.3f);
	glVertex2f(0.65f, 0.38f);
	glVertex2f(0.57f, 0.38f);


	glEnd();
	glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.46f, 0.25f);
	glVertex2f(0.46f, 0.3f);
	glVertex2f(0.505f, 0.3f);
	glVertex2f(0.505f, 0.25f);

	glVertex2f(0.59f, 0.25f);
	glVertex2f(0.59f, 0.3f);
	glVertex2f(0.63f, 0.3f);
	glVertex2f(0.63f, 0.25f);

	glEnd();


	glPopMatrix();


}
void nightSky(){

    glBegin(GL_QUADS);
    glColor3ub(7, 11, 52); //sky

	glVertex2f(-1.0f, 0.2f);
	glVertex2f(1.0f, 0.2f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);


	glEnd();
}

////PLANE
void plane(){
     glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);

	glBegin(GL_QUADS);
glColor3ub(184, 207, 210); //plane body
	glVertex2f(0.2f, 0.82f);
	glVertex2f(0.47f, 0.82f);
	glVertex2f(0.47f, 0.92f);
	glVertex2f(0.3f, 0.92f);



glColor3ub(184, 206, 210); //back
	glVertex2f(0.47f, 0.82f);
	glVertex2f(0.52f, 0.82f);
	glVertex2f(0.54f, 0.94f);
	glVertex2f(0.47f, 0.92f);

	 glColor3ub(150, 168, 172); //wing
	glVertex2f(0.3f, 0.86f);
	glVertex2f(0.35f, 0.86f);
	glVertex2f(0.43f, 0.74f);
	glVertex2f(0.4f, 0.7f);

	 glColor3ub(150, 168, 172); //plane wing back
	glVertex2f(0.36f, 0.92f);
	glVertex2f(0.4f, 0.92f);
	glVertex2f(0.43f, 0.96f);
	glVertex2f(0.38f, 0.94f);


glColor3ub(255, 255, 255); //window
	glVertex2f(0.3f, 0.87f);
	glVertex2f(0.34f, 0.87f);
	glVertex2f(0.34f, 0.91f);
	glVertex2f(0.3f, 0.91f);

	glVertex2f(0.36f, 0.87f);
	glVertex2f(0.4f, 0.87f);
	glVertex2f(0.4f, 0.91f);
	glVertex2f(0.36f, 0.91f);

	glVertex2f(0.42f, 0.87f);
	glVertex2f(0.46f, 0.87f);
	glVertex2f(0.46f, 0.91f);
	glVertex2f(0.42f, 0.91f);
	glEnd();
	glPopMatrix();


	}

	void nightplane(){
     glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);

	glBegin(GL_QUADS);
glColor3ub(219, 127, 102); //plane body
	glVertex2f(0.2f, 0.82f);
	glVertex2f(0.47f, 0.82f);
	glVertex2f(0.47f, 0.92f);
	glVertex2f(0.3f, 0.92f);



glColor3ub(219, 127, 102); //back
	glVertex2f(0.47f, 0.82f);
	glVertex2f(0.52f, 0.82f);
	glVertex2f(0.54f, 0.94f);
	glVertex2f(0.47f, 0.92f);

	 glColor3ub(200, 120, 100); //wing
	glVertex2f(0.3f, 0.86f);
	glVertex2f(0.35f, 0.86f);
	glVertex2f(0.43f, 0.74f);
	glVertex2f(0.4f, 0.7f);

	 glColor3ub(200, 120, 100); //plane wing back
	glVertex2f(0.36f, 0.92f);
	glVertex2f(0.4f, 0.92f);
	glVertex2f(0.43f, 0.96f);
	glVertex2f(0.38f, 0.94f);


glColor3ub(255, 255, 255); //window
	glVertex2f(0.3f, 0.87f);
	glVertex2f(0.34f, 0.87f);
	glVertex2f(0.34f, 0.91f);
	glVertex2f(0.3f, 0.91f);

	glVertex2f(0.36f, 0.87f);
	glVertex2f(0.4f, 0.87f);
	glVertex2f(0.4f, 0.91f);
	glVertex2f(0.36f, 0.91f);

	glVertex2f(0.42f, 0.87f);
	glVertex2f(0.46f, 0.87f);
	glVertex2f(0.46f, 0.91f);
	glVertex2f(0.42f, 0.91f);
	glEnd();
	glPopMatrix();


	}
void star(){
    glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(0.10f,0.80f);
	glVertex2f(0.15f,0.9f);
	glVertex2f(0.2f,0.8f);
	glVertex2f(0.25f,0.9f);
	glVertex2f(0.3f,0.8f);
	glVertex2f(0.35f,0.9f);
	glVertex2f(0.5f,0.9f);
	glVertex2f(0.55f,0.8f);
	glVertex2f(0.6f,0.9f);
	glVertex2f(0.65f,0.8f);
	glVertex2f(0.7f,0.9f);
	glVertex2f(0.75f,0.8f);
	glVertex2f(0.8f,0.9f);
	glVertex2f(0.85f,0.8f);
	glVertex2f(0.9f,0.9f);
	glVertex2f(0.95f,0.8f);
	glVertex2f(1.0f,0.9f);
	glVertex2f(0.0f,0.8f);
	glVertex2f(0.0f,0.9f);

	glVertex2f(-0.10f,0.80f);
	glVertex2f(-0.15f,0.9f);
	glVertex2f(-0.2f,0.8f);
	glVertex2f(-0.25f,0.9f);
	glVertex2f(-0.3f,0.8f);
	glVertex2f(-0.35f,0.9f);
	glVertex2f(-0.5f,0.9f);
	glVertex2f(-0.55f,0.8f);
	glVertex2f(-0.6f,0.9f);
	glVertex2f(-0.65f,0.8f);
	glVertex2f(-0.7f,0.9f);
	glVertex2f(-0.75f,0.8f);
	glVertex2f(-0.8f,0.9f);
	glVertex2f(-0.85f,0.8f);
	glVertex2f(-0.9f,0.9f);
	glVertex2f(-0.95f,0.8f);
	glVertex2f(-1.0f,0.9f);

	glVertex2f(0.10f,0.50f);
	glVertex2f(0.15f,0.7f);
	glVertex2f(0.2f,0.5f);
	glVertex2f(0.25f,0.7f);
	glVertex2f(0.3f,0.5f);
	glVertex2f(0.35f,0.7f);
	glVertex2f(0.5f,0.5f);
	glVertex2f(0.55f,0.7f);
	glVertex2f(0.6f,0.5f);
	glVertex2f(0.65f,0.7f);
	glVertex2f(0.7f,0.5f);
	glVertex2f(0.75f,0.7f);
	glVertex2f(0.8f,0.5f);
	glVertex2f(0.85f,0.7f);
	glVertex2f(0.9f,0.5f);
	glVertex2f(0.95f,0.7f);
	glVertex2f(1.0f,0.5f);

	glVertex2f(0.10f,-0.50f);
	glVertex2f(0.15f,-0.7f);
	glVertex2f(0.2f,-0.5f);
	glVertex2f(0.25f,-0.7f);
	glVertex2f(0.3f,-0.5f);
	glVertex2f(0.35f,-0.7f);
	glVertex2f(0.5f,-0.5f);
	glVertex2f(0.55f,-0.7f);
	glVertex2f(0.6f,-0.5f);
	glVertex2f(0.65f,-0.7f);
	glVertex2f(0.7f,-0.5f);
	glVertex2f(0.75f,-0.7f);
	glVertex2f(0.8f,-0.5f);
	glVertex2f(0.85f,-0.7f);
	glVertex2f(0.9f,-0.5f);
	glVertex2f(0.95f,-0.7f);
	glVertex2f(1.0f,-0.5f);
	glEnd();



}
void day() {

   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();
    sky();

    sun();


    plane();
    cloud1();
    river();
    building();
    bird();

    road();
    lamppost();
    car1();
    car2();
    car3();

    ship();


glFlush();


}

void moon(){
      glBegin(GL_TRIANGLE_FAN);//Moon
    glColor3ub(254, 252, 215);

    glVertex2f(-0.6, 0.75);
     for(i = 0.0f; i <= 360; i++)
    glVertex2f(0.10*cos(M_PI * i / 180.0) + (-0.6), 0.15*sin(M_PI * i / 180.0) + 0.75);

    glEnd();

    glBegin(GL_TRIANGLE_FAN);//Moon
    glColor3ub(218, 240, 245);

    glEnd();


}
void night() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    nightSky();
    nightriver();
    star();
    moon();
   nightbuilding();
   nightplane();
   nightboat();
   road();
   nightlamppost();
   car4();

   glFlush();

}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'p':
    speed = 0.0f;
    speed4=0.0f;
    break;
case 'b':
    speed = 0.05f;
    break;
case 'c':
     speed4=0.05f;
    break;

case'n':
       glutDisplayFunc(night);
        glutPostRedisplay();
        break;
case'd':
        glutDisplayFunc(day);
        glutPostRedisplay();
        break;

	}
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(1200, 600);
   glutInitWindowPosition(100, 150);
   glutCreateWindow("Group:G ; City Road Scenario");
   glutDisplayFunc(day);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(100, update, 0);
   glutTimerFunc(100, update2, 0);
   glutTimerFunc(100, update3, 0);
   glutTimerFunc(100, update4, 0);
   glutMainLoop();
   return 0;
}
