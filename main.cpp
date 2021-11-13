#include<windows.h>
#include<GL/glut.h>
#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#include <iostream>


using namespace std;

float PI=3.1416;
float _move = 0.0f;
float car_position2 = 0.0f;
float car_speed2 = 0.04f;
float twicePi = 2.0f * PI;
float cloud_position1 = 0.0f;
float cloud_speed = 0.01f;
float ship_position2 = 0.0f;
float ship_speed2 = 0.03f;
float ship_position3 = 0.0f;
float ship_speed3 = 0.03f;
float rain_position2=0.0f;
float rain_speed2=0.1f;
float speed = 0.04f;


void khalifa() {

    float x, y;
    int i;
	GLfloat radius;
	int triangleAmount =30;
	GLfloat twicePi = 2.0f * PI;

    glLoadIdentity();
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //display

    glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
    glVertex2f(-1.0f,-1.0f);
    glColor3ub(160, 160, 160);
    glVertex2f(1.0f,-1.0f);
    glColor3ub(102, 178, 255);
    glVertex2f(1.0f,1.0f);
    glColor3ub(102, 178, 255);
    glVertex2f(-1.0f,1.0f);
    glEnd();

     //Sun
		glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,165,0);
        x=.7f; y=.75f; radius =.05f;

	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;

				glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

   //cloud
   glPushMatrix();
   glTranslatef(cloud_position1,0.0f, 0.0f);
  	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glTranslatef(0.7f, 0.07f, 0.0f);
	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

	//AIUB Building
		glBegin(GL_TRIANGLE_FAN);
		glColor3ub(210,207,207);
        x=.21f; y=.15f; radius =.1f;
    //GLfloat radius = 0.8f; //radius
        twicePi = 2.0f * PI;

                    glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }

        glEnd();

    glLineWidth(5.5);
    glBegin(GL_LINES);
    glColor3ub(0, 128, 255);
    glVertex2f(0.1f, 0.1f);
    glVertex2f(0.3f, 0.1f);

    glVertex2f(0.1f, 0.14f);
    glVertex2f(0.3f, 0.14f);

    glVertex2f(0.1f, 0.18f);
    glVertex2f(0.3f, 0.18f);

    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.21f, 0.25f);
    glVertex2f(0.21f, 0.27f);
    glEnd();





    //grass
    glBegin(GL_QUADS);
    glColor3ub(100, 160, 0);
    glVertex2f(-1.0f,-0.3f);
    glColor3ub(100, 160, 0);
    glVertex2f(1.0f,-0.3f);
    glColor3ub(0, 96, 0);
    glVertex2f(1.0f,0.1f);
    glColor3ub(0, 96, 0);
    glVertex2f(-1.0f,0.1f);
    glEnd();

    //BUILDING CODE -START

     //middle1
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.225f, -0.2f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.210f, -0.2f);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.210f, -0.150f);
    glColor3ub(0, 153, 153);
    glVertex2f(0.225f, -0.150f);
    glEnd();

    //middle3
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.200f, -0.2f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.190f, -0.2f);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.190f, -0.115f);
    glColor3ub(0, 153, 153);
    glVertex2f(0.200f, -0.115f);
    glEnd();

    //middle2
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.175f, -0.2f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.17f, -0.2f);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.17f, -0.08f);
    glColor3ub(0, 153, 153);
    glVertex2f(0.175f, -0.08f);
    glEnd();


     //left
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.2f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.14f, -0.2f);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.14f, 0.05f);
    glColor3ub(0, 153, 153);
    glVertex2f(0.0f, 0.05f);
    glEnd();

    //right
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.2f);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.1f);
    glColor3ub(0, 153, 153);
    glVertex2f(0.150f, 0.1f);
    glColor3ub(96, 96, 96);
    glVertex2f(0.150f, -0.2f);
    glEnd();

    //left
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.2f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.12f, -0.2f);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.12f, 0.15f);
    glColor3ub(0, 153, 153);
    glVertex2f(0.0f, 0.15f);
    glEnd();

    //right
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.2f);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.2f);
    glColor3ub(0, 153, 153);
    glVertex2f(0.125f, 0.2f);
    glColor3ub(96, 96, 96);
    glVertex2f(0.125f, -0.2f);
    glEnd();

    //left
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.18f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.10f, -0.2f);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.10f, 0.25f);
    glColor3ub(0, 153, 153);
    glVertex2f(0.0f, 0.25f);
    glEnd();

    //right
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.18f);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.3f);
    glColor3ub(0, 153, 153);
    glVertex2f(0.1f, 0.3f);
    glColor3ub(96, 96, 96);
    glVertex2f(0.1f, -0.2f);
    glEnd();

    //left
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.18f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.08f, -0.2f);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.08f, 0.35f);
    glColor3ub(0, 153, 153);
    glVertex2f(0.0f, 0.35f);
    glEnd();

    //right
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.18f);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.4f);
    glColor3ub(0, 153, 153);
    glVertex2f(0.085f, 0.4f);
    glColor3ub(96, 96, 96);
    glVertex2f(0.085f, -0.2f);
    glEnd();

    //left
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.18f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.06f, -0.2f);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.06f, 0.45f);
    glColor3ub(0, 153, 153);
    glVertex2f(0.0f, 0.45f);
    glEnd();

    //right
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.18f);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.5f);
    glColor3ub(0, 153, 153);
    glVertex2f(0.06f, 0.5f);
    glColor3ub(96, 96, 96);
    glVertex2f(0.06f, -0.2f);
    glEnd();

    //left
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.18f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.04f, -0.2f);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.04f, 0.55f);
    glColor3ub(0, 153, 153);
    glVertex2f(0.0f, 0.55f);
    glEnd();

     //right
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.18f);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.6f);
    glColor3ub(0, 153, 153);
    glVertex2f(0.04f, 0.6f);
    glColor3ub(96, 96, 96);
    glVertex2f(0.04f, -0.2f);
    glEnd();

    //left
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.18f);
    glColor3ub(0, 153, 153);
    glVertex2f(0.0f, 0.65f);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.02f, 0.65f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.02f, -0.2f);
    glEnd();

    //tall tower
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.2f);
    glColor3ub(96, 96, 96);
    glVertex2f(0.02f, -0.2f);
    glColor3ub(0, 153, 153);
    glVertex2f(0.02f, 0.8f);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.74f);
    glEnd();


    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.190f, -0.140f);
    glVertex2f(0.200f, -0.140f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.170f, -0.1f);
    glVertex2f(0.175f, -0.1f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.140f, -0.075f);
    glVertex2f(0.150f, -0.075f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.140f, -0.050f);
    glVertex2f(0.150f, -0.050f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.140f, -0.025f);
    glVertex2f(0.150f, -0.025f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.140f, 0.0f);
    glVertex2f(0.150f, 0.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.140f, 0.025f);
    glVertex2f(0.150f, 0.025f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.120f, 0.05f);
    glVertex2f(0.150f, 0.05f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.120f, 0.075f);
    glVertex2f(0.150f, 0.075f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.120f, 0.1f);
    glVertex2f(0.125f, 0.1f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.120f, 0.125f);
    glVertex2f(0.125f, 0.125f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.10f, 0.150f);
    glVertex2f(0.125f, 0.150f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.10f, 0.175f);
    glVertex2f(0.125f, 0.175f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.10f, 0.200f);
    glVertex2f(0.100f, 0.200f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.10f, 0.225f);
    glVertex2f(0.100f, 0.225f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.08f, 0.250f);
    glVertex2f(0.100f, 0.250f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.08f, 0.275f);
    glVertex2f(0.100f, 0.275f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.08f, 0.300f);
    glVertex2f(0.085f, 0.300f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.08f, 0.325f);
    glVertex2f(0.085f, 0.325f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.06f, 0.350f);
    glVertex2f(0.085f, 0.350f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.06f, 0.375f);
    glVertex2f(0.085f, 0.375f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.06f, 0.400f);
    glVertex2f(0.062f, 0.400f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.06f, 0.425f);
    glVertex2f(0.062f, 0.425f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.04f, 0.450f);
    glVertex2f(0.062f, 0.450f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.04f, 0.475f);
    glVertex2f(0.062f, 0.475f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.04f, 0.500f);
    glVertex2f(0.04f, 0.500f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.04f, 0.525f);
    glVertex2f(0.04f, 0.525f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.02f, 0.550f);
    glVertex2f(0.04f, 0.550f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.02f, 0.575f);
    glVertex2f(0.04f, 0.575f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(-0.02f, 0.600f);
    glVertex2f(0.04f, 0.600f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(0.0f, 0.65f);
    glVertex2f(0.02f, 0.65f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(0.0f, 0.675f);
    glVertex2f(0.02f, 0.675f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(0.0f, 0.700f);
    glVertex2f(0.02f, 0.700f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(178, 102, 255);
    glVertex2f(0.0f, 0.725f);
    glVertex2f(0.02f, 0.725f);
    glEnd();




	//side building:
//left-1

    glBegin(GL_QUADS);
	glColor3ub(0,51 ,102 );

	glVertex2f(-0.3f, -0.2f);
	glVertex2f(-0.5f, -0.2f);
	glVertex2f(-0.5f, 0.2f);
	glVertex2f(-0.3f, 0.2f);

	glEnd();

//window


	//window-1
    glBegin(GL_QUADS);
	glColor3ub(178,102 ,255 );

	glVertex2f(-0.32f, 0.07f);
	glVertex2f(-0.37f, 0.07f);
	glVertex2f(-0.37f, 0.13f);
	glVertex2f(-0.32f, 0.13f);

	glEnd();
	//window-2

	glBegin(GL_QUADS);
	glColor3ub(178,102 ,255 );

	glVertex2f(-0.43f, 0.07f);
	glVertex2f(-0.48f, 0.07f);
	glVertex2f(-0.48f, 0.13f);
	glVertex2f(-0.43f, 0.13f);

	glEnd();
	//window-3
	glBegin(GL_QUADS);
	glColor3ub(178,102 ,255 );

	glVertex2f(-0.32f, 0.02f);
	glVertex2f(-0.37f, 0.02f);
	glVertex2f(-0.37f, -0.04f);
	glVertex2f(-0.32f, -0.04f);

	 glEnd();
	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(178,102 ,255 );

	glVertex2f(-0.43f, 0.02f);
	glVertex2f(-0.48f, 0.02f);
	glVertex2f(-0.48f, -0.04f);
	glVertex2f(-0.43f, -0.04f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(178,102 ,255 );

	glVertex2f(-0.32f, -0.09f);
	glVertex2f(-0.37f, -0.09f);
	glVertex2f(-0.37f, -0.15f);
	glVertex2f(-0.32f, -0.15f);

	 glEnd();
	 //window-6
	 glBegin(GL_QUADS);
	glColor3ub(178,102 ,255 );

	glVertex2f(-0.43f, -0.09f);
	glVertex2f(-0.48f, -0.09f);
	glVertex2f(-0.48f, -0.15f);
	glVertex2f(-0.43f, -0.15f);

	 glEnd();

	 //window border :
	 //b-1
	 /*
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, 0.18f);
	glVertex2f(-0.403f, 0.18f);
	glVertex2f(-0.403f, 0.24f);
	glVertex2f(-0.395f, 0.24f);

	 glEnd();
	 */
	 //b-2
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, 0.07f);
	glVertex2f(-0.403f, 0.07f);
	glVertex2f(-0.403f, 0.13f);
	glVertex2f(-0.395f, 0.13f);

	 glEnd();
	 //b-3
	 /*
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, 0.41f);
	glVertex2f(-0.403f, 0.41f);
	glVertex2f(-0.403f, 0.47f);
	glVertex2f(-0.395f, 0.47f);

	 glEnd();
	 */
/*
	 //b-4
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, 0.29f);
	glVertex2f(-0.403f, 0.29f);
	glVertex2f(-0.403f, 0.35f);
	glVertex2f(-0.395f, 0.35f);

	 glEnd();
	 */
	 //b-5

	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, -0.09f);
	glVertex2f(-0.403f, -0.09f);
	glVertex2f(-0.403f, -0.15f);
	glVertex2f(-0.395f, -0.15f);

	 glEnd();

	 //b-6

	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, 0.02f);
	glVertex2f(-0.403f, 0.02f);
	glVertex2f(-0.403f, -0.04f);
	glVertex2f(-0.395f, -0.04f);

	 glEnd();

	 // side  building
	 //left -2
	 glBegin(GL_QUADS);
	glColor3ub(153,76 ,0 );

	glVertex2f(-0.55f, -0.2f);
	glVertex2f(-0.75f, -0.2f);
	glVertex2f(-0.75f, 0.33f);
	glVertex2f(-0.55f, 0.33f);

	 glEnd();
	 //window:1

	 glBegin(GL_QUADS);
	glColor3ub(102,255,178 );

	glVertex2f(-0.57f, 0.0f);
	glVertex2f(-0.57f, -0.15f);
	glVertex2f(-0.73f, -0.15f);
	glVertex2f(-0.73f, 0.0f);

	 glEnd();

	 //window-2

	 glBegin(GL_QUADS);
	glColor3ub(102,255,178);

	glVertex2f(-0.57f, 0.1f);
	glVertex2f(-0.57f, 0.25f);
	glVertex2f(-0.73f, 0.25f);
	glVertex2f(-0.73f, 0.1f);

	 glEnd();

	 //window-4
	 /*

	 glBegin(GL_QUADS);

*/
	 //left border:
	 //no:1
	 glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.57f, 0.05f);
	glVertex2f(-0.57f, 0.03f);
	glVertex2f(-0.73f, 0.03f);
	glVertex2f(-0.73f, 0.05f);

	 glEnd();
	 //no:2
	 glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.57f, 0.29f);
	glVertex2f(-0.57f, 0.31f);
	glVertex2f(-0.73f, 0.31f);
	glVertex2f(-0.73f, 0.29f);

	 glEnd();
	 //left building :3
    glBegin(GL_QUADS);
	glColor3ub(102,0,102);

	glVertex2f(-0.8f, -0.2f);
	glVertex2f(-0.95f, -0.2f);
	glVertex2f(-0.95f, 0.45f);
	glVertex2f(-0.8f, 0.45f);

	 glEnd();
	 //design-1

	 glBegin(GL_QUADS);
	glColor3ub(102,0,102);

	glVertex2f(-0.82f, 0.45f);
	glVertex2f(-0.93f, 0.45f);
	glVertex2f(-0.93f, 0.5f);
	glVertex2f(-0.82f, 0.5f);

	 glEnd();
	 //design-2

	 glBegin(GL_QUADS);
	glColor3ub(102,0,102);

	glVertex2f(-0.83f, 0.5f);
	glVertex2f(-0.92f, 0.5f);
	glVertex2f(-0.92f, 0.6f);
	glVertex2f(-0.83f, 0.6f);

	 glEnd();

	 //design -border
	 //b-1

	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.83f, 0.46f);
	glVertex2f(-0.92f, 0.46f);
	glVertex2f(-0.92f, 0.48f);
	glVertex2f(-0.83f, 0.48f);

	 glEnd();
	 //b-2
	  glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.85f, 0.52f);
	glVertex2f(-0.9f, 0.52f);
	glVertex2f(-0.9f, 0.58f);
	glVertex2f(-0.85f, 0.58f);

	 glEnd();


	 //window-1
	  glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.82f, -0.18f);
	glVertex2f(-0.93f, -0.18f);
	glVertex2f(-0.93f, -0.11f);
	glVertex2f(-0.82f, -0.11f);

	 glEnd();

	 //window-2
	  glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.82f, -0.05f);
	glVertex2f(-0.93f, -0.05f);
	glVertex2f(-0.93f, 0.02f);
	glVertex2f(-0.82f, 0.02f);

	 glEnd();
	 //window-3
	  glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.82f, 0.08f);
	glVertex2f(-0.93f, 0.08f);
	glVertex2f(-0.93f, 0.15f);
	glVertex2f(-0.82f, 0.15f);

	 glEnd();
	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.82f, 0.22f);
	glVertex2f(-0.93f, 0.22f);
	glVertex2f(-0.93f, 0.29f);
	glVertex2f(-0.82f, 0.29f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.82f, 0.35f);
	glVertex2f(-0.93f, 0.35f);
	glVertex2f(-0.93f, 0.42f);
	glVertex2f(-0.82f, 0.42f);

	 glEnd();
	 //border
	 //b-1
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, -0.09f);
	glVertex2f(-0.93f, -0.09f);
	glVertex2f(-0.93f, -0.07f);
	glVertex2f(-0.82f,- 0.07f);

	 glEnd();

	 //b-2
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.04f);
	glVertex2f(-0.93f, 0.04f);
	glVertex2f(-0.93f, 0.06f);
	glVertex2f(-0.82f, 0.06f);

	 glEnd();
	 //b-3
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.17f);
	glVertex2f(-0.93f, 0.17f);
	glVertex2f(-0.93f, 0.19f);
	glVertex2f(-0.82f, 0.19f);

	 glEnd();
//b-4
glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.31f);
	glVertex2f(-0.93f, 0.31f);
	glVertex2f(-0.93f, 0.33f);
	glVertex2f(-0.82f, 0.33f);

	 glEnd();





	 //Right building:1
	 glBegin(GL_QUADS);
	glColor3ub(0,102,102);

	glVertex2f(0.3f, -0.2f);
	glVertex2f(0.5f, -0.2f);
	glVertex2f(0.5f, 0.2f);
	glVertex2f(0.3f, 0.2f);

	 glEnd();


	 //WINDOW -1
	  glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(0.32f, 0.07f);
	glVertex2f(0.37f, 0.07f);
	glVertex2f(0.37f, 0.13f);
	glVertex2f(0.32f, 0.13f);

	glEnd();
	//window-2
	glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(0.43f, 0.07f);
	glVertex2f(0.48f, 0.07f);
	glVertex2f(0.48f, 0.13f);
	glVertex2f(0.43f, 0.13f);

	glEnd();
	//window-3
	glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(0.32f, 0.02f);
	glVertex2f(0.37f, 0.02f);
	glVertex2f(0.37f, -0.04f);
	glVertex2f(0.32f, -0.04f);

	 glEnd();
	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(0.43f, 0.02f);
	glVertex2f(0.48f, 0.02f);
	glVertex2f(0.48f, -0.04f);
	glVertex2f(0.43f, -0.04f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(0.32f, -0.09f);
	glVertex2f(0.37f, -0.09f);
	glVertex2f(0.37f, -0.15f);
	glVertex2f(0.32f, -0.15f);

	 glEnd();
	 //window-6
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(0.43f, -0.09f);
	glVertex2f(0.48f, -0.09f);
	glVertex2f(0.48f, -0.15f);
	glVertex2f(0.43f, -0.15f);

	 glEnd();
//BORDER
//border-1
glBegin(GL_QUADS);
	glColor3ub(255,102 ,178 );

	glVertex2f(0.395f, 0.07f);
	glVertex2f(0.403f, 0.07f);
	glVertex2f(0.403f, 0.13f);
	glVertex2f(0.395f, 0.13f);

	 glEnd();
	 //b-2

	 glBegin(GL_QUADS);
	glColor3ub(255,102 ,178 );

	glVertex2f(0.395f, -0.09f);
	glVertex2f(0.403f, -0.09f);
	glVertex2f(0.403f, -0.15f);
	glVertex2f(0.395f, -0.15f);

	 glEnd();

	 //b-3

	 glBegin(GL_QUADS);
	glColor3ub(255,102,178 );

	glVertex2f(0.395f, 0.02f);
	glVertex2f(0.403f, 0.02f);
	glVertex2f(0.403f, -0.04f);
	glVertex2f(0.395f, -0.04f);

	 glEnd();
	  //right Building:2

	 glBegin(GL_QUADS);
	glColor3ub(76,0,153);

	glVertex2f(0.55f, -0.2f);
	glVertex2f(0.75f, -0.2f);
	glVertex2f(0.75f, 0.33f);
	glVertex2f(0.55f, 0.33f);

	 glEnd();

	 //WINDOW-1

    glBegin(GL_QUADS);
	glColor3ub(153,153,255 );

	glVertex2f(0.57f, 0.0f);
	glVertex2f(0.57f, -0.15f);
	glVertex2f(0.73f, -0.15f);
	glVertex2f(0.73f, 0.0f);

	 glEnd();

	 //window-2
	 glBegin(GL_QUADS);
	glColor3ub(153,153,255 );

	glVertex2f(0.57f, 0.1f);
	glVertex2f(0.57f, 0.25f);
	glVertex2f(0.73f, 0.25f);
	glVertex2f(0.73f, 0.1f);

	 glEnd();

	 //left border :
	 //no:1
	 glBegin(GL_QUADS);
	glColor3ub(0,204,102);

	glVertex2f(0.57f, 0.05f);
	glVertex2f(0.57f, 0.03f);
	glVertex2f(0.73f, 0.03f);
	glVertex2f(0.73f, 0.05f);

	 glEnd();
	 //no:2
	 glBegin(GL_QUADS);
	glColor3ub(0,204,102);

	glVertex2f(0.57f, 0.29f);
	glVertex2f(0.57f, 0.31f);
	glVertex2f(0.73f, 0.31f);
	glVertex2f(0.73f, 0.29f);

	 glEnd();
	  //right building:3

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.8f, -0.2f);
	glVertex2f(0.95f, -0.2f);
	glVertex2f(0.95f, 0.45f);
	glVertex2f(0.8f, 0.45f);

	 glEnd();
	 //design-1

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.82f, 0.45f);
	glVertex2f(0.93f, 0.45f);
	glVertex2f(0.93f, 0.5f);
	glVertex2f(0.82f, 0.5f);

	 glEnd();
	 //design-2

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.83f, 0.5f);
	glVertex2f(0.92f, 0.5f);
	glVertex2f(0.92f, 0.6f);
	glVertex2f(0.83f, 0.6f);

	 glEnd();

	 //design -border
	 //b-1

	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.83f, 0.46f);
	glVertex2f(0.92f, 0.46f);
	glVertex2f(0.92f, 0.48f);
	glVertex2f(0.83f, 0.48f);

	 glEnd();
	 //b-2
	  glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.85f, 0.52f);
	glVertex2f(0.9f, 0.52f);
	glVertex2f(0.9f, 0.58f);
	glVertex2f(0.85f, 0.58f);

	 glEnd();

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.8f, -0.2f);
	glVertex2f(0.95f, -0.2f);
	glVertex2f(0.95f, 0.45f);
	glVertex2f(0.8f, 0.45f);

	 glEnd();


	 //window-1
	 glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.82f, -0.18f);
	glVertex2f(0.93f, -0.18f);
	glVertex2f(0.93f, -0.11f);
	glVertex2f(0.82f, -0.11f);

	 glEnd();

	 //window-2
	  glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.82f, -0.05f);
	glVertex2f(0.93f, -0.05f);
	glVertex2f(0.93f, 0.02f);
	glVertex2f(0.82f, 0.02f);

	 glEnd();
	 //window-3
	  glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.82f, 0.08f);
	glVertex2f(0.93f, 0.08f);
	glVertex2f(0.93f, 0.15f);
	glVertex2f(0.82f, 0.15f);

	 glEnd();
	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.82f, 0.22f);
	glVertex2f(0.93f, 0.22f);
	glVertex2f(0.93f, 0.29f);
	glVertex2f(0.82f, 0.29f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.82f, 0.35f);
	glVertex2f(0.93f, 0.35f);
	glVertex2f(0.93f, 0.42f);
	glVertex2f(0.82f, 0.42f);

	 glEnd();
	 //border
	 //b-1
	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, -0.09f);
	glVertex2f(0.93f, -0.09f);
	glVertex2f(0.93f, -0.07f);
	glVertex2f(0.82f,- 0.07f);

	 glEnd();

	 //b-2
	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, 0.04f);
	glVertex2f(0.93f, 0.04f);
	glVertex2f(0.93f, 0.06f);
	glVertex2f(0.82f, 0.06f);

	 glEnd();
	 //b-3
	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, 0.17f);
	glVertex2f(0.93f, 0.17f);
	glVertex2f(0.93f, 0.19f);
	glVertex2f(0.82f, 0.19f);

	 glEnd();
//b-4
    glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, 0.31f);
	glVertex2f(0.93f, 0.31f);
	glVertex2f(0.93f, 0.33f);
	glVertex2f(0.82f, 0.33f);

	 glEnd();


	  //right tree 1


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.265f,-0.25f);
	glVertex2f(0.265f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.200f,-0.17f);
	glVertex2f(0.330f,-0.17f);
	glVertex2f(0.265f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.205f,-0.15f);
	glVertex2f(0.325f,-0.15f);
	glVertex2f(0.265f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.210f,-0.13f);
	glVertex2f(0.320f,-0.13f);
	glVertex2f(0.265f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.215f,-0.11f);
	glVertex2f(0.315f,-0.11f);
	glVertex2f(0.265f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.220f,-0.09f);
	glVertex2f(0.310f,-0.09f);
	glVertex2f(0.265f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.225f,-0.07f);
	glVertex2f(0.305f,-0.07f);
	glVertex2f(0.265f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.230f,-0.05f);
	glVertex2f(0.300f,-0.05f);
	glVertex2f(0.265f,0.0f);
	glEnd();

//right tree 2


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.525f,-0.25f);
	glVertex2f(0.525f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.460f,-0.17f);
	glVertex2f(0.590f,-0.17f);
	glVertex2f(0.525f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.465f,-0.15f);
	glVertex2f(0.585f,-0.15f);
	glVertex2f(0.525f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.470f,-0.13f);
	glVertex2f(0.580f,-0.13f);
	glVertex2f(0.525f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.475f,-0.11f);
	glVertex2f(0.575f,-0.11f);
	glVertex2f(0.525f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.480f,-0.09f);
	glVertex2f(0.570f,-0.09f);
	glVertex2f(0.525f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.485f,-0.07f);
	glVertex2f(0.565f,-0.07f);
	glVertex2f(0.525f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.490f,-0.05f);
	glVertex2f(0.560f,-0.05f);
	glVertex2f(0.525f,0.0f);
	glEnd();

	//right tree 3


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.775f,-0.25f);
	glVertex2f(0.775f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.710f,-0.17f);
	glVertex2f(0.840f,-0.17f);
	glVertex2f(0.775f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.715f,-0.15f);
	glVertex2f(0.835f,-0.15f);
	glVertex2f(0.775f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.720f,-0.13f);
	glVertex2f(0.830f,-0.13f);
	glVertex2f(0.775f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.725f,-0.11f);
	glVertex2f(0.825f,-0.11f);
	glVertex2f(0.775f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.730f,-0.09f);
	glVertex2f(0.820f,-0.09f);
	glVertex2f(0.775f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.735f,-0.07f);
	glVertex2f(0.815f,-0.07f);
	glVertex2f(0.775f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.740f,-0.05f);
	glVertex2f(0.810f,-0.05f);
	glVertex2f(0.775f,0.0f);
	glEnd();

	//left tree 1


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.255f,-0.25f);
	glVertex2f(-0.255f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.190f,-0.17f);
	glVertex2f(-0.320f,-0.17f);
	glVertex2f(-0.255f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.195f,-0.15f);
	glVertex2f(-0.315f,-0.15f);
	glVertex2f(-0.255f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.200f,-0.13f);
	glVertex2f(-0.310f,-0.13f);
	glVertex2f(-0.255f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.205f,-0.11f);
	glVertex2f(-0.305f,-0.11f);
	glVertex2f(-0.255f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.210f,-0.09f);
	glVertex2f(-0.300f,-0.09f);
	glVertex2f(-0.255f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.215f,-0.07f);
	glVertex2f(-0.295f,-0.07f);
	glVertex2f(-0.255f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.220f,-0.05f);
	glVertex2f(-0.290f,-0.05f);
	glVertex2f(-0.255f,0.0f);
	glEnd();

	//left tree 2


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.525f,-0.25f);
	glVertex2f(-0.525f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.460f,-0.17f);
	glVertex2f(-0.590f,-0.17f);
	glVertex2f(-0.525f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.465f,-0.15f);
	glVertex2f(-0.585f,-0.15f);
	glVertex2f(-0.525f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.470f,-0.13f);
	glVertex2f(-0.580f,-0.13f);
	glVertex2f(-0.525f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.475f,-0.11f);
	glVertex2f(-0.575f,-0.11f);
	glVertex2f(-0.525f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.480f,-0.09f);
	glVertex2f(-0.570f,-0.09f);
	glVertex2f(-0.525f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.485f,-0.07f);
	glVertex2f(-0.565f,-0.07f);
	glVertex2f(-0.525f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.490f,-0.05f);
	glVertex2f(-0.560f,-0.05f);
	glVertex2f(-0.525f,0.0f);
	glEnd();

	//left tree 3


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.775f,-0.25f);
	glVertex2f(-0.775f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.710f,-0.17f);
	glVertex2f(-0.840f,-0.17f);
	glVertex2f(-0.775f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.715f,-0.15f);
	glVertex2f(-0.835f,-0.15f);
	glVertex2f(-0.775f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.720f,-0.13f);
	glVertex2f(-0.830f,-0.13f);
	glVertex2f(-0.775f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.725f,-0.11f);
	glVertex2f(-0.825f,-0.11f);
	glVertex2f(-0.775f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.730f,-0.09f);
	glVertex2f(-0.820f,-0.09f);
	glVertex2f(-0.775f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.735f,-0.07f);
	glVertex2f(-0.815f,-0.07f);
	glVertex2f(-0.775f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.740f,-0.05f);
	glVertex2f(-0.810f,-0.05f);
	glVertex2f(-0.775f,0.0f);
	glEnd();




    //wall
	glPointSize(30.0);
	glBegin(GL_POINTS);
	glColor3ub(96, 96, 96);
	glVertex2f(0.97f, -0.33f);
	glVertex2f(0.85f, -0.33f);
	glVertex2f(0.73f, -0.33f);
	glVertex2f(0.61f, -0.33f);
    glVertex2f(0.49f, -0.33f);
	glVertex2f(0.37f, -0.33f);
	glVertex2f(0.25f, -0.33f);
	glVertex2f(0.13f, -0.33f);
	glVertex2f(0.01f, -0.33f);
	glVertex2f(-0.11f, -0.33f);
	glVertex2f(-0.23f, -0.33f);
	glVertex2f(-0.35f, -0.33f);
	glVertex2f(-0.47f, -0.33f);
	glVertex2f(-0.59f, -0.33f);
	glVertex2f(-0.71f, -0.33f);
	glVertex2f(-0.83f, -0.33f);
	glVertex2f(-0.95f, -0.33f);
	glVertex2f(-0.98f, -0.33f);

	glVertex2f(0.91f, -0.33f);
    glVertex2f(0.79f, -0.33f);
    glVertex2f(0.67f, -0.33f);
    glVertex2f(0.55f, -0.33f);
    glVertex2f(0.43f, -0.33f);
    glVertex2f(0.31f, -0.33f);
    glVertex2f(0.19f, -0.33f);
    glVertex2f(0.07f, -0.33f);
    glVertex2f(-0.05f, -0.33f);
    glVertex2f(-0.17f, -0.33f);
    glVertex2f(-0.29f, -0.33f);
    glVertex2f(-0.41f, -0.33f);
    glVertex2f(-0.53f, -0.33f);
    glVertex2f(-0.65f, -0.33f);
    glVertex2f(-0.77f, -0.33f);
    glVertex2f(-0.89f, -0.33f);
	glEnd();

	//lamp stand

	glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.85f, -0.33f);
	glVertex2f(0.85f, -0.2f);

	glVertex2f(0.61f, -0.33f);
	glVertex2f(0.61f, -0.2f);

	glVertex2f(0.37f, -0.33f);
	glVertex2f(0.37f, -0.2f);

	glVertex2f(0.13f, -0.33f);
	glVertex2f(0.13f, -0.2f);

	glVertex2f(-0.11f, -0.33f);
	glVertex2f(-0.11f, -0.2f);

	glVertex2f(-0.35f, -0.33f);
	glVertex2f(-0.35f, -0.2f);

	glVertex2f(-0.59f, -0.33f);
	glVertex2f(-0.59f, -0.2f);

	glVertex2f(-0.83f, -0.33f);
	glVertex2f(-0.83f, -0.2f);

	glEnd();

    // lamp horizontal
	glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);

	glVertex2f(0.83f, -0.2f);
	glVertex2f(0.87f, -0.2f);

	glVertex2f(0.59f, -0.2f);
	glVertex2f(0.63f, -0.2f);

	glVertex2f(0.35f, -0.2f);
	glVertex2f(0.39f, -0.2f);

	glVertex2f(0.11f, -0.2f);
	glVertex2f(0.15f, -0.2f);

	glVertex2f(-0.13f, -0.2f);
	glVertex2f(-0.09f, -0.2f);

	glVertex2f(-0.37f, -0.2f);
	glVertex2f(-0.33f, -0.2f);

	glVertex2f(-0.61f, -0.2f);
	glVertex2f(-0.57f, -0.2f);

	glVertex2f(-0.85f, -0.2f);
	glVertex2f(-0.81f, -0.2f);

	glEnd();

	//lamp post
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 153);
	glVertex2f(0.83f, -0.2f); //left bottom
	glVertex2f(0.87f, -0.2f); //right bottom
	glVertex2f(0.89f, -0.15f); //right middle
	glVertex2f(0.87f, -0.1f);  //right top
	glVertex2f(0.83f, -0.1f);  //left top
	glVertex2f(0.81f, -0.15f); //left middle
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 153, 153);
	glVertex2f(0.59f, -0.2f);
	glVertex2f(0.63f, -0.2f);
	glVertex2f(0.65f, -0.15f);
	glVertex2f(0.63f, -0.1f);
	glVertex2f(0.59f, -0.1f);
	glVertex2f(0.57f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(153, 255, 255);
	glVertex2f(0.35f, -0.2f);
	glVertex2f(0.39f, -0.2f);
	glVertex2f(0.41f, -0.15f);
	glVertex2f(0.39f, -0.1f);
	glVertex2f(0.35f, -0.1f);
	glVertex2f(0.33f, -0.15f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(204, 153, 255);
	glVertex2f(0.11f, -0.2f);
	glVertex2f(0.15f, -0.2f);
	glVertex2f(0.17f, -0.15f);
	glVertex2f(0.15f, -0.1f);
	glVertex2f(0.11f, -0.1f);
	glVertex2f(0.09f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(153, 255, 153);
	glVertex2f(-0.13f, -0.2f);
	glVertex2f(-0.09f, -0.2f);
	glVertex2f(-0.07f, -0.15f);
	glVertex2f(-0.09f, -0.1f);
	glVertex2f(-0.13f, -0.1f);
	glVertex2f(-0.15f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 153, 204);
	glVertex2f(-0.37f, -0.2f);
	glVertex2f(-0.33f, -0.2f);
	glVertex2f(-0.31f, -0.15f);
	glVertex2f(-0.33f, -0.1f);
	glVertex2f(-0.37f, -0.1f);
	glVertex2f(-0.39f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 204, 153);
	glVertex2f(-0.61f, -0.2f);
	glVertex2f(-0.57f, -0.2f);
	glVertex2f(-0.55f, -0.15f);
	glVertex2f(-0.57f, -0.1f);
	glVertex2f(-0.61f, -0.1f);
	glVertex2f(-0.63f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(153, 153, 255);
	glVertex2f(-0.85f, -0.2f);
	glVertex2f(-0.81f, -0.2f);
	glVertex2f(-0.79f, -0.15f);
	glVertex2f(-0.81f, -0.1f);
	glVertex2f(-0.85f, -0.1f);
	glVertex2f(-0.87f, -0.15f);
	glEnd();





    //river
	glBegin(GL_QUADS);
	glColor3ub(0, 162, 255);
    glVertex2f(-1.0f, -1.0f);
    glColor3ub(0, 162, 255);
    glVertex2f(1.0f, -1.0f);
    glColor3ub(153, 204, 255);
    glVertex2f(1.0f, -0.37f);
	glVertex2f(-1.0f, -0.37f);
    glEnd();



	 //Water bus
    glPushMatrix();
    glTranslatef(ship_position2,0.0f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
    glVertex2f(0.1f, -0.47f);
    glVertex2f(0.5f, -0.47f);
	glVertex2f(0.5f, -0.37f);
    glVertex2f(0.1f, -0.37f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.5f, -0.47f);
    glVertex2f(0.65f, -0.37f);
    glVertex2f(0.5f, -0.37f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.16f, -0.37f);
    glVertex2f(0.42f, -0.37f);
    glVertex2f(0.42f, -0.27f);
    glVertex2f(0.16f, -0.27f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);
    glVertex2f(0.42f, -0.27f);
    glVertex2f(0.42f, -0.37f);
    glVertex2f(0.52f, -0.37f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.34f, -0.2f);
    glVertex2f(0.34f, -0.27f);
    glVertex2f(0.2f, -0.27f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);
    glVertex2f(0.34f, -0.2f);
    glVertex2f(0.34f, -0.27f);
    glVertex2f(0.4f, -0.27f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.22f, -0.12f);
    glVertex2f(0.29f, -0.12f);
    glVertex2f(0.29f, -0.2f);
    glVertex2f(0.22f, -0.2f);
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);

    glVertex2f(0.29f, -0.12f);
    glVertex2f(0.29f, -0.2f);
    glVertex2f(0.32f, -0.2f);

    glEnd();
    //window
    glBegin(GL_QUADS);
	glColor3ub(0,153,153);
    glVertex2f(0.24f, -0.13f);
    glVertex2f(0.28f, -0.13f);
    glVertex2f(0.28f, -0.18f);
    glVertex2f(0.24f, -0.18f);
    glEnd();

    //second row
    glBegin(GL_QUADS);
    glVertex2f(0.22f, -0.21f);
    glVertex2f(0.26f, -0.21f);
    glVertex2f(0.26f, -0.26f);
    glVertex2f(0.22f, -0.26f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.28f, -0.21f);
    glVertex2f(0.32f, -0.21f);
    glVertex2f(0.32f, -0.26f);
    glVertex2f(0.28f, -0.26f);
    glEnd();

    //third row
    glBegin(GL_QUADS);
    glVertex2f(0.18f, -0.28f);
    glVertex2f(0.22f, -0.28f);
    glVertex2f(0.22f, -0.33f);
    glVertex2f(0.18f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.24f, -0.28f);
    glVertex2f(0.28f, -0.28f);
    glVertex2f(0.28f, -0.33f);
    glVertex2f(0.24f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.3f, -0.28f);
    glVertex2f(0.34f, -0.28f);
    glVertex2f(0.34f, -0.33f);
    glVertex2f(0.3f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.36f, -0.28f);
    glVertex2f(0.4f, -0.28f);
    glVertex2f(0.4f, -0.33f);
    glVertex2f(0.36f, -0.33f);
    glEnd();

    glPopMatrix();




    //water bus -2

    glPushMatrix();
    glTranslatef(ship_position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(0,0,0);

	glVertex2f(-0.2f, -0.7f);
	glVertex2f(-0.6f, -0.7f);
	glVertex2f(-0.75f, -0.6f);
	glVertex2f(-0.2f, -0.6f);

	 glEnd();
	 //bus part-1
	 glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.65f, -0.6f);
	glVertex2f(-0.6f, -0.5f);
	glVertex2f(-0.25f, -0.5f);
	glVertex2f(-0.25f, -0.6f);

	 glEnd();
	 //window part-1
	 glBegin(GL_QUADS);
	glColor3ub(204,153,255);

	glVertex2f(-0.59f, -0.52f);
	glVertex2f(-0.53f, -0.52f);
	glVertex2f(-0.53f, -0.57f);
	glVertex2f(-0.59f, -0.57f);

	 glEnd();
	 //window part-2
	 glBegin(GL_QUADS);
	glColor3ub(204,153,255);

	glVertex2f(-0.5f, -0.52f);
	glVertex2f(-0.44f, -0.52f);
	glVertex2f(-0.44f, -0.57f);
	glVertex2f(-0.5f, -0.57f);

	 glEnd();
//window part -3

	 glBegin(GL_QUADS);
	glColor3ub(204,153,255);

	glVertex2f(-0.41f, -0.52f);
	glVertex2f(-0.35f, -0.52f);
	glVertex2f(-0.35f, -0.57f);
	glVertex2f(-0.41f, -0.57f);

	 glEnd();

//window part -4

	 glBegin(GL_QUADS);
	glColor3ub(204,153,255);

	glVertex2f(-0.32f, -0.52f);
	glVertex2f(-0.26f, -0.52f);
	glVertex2f(-0.26f, -0.57f);
	glVertex2f(-0.32f, -0.57f);

	 glEnd();
	 //bus part-2
	 glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.55f, -0.5f);
	glVertex2f(-0.5f, -0.4f);
	glVertex2f(-0.3f, -0.4f);
	glVertex2f(-0.3f, -0.5f);

	 glEnd();
//bus part-2
//window-1
	 glBegin(GL_QUADS);
	glColor3ub(204,153,255);

	glVertex2f(-0.49f, -0.42f);
	glVertex2f(-0.43f, -0.42f);
	glVertex2f(-0.43f, -0.47f);
	glVertex2f(-0.49f, -0.47f);

	 glEnd();
	 //bus part-2
	 //window-2
	 glBegin(GL_QUADS);
	glColor3ub(204,153,255);

	glVertex2f(-0.4f, -0.42f);
	glVertex2f(-0.34f, -0.42f);
	glVertex2f(-0.34f, -0.47f);
	glVertex2f(-0.4f, -0.47f);

	 glEnd();
	 //bus part-3
	glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.47f, -0.4f);
	glVertex2f(-0.45f, -0.3f);
	glVertex2f(-0.35f, -0.3f);
	glVertex2f(-0.35f, -0.4f);

	 glEnd();
	 //window-1
	 glBegin(GL_QUADS);
	glColor3ub(204,153,255);

	glVertex2f(-0.44f, -0.32f);
	glVertex2f(-0.38f, -0.32f);
	glVertex2f(-0.38f, -0.37f);
	glVertex2f(-0.44f, -0.37f);

	 glEnd();

    glPopMatrix();

    glFlush();
    glutSwapBuffers();

}





//khalifa night
void khalifaNight() {

    float x, y;
    int i;
	GLfloat radius;
	int triangleAmount =30;
	GLfloat twicePi = 2.0f * PI;

    glLoadIdentity();
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //display

    glBegin(GL_QUADS);
    glColor3ub(32, 32, 32);
    glVertex2f(-1.0f,-1.0f);
    glColor3ub(32, 32, 32);
    glVertex2f(1.0f,-1.0f);
    glColor3ub(32, 32, 32);
    glVertex2f(1.0f,1.0f);
    glColor3ub(32, 32, 32);
    glVertex2f(-1.0f,1.0f);
    glEnd();

     //star
    glPointSize(1.0);
    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.6f);
	glVertex2f(-0.9f, 0.9f);
	glVertex2f(-0.6f, 0.4f);
	glVertex2f(-0.6f, 0.7f);
	glVertex2f(-0.4f, 0.5f);
	glVertex2f(-0.3f, 0.95f);
	glVertex2f(-0.1f, 0.8f);
	glVertex2f(0.8f, 0.6f);
	glVertex2f(0.9f, 0.9f);
	glVertex2f(0.6f, 0.4f);
	glVertex2f(0.6f, 0.7f);
	glVertex2f(0.4f, 0.5f);
	glVertex2f(0.3f, 0.95f);
	glVertex2f(0.1f, 0.8f);

	glEnd();

     //moon
		glBegin(GL_TRIANGLE_FAN);
		glColor3ub(224,224,224);
        x=.7f; y=.75f; radius =.05f;

	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;

				glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

   //cloud
   glPushMatrix();
   glTranslatef(cloud_position1,0.0f, 0.0f);
  	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(96, 96, 96 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glTranslatef(0.7f, 0.07f, 0.0f);
	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(96, 96, 96);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(96, 96, 96 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();


    //AIUB Building
		glBegin(GL_TRIANGLE_FAN);
		glColor3ub(160,160,160);
        x=.21f; y=.15f; radius =.1f;
    //GLfloat radius = 0.8f; //radius
        twicePi = 2.0f * PI;

                    glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }

        glEnd();

    glLineWidth(5.5);
    glBegin(GL_LINES);
    glColor3ub(0, 128, 255);
    glVertex2f(0.1f, 0.1f);
    glVertex2f(0.3f, 0.1f);

    glVertex2f(0.1f, 0.14f);
    glVertex2f(0.3f, 0.14f);

    glVertex2f(0.1f, 0.18f);
    glVertex2f(0.3f, 0.18f);

    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.21f, 0.25f);
    glVertex2f(0.21f, 0.27f);
    glEnd();

    glPointSize(1.0);
    glBegin(GL_POINTS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.21f, 0.27f);
	glEnd();


    //grass
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 25);
    glVertex2f(-1.0f,-0.3f);
    glColor3ub(0, 51, 25);
    glVertex2f(1.0f,-0.3f);
    glColor3ub(0, 96, 0);
    glVertex2f(1.0f,0.1f);
    glColor3ub(0, 96, 0);
    glVertex2f(-1.0f,0.1f);
    glEnd();

    //BUILDING CODE -START

     //middle1
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.225f, -0.2f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.210f, -0.2f);
    glColor3ub(160, 160, 160);
    glVertex2f(-0.210f, -0.150f);
    glColor3ub(0, 60, 60);
    glVertex2f(0.225f, -0.150f);
    glEnd();

    //middle3
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.200f, -0.2f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.190f, -0.2f);
    glColor3ub(160, 160, 160);
    glVertex2f(-0.190f, -0.115f);
    glColor3ub(0, 60, 60);
    glVertex2f(0.200f, -0.115f);
    glEnd();

    //middle2
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.175f, -0.2f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.17f, -0.2f);
    glColor3ub(160, 160, 160);
    glVertex2f(-0.17f, -0.08f);
    glColor3ub(0, 60, 60);
    glVertex2f(0.175f, -0.08f);
    glEnd();


     //left
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.2f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.14f, -0.2f);
    glColor3ub(160, 160, 160);
    glVertex2f(-0.14f, 0.05f);
    glColor3ub(0, 60, 60);
    glVertex2f(0.0f, 0.05f);
    glEnd();

    //right
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.2f);
    glColor3ub(160, 160, 160);
    glVertex2f(0.0f, 0.1f);
    glColor3ub(0, 60, 60);
    glVertex2f(0.150f, 0.1f);
    glColor3ub(96, 96, 96);
    glVertex2f(0.150f, -0.2f);
    glEnd();

    //left
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.2f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.12f, -0.2f);
    glColor3ub(160, 160, 160);
    glVertex2f(-0.12f, 0.15f);
    glColor3ub(0, 60, 60);
    glVertex2f(0.0f, 0.15f);
    glEnd();

    //right
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.2f);
    glColor3ub(160, 160, 160);
    glVertex2f(0.0f, 0.2f);
    glColor3ub(0, 60, 60);
    glVertex2f(0.125f, 0.2f);
    glColor3ub(96, 96, 96);
    glVertex2f(0.125f, -0.2f);
    glEnd();

    //left
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.18f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.10f, -0.2f);
    glColor3ub(160, 160, 160);
    glVertex2f(-0.10f, 0.25f);
    glColor3ub(0, 60, 60);
    glVertex2f(0.0f, 0.25f);
    glEnd();

    //right
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.18f);
    glColor3ub(160, 160, 160);
    glVertex2f(0.0f, 0.3f);
    glColor3ub(0, 60, 60);
    glVertex2f(0.1f, 0.3f);
    glColor3ub(96, 96, 96);
    glVertex2f(0.1f, -0.2f);
    glEnd();

    //left
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.18f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.08f, -0.2f);
    glColor3ub(160, 160, 160);
    glVertex2f(-0.08f, 0.35f);
    glColor3ub(0,60, 60);
    glVertex2f(0.0f, 0.35f);
    glEnd();

    //right
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.18f);
    glColor3ub(160, 160, 160);
    glVertex2f(0.0f, 0.4f);
    glColor3ub(0, 60, 60);
    glVertex2f(0.085f, 0.4f);
    glColor3ub(96, 96, 96);
    glVertex2f(0.085f, -0.2f);
    glEnd();

    //left
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.18f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.06f, -0.2f);
    glColor3ub(160, 160, 160);
    glVertex2f(-0.06f, 0.45f);
    glColor3ub(0, 60, 60);
    glVertex2f(0.0f, 0.45f);
    glEnd();

    //right
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.18f);
    glColor3ub(160, 160, 160);
    glVertex2f(0.0f, 0.5f);
    glColor3ub(0, 60, 60);
    glVertex2f(0.06f, 0.5f);
    glColor3ub(96, 96, 96);
    glVertex2f(0.06f, -0.2f);
    glEnd();

    //left
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.18f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.04f, -0.2f);
    glColor3ub(160, 160, 160);
    glVertex2f(-0.04f, 0.55f);
    glColor3ub(0, 60, 60);
    glVertex2f(0.0f, 0.55f);
    glEnd();

     //right
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.18f);
    glColor3ub(160, 160, 160);
    glVertex2f(0.0f, 0.6f);
    glColor3ub(0, 60, 60);
    glVertex2f(0.04f, 0.6f);
    glColor3ub(96, 96, 96);
    glVertex2f(0.04f, -0.2f);
    glEnd();

    //left
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.18f);
    glColor3ub(0, 60, 60);
    glVertex2f(0.0f, 0.65f);
    glColor3ub(160, 160, 160);
    glVertex2f(-0.02f, 0.65f);
    glColor3ub(96, 96, 96);
    glVertex2f(-0.02f, -0.2f);
    glEnd();

    //tall tower
    glBegin(GL_QUADS);
    glColor3ub(96, 96, 96);
    glVertex2f(0.0f, -0.2f);
    glColor3ub(96, 96, 96);
    glVertex2f(0.02f, -0.2f);
    glColor3ub(0, 60, 60);
    glVertex2f(0.02f, 0.8f);
    glColor3ub(160, 160, 160);
    glVertex2f(0.0f, 0.74f);
    glEnd();






    //Line


    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.190f, -0.140f);
    glVertex2f(0.200f, -0.140f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.170f, -0.1f);
    glVertex2f(0.175f, -0.1f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.140f, -0.075f);
    glVertex2f(0.150f, -0.075f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.140f, -0.050f);
    glVertex2f(0.150f, -0.050f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.140f, -0.025f);
    glVertex2f(0.150f, -0.025f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.140f, 0.0f);
    glVertex2f(0.150f, 0.0f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.140f, 0.025f);
    glVertex2f(0.150f, 0.025f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.120f, 0.05f);
    glVertex2f(0.150f, 0.05f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.120f, 0.075f);
    glVertex2f(0.150f, 0.075f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.120f, 0.1f);
    glVertex2f(0.125f, 0.1f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.120f, 0.125f);
    glVertex2f(0.125f, 0.125f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.10f, 0.150f);
    glVertex2f(0.125f, 0.150f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.10f, 0.175f);
    glVertex2f(0.125f, 0.175f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.10f, 0.200f);
    glVertex2f(0.100f, 0.200f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.10f, 0.225f);
    glVertex2f(0.100f, 0.225f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.08f, 0.250f);
    glVertex2f(0.100f, 0.250f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.08f, 0.275f);
    glVertex2f(0.100f, 0.275f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.08f, 0.300f);
    glVertex2f(0.085f, 0.300f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.08f, 0.325f);
    glVertex2f(0.085f, 0.325f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.06f, 0.350f);
    glVertex2f(0.085f, 0.350f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.06f, 0.375f);
    glVertex2f(0.085f, 0.375f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.06f, 0.400f);
    glVertex2f(0.062f, 0.400f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.06f, 0.425f);
    glVertex2f(0.062f, 0.425f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.04f, 0.450f);
    glVertex2f(0.062f, 0.450f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.04f, 0.475f);
    glVertex2f(0.062f, 0.475f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.04f, 0.500f);
    glVertex2f(0.04f, 0.500f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.04f, 0.525f);
    glVertex2f(0.04f, 0.525f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.02f, 0.550f);
    glVertex2f(0.04f, 0.550f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.02f, 0.575f);
    glVertex2f(0.04f, 0.575f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(-0.02f, 0.600f);
    glVertex2f(0.04f, 0.600f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(0.0f, 0.65f);
    glVertex2f(0.02f, 0.65f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(0.0f, 0.675f);
    glVertex2f(0.02f, 0.675f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(0.0f, 0.700f);
    glVertex2f(0.02f, 0.700f);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(51, 0, 102);
    glVertex2f(0.0f, 0.725f);
    glVertex2f(0.02f, 0.725f);
    glEnd();





	//side building:
//left-1

    glBegin(GL_QUADS);
	glColor3ub(0,51 ,102 );

	glVertex2f(-0.3f, -0.2f);
	glVertex2f(-0.5f, -0.2f);
	glVertex2f(-0.5f, 0.2f);
	glVertex2f(-0.3f, 0.2f);

	glEnd();

//window

	//window-1
    glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.32f, 0.07f);
	glVertex2f(-0.37f, 0.07f);
	glVertex2f(-0.37f, 0.13f);
	glVertex2f(-0.32f, 0.13f);

	glEnd();
	//window-2

	glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.43f, 0.07f);
	glVertex2f(-0.48f, 0.07f);
	glVertex2f(-0.48f, 0.13f);
	glVertex2f(-0.43f, 0.13f);

	glEnd();
	//window-3
	glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.32f, 0.02f);
	glVertex2f(-0.37f, 0.02f);
	glVertex2f(-0.37f, -0.04f);
	glVertex2f(-0.32f, -0.04f);

	 glEnd();
	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.43f, 0.02f);
	glVertex2f(-0.48f, 0.02f);
	glVertex2f(-0.48f, -0.04f);
	glVertex2f(-0.43f, -0.04f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.32f, -0.09f);
	glVertex2f(-0.37f, -0.09f);
	glVertex2f(-0.37f, -0.15f);
	glVertex2f(-0.32f, -0.15f);

	 glEnd();
	 //window-6
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.43f, -0.09f);
	glVertex2f(-0.48f, -0.09f);
	glVertex2f(-0.48f, -0.15f);
	glVertex2f(-0.43f, -0.15f);

	 glEnd();

	 //window border :
	 //b-1
	 /*
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, 0.18f);
	glVertex2f(-0.403f, 0.18f);
	glVertex2f(-0.403f, 0.24f);
	glVertex2f(-0.395f, 0.24f);

	 glEnd();
	 */
	 //b-2
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, 0.07f);
	glVertex2f(-0.403f, 0.07f);
	glVertex2f(-0.403f, 0.13f);
	glVertex2f(-0.395f, 0.13f);

	 glEnd();
	 //b-3
	 /*
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, 0.41f);
	glVertex2f(-0.403f, 0.41f);
	glVertex2f(-0.403f, 0.47f);
	glVertex2f(-0.395f, 0.47f);

	 glEnd();
	 */
/*
	 //b-4
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, 0.29f);
	glVertex2f(-0.403f, 0.29f);
	glVertex2f(-0.403f, 0.35f);
	glVertex2f(-0.395f, 0.35f);

	 glEnd();
	 */
	 //b-5

	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, -0.09f);
	glVertex2f(-0.403f, -0.09f);
	glVertex2f(-0.403f, -0.15f);
	glVertex2f(-0.395f, -0.15f);

	 glEnd();

	 //b-6

	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,255 );

	glVertex2f(-0.395f, 0.02f);
	glVertex2f(-0.403f, 0.02f);
	glVertex2f(-0.403f, -0.04f);
	glVertex2f(-0.395f, -0.04f);

	 glEnd();

	 // side  building
	 //left -2
	 glBegin(GL_QUADS);
	glColor3ub(153,76 ,0 );

	glVertex2f(-0.55f, -0.2f);
	glVertex2f(-0.75f, -0.2f);
	glVertex2f(-0.75f, 0.33f);
	glVertex2f(-0.55f, 0.33f);

	 glEnd();
	 //window:1

	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.57f, 0.0f);
	glVertex2f(-0.57f, -0.15f);
	glVertex2f(-0.73f, -0.15f);
	glVertex2f(-0.73f, 0.0f);

	 glEnd();

	 //window-2

	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.57f, 0.1f);
	glVertex2f(-0.57f, 0.25f);
	glVertex2f(-0.73f, 0.25f);
	glVertex2f(-0.73f, 0.1f);

	 glEnd();

	 //window-4
	 /*

	 glBegin(GL_QUADS);

*/
	 //left border:
	 //no:1
	 glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.57f, 0.05f);
	glVertex2f(-0.57f, 0.03f);
	glVertex2f(-0.73f, 0.03f);
	glVertex2f(-0.73f, 0.05f);

	 glEnd();
	 //no:2
	 glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.57f, 0.29f);
	glVertex2f(-0.57f, 0.31f);
	glVertex2f(-0.73f, 0.31f);
	glVertex2f(-0.73f, 0.29f);

	 glEnd();
	 //left building :3
    glBegin(GL_QUADS);
	glColor3ub(102,0,102);

	glVertex2f(-0.8f, -0.2f);
	glVertex2f(-0.95f, -0.2f);
	glVertex2f(-0.95f, 0.45f);
	glVertex2f(-0.8f, 0.45f);

	 glEnd();
	 //design-1

	 glBegin(GL_QUADS);
	glColor3ub(102,0,102);

	glVertex2f(-0.82f, 0.45f);
	glVertex2f(-0.93f, 0.45f);
	glVertex2f(-0.93f, 0.5f);
	glVertex2f(-0.82f, 0.5f);

	 glEnd();
	 //design-2

	 glBegin(GL_QUADS);
	glColor3ub(102,0,102);

	glVertex2f(-0.83f, 0.5f);
	glVertex2f(-0.92f, 0.5f);
	glVertex2f(-0.92f, 0.6f);
	glVertex2f(-0.83f, 0.6f);

	 glEnd();

	 //design -border
	 //b-1

	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.83f, 0.46f);
	glVertex2f(-0.92f, 0.46f);
	glVertex2f(-0.92f, 0.48f);
	glVertex2f(-0.83f, 0.48f);

	 glEnd();
	 //b-2
	  glBegin(GL_QUADS);
	glColor3ub(204,204,255);

	glVertex2f(-0.85f, 0.52f);
	glVertex2f(-0.9f, 0.52f);
	glVertex2f(-0.9f, 0.58f);
	glVertex2f(-0.85f, 0.58f);

	 glEnd();
/*
	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(-0.8f, -0.2f);
	glVertex2f(-0.95f, -0.2f);
	glVertex2f(-0.95f, 0.45f);
	glVertex2f(-0.8f, 0.45f);

	 glEnd();
*/

	 //window-1
	  glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, -0.18f);
	glVertex2f(-0.93f, -0.18f);
	glVertex2f(-0.93f, -0.11f);
	glVertex2f(-0.82f, -0.11f);

	 glEnd();

	 //window-2
	  glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, -0.05f);
	glVertex2f(-0.93f, -0.05f);
	glVertex2f(-0.93f, 0.02f);
	glVertex2f(-0.82f, 0.02f);

	 glEnd();
	 //window-3
	  glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.08f);
	glVertex2f(-0.93f, 0.08f);
	glVertex2f(-0.93f, 0.15f);
	glVertex2f(-0.82f, 0.15f);

	 glEnd();
	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.22f);
	glVertex2f(-0.93f, 0.22f);
	glVertex2f(-0.93f, 0.29f);
	glVertex2f(-0.82f, 0.29f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.35f);
	glVertex2f(-0.93f, 0.35f);
	glVertex2f(-0.93f, 0.42f);
	glVertex2f(-0.82f, 0.42f);

	 glEnd();
	 //border
	 //b-1
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, -0.09f);
	glVertex2f(-0.93f, -0.09f);
	glVertex2f(-0.93f, -0.07f);
	glVertex2f(-0.82f,- 0.07f);

	 glEnd();

	 //b-2
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.04f);
	glVertex2f(-0.93f, 0.04f);
	glVertex2f(-0.93f, 0.06f);
	glVertex2f(-0.82f, 0.06f);

	 glEnd();
	 //b-3
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.17f);
	glVertex2f(-0.93f, 0.17f);
	glVertex2f(-0.93f, 0.19f);
	glVertex2f(-0.82f, 0.19f);

	 glEnd();
//b-4
glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.82f, 0.31f);
	glVertex2f(-0.93f, 0.31f);
	glVertex2f(-0.93f, 0.33f);
	glVertex2f(-0.82f, 0.33f);

	 glEnd();




	 //Right building:1
	 glBegin(GL_QUADS);
	glColor3ub(0,102,102);

	glVertex2f(0.3f, -0.2f);
	glVertex2f(0.5f, -0.2f);
	glVertex2f(0.5f, 0.2f);
	glVertex2f(0.3f, 0.2f);

	 glEnd();


	 //WINDOW -1
	  glBegin(GL_QUADS);
	glColor3ub(255,255 ,102 );

	glVertex2f(0.32f, 0.07f);
	glVertex2f(0.37f, 0.07f);
	glVertex2f(0.37f, 0.13f);
	glVertex2f(0.32f, 0.13f);

	glEnd();
	//window-2
	glBegin(GL_QUADS);
	glColor3ub(255,255 ,102 );

	glVertex2f(0.43f, 0.07f);
	glVertex2f(0.48f, 0.07f);
	glVertex2f(0.48f, 0.13f);
	glVertex2f(0.43f, 0.13f);

	glEnd();
	//window-3
	glBegin(GL_QUADS);
	glColor3ub(255,255 ,102 );

	glVertex2f(0.32f, 0.02f);
	glVertex2f(0.37f, 0.02f);
	glVertex2f(0.37f, -0.04f);
	glVertex2f(0.32f, -0.04f);

	 glEnd();
	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,102 );

	glVertex2f(0.43f, 0.02f);
	glVertex2f(0.48f, 0.02f);
	glVertex2f(0.48f, -0.04f);
	glVertex2f(0.43f, -0.04f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,102 );

	glVertex2f(0.32f, -0.09f);
	glVertex2f(0.37f, -0.09f);
	glVertex2f(0.37f, -0.15f);
	glVertex2f(0.32f, -0.15f);

	 glEnd();
	 //window-6
	 glBegin(GL_QUADS);
	glColor3ub(255,255 ,102 );

	glVertex2f(0.43f, -0.09f);
	glVertex2f(0.48f, -0.09f);
	glVertex2f(0.48f, -0.15f);
	glVertex2f(0.43f, -0.15f);

	 glEnd();
//BORDER
//border-1
glBegin(GL_QUADS);
	glColor3ub(255,102 ,178 );

	glVertex2f(0.395f, 0.07f);
	glVertex2f(0.403f, 0.07f);
	glVertex2f(0.403f, 0.13f);
	glVertex2f(0.395f, 0.13f);

	 glEnd();
	 //b-2

	 glBegin(GL_QUADS);
	glColor3ub(255,102 ,178 );

	glVertex2f(0.395f, -0.09f);
	glVertex2f(0.403f, -0.09f);
	glVertex2f(0.403f, -0.15f);
	glVertex2f(0.395f, -0.15f);

	 glEnd();

	 //b-3

	 glBegin(GL_QUADS);
	glColor3ub(255,102,178 );

	glVertex2f(0.395f, 0.02f);
	glVertex2f(0.403f, 0.02f);
	glVertex2f(0.403f, -0.04f);
	glVertex2f(0.395f, -0.04f);

	 glEnd();
	  //right Building:2

	 glBegin(GL_QUADS);
	glColor3ub(76,0,153);

	glVertex2f(0.55f, -0.2f);
	glVertex2f(0.75f, -0.2f);
	glVertex2f(0.75f, 0.33f);
	glVertex2f(0.55f, 0.33f);

	 glEnd();

	 //WINDOW-1

    glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(0.57f, 0.0f);
	glVertex2f(0.57f, -0.15f);
	glVertex2f(0.73f, -0.15f);
	glVertex2f(0.73f, 0.0f);

	 glEnd();

	 //window-2
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(0.57f, 0.1f);
	glVertex2f(0.57f, 0.25f);
	glVertex2f(0.73f, 0.25f);
	glVertex2f(0.73f, 0.1f);

	 glEnd();

	 //left border :
	 //no:1
	 glBegin(GL_QUADS);
	glColor3ub(0,204,102);

	glVertex2f(0.57f, 0.05f);
	glVertex2f(0.57f, 0.03f);
	glVertex2f(0.73f, 0.03f);
	glVertex2f(0.73f, 0.05f);

	 glEnd();
	 //no:2
	 glBegin(GL_QUADS);
	glColor3ub(0,204,102);

	glVertex2f(0.57f, 0.29f);
	glVertex2f(0.57f, 0.31f);
	glVertex2f(0.73f, 0.31f);
	glVertex2f(0.73f, 0.29f);

	 glEnd();
	  //right building:3

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.8f, -0.2f);
	glVertex2f(0.95f, -0.2f);
	glVertex2f(0.95f, 0.45f);
	glVertex2f(0.8f, 0.45f);

	 glEnd();
	 //design-1

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.82f, 0.45f);
	glVertex2f(0.93f, 0.45f);
	glVertex2f(0.93f, 0.5f);
	glVertex2f(0.82f, 0.5f);

	 glEnd();
	 //design-2

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.83f, 0.5f);
	glVertex2f(0.92f, 0.5f);
	glVertex2f(0.92f, 0.6f);
	glVertex2f(0.83f, 0.6f);

	 glEnd();

	 //design -border
	 //b-1

	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.83f, 0.46f);
	glVertex2f(0.92f, 0.46f);
	glVertex2f(0.92f, 0.48f);
	glVertex2f(0.83f, 0.48f);

	 glEnd();
	 //b-2
	  glBegin(GL_QUADS);
	glColor3ub(255,204,153);

	glVertex2f(0.85f, 0.52f);
	glVertex2f(0.9f, 0.52f);
	glVertex2f(0.9f, 0.58f);
	glVertex2f(0.85f, 0.58f);

	 glEnd();

	 glBegin(GL_QUADS);
	glColor3ub(102,0,51);

	glVertex2f(0.8f, -0.2f);
	glVertex2f(0.95f, -0.2f);
	glVertex2f(0.95f, 0.45f);
	glVertex2f(0.8f, 0.45f);

	 glEnd();


	 //window-1
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(0.82f, -0.18f);
	glVertex2f(0.93f, -0.18f);
	glVertex2f(0.93f, -0.11f);
	glVertex2f(0.82f, -0.11f);

	 glEnd();

	 //window-2
	  glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(0.82f, -0.05f);
	glVertex2f(0.93f, -0.05f);
	glVertex2f(0.93f, 0.02f);
	glVertex2f(0.82f, 0.02f);

	 glEnd();
	 //window-3
	  glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(0.82f, 0.08f);
	glVertex2f(0.93f, 0.08f);
	glVertex2f(0.93f, 0.15f);
	glVertex2f(0.82f, 0.15f);

	 glEnd();
	 //window-4
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(0.82f, 0.22f);
	glVertex2f(0.93f, 0.22f);
	glVertex2f(0.93f, 0.29f);
	glVertex2f(0.82f, 0.29f);

	 glEnd();
	 //window-5
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(0.82f, 0.35f);
	glVertex2f(0.93f, 0.35f);
	glVertex2f(0.93f, 0.42f);
	glVertex2f(0.82f, 0.42f);

	 glEnd();
	 //border
	 //b-1
	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, -0.09f);
	glVertex2f(0.93f, -0.09f);
	glVertex2f(0.93f, -0.07f);
	glVertex2f(0.82f,- 0.07f);

	 glEnd();

	 //b-2
	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, 0.04f);
	glVertex2f(0.93f, 0.04f);
	glVertex2f(0.93f, 0.06f);
	glVertex2f(0.82f, 0.06f);

	 glEnd();
	 //b-3
	 glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, 0.17f);
	glVertex2f(0.93f, 0.17f);
	glVertex2f(0.93f, 0.19f);
	glVertex2f(0.82f, 0.19f);

	 glEnd();
//b-4
    glBegin(GL_QUADS);
	glColor3ub(200,205,102);

	glVertex2f(0.82f, 0.31f);
	glVertex2f(0.93f, 0.31f);
	glVertex2f(0.93f, 0.33f);
	glVertex2f(0.82f, 0.33f);

	 glEnd();


	  //right tree 1


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.265f,-0.25f);
	glVertex2f(0.265f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.200f,-0.17f);
	glVertex2f(0.330f,-0.17f);
	glVertex2f(0.265f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.205f,-0.15f);
	glVertex2f(0.325f,-0.15f);
	glVertex2f(0.265f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.210f,-0.13f);
	glVertex2f(0.320f,-0.13f);
	glVertex2f(0.265f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.215f,-0.11f);
	glVertex2f(0.315f,-0.11f);
	glVertex2f(0.265f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.220f,-0.09f);
	glVertex2f(0.310f,-0.09f);
	glVertex2f(0.265f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.225f,-0.07f);
	glVertex2f(0.305f,-0.07f);
	glVertex2f(0.265f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.230f,-0.05f);
	glVertex2f(0.300f,-0.05f);
	glVertex2f(0.265f,0.0f);
	glEnd();

//right tree 2


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.525f,-0.25f);
	glVertex2f(0.525f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.460f,-0.17f);
	glVertex2f(0.590f,-0.17f);
	glVertex2f(0.525f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.465f,-0.15f);
	glVertex2f(0.585f,-0.15f);
	glVertex2f(0.525f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.470f,-0.13f);
	glVertex2f(0.580f,-0.13f);
	glVertex2f(0.525f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.475f,-0.11f);
	glVertex2f(0.575f,-0.11f);
	glVertex2f(0.525f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.480f,-0.09f);
	glVertex2f(0.570f,-0.09f);
	glVertex2f(0.525f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.485f,-0.07f);
	glVertex2f(0.565f,-0.07f);
	glVertex2f(0.525f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.490f,-0.05f);
	glVertex2f(0.560f,-0.05f);
	glVertex2f(0.525f,0.0f);
	glEnd();

	//right tree 3


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.775f,-0.25f);
	glVertex2f(0.775f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.710f,-0.17f);
	glVertex2f(0.840f,-0.17f);
	glVertex2f(0.775f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.715f,-0.15f);
	glVertex2f(0.835f,-0.15f);
	glVertex2f(0.775f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.720f,-0.13f);
	glVertex2f(0.830f,-0.13f);
	glVertex2f(0.775f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.725f,-0.11f);
	glVertex2f(0.825f,-0.11f);
	glVertex2f(0.775f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.730f,-0.09f);
	glVertex2f(0.820f,-0.09f);
	glVertex2f(0.775f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.735f,-0.07f);
	glVertex2f(0.815f,-0.07f);
	glVertex2f(0.775f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.740f,-0.05f);
	glVertex2f(0.810f,-0.05f);
	glVertex2f(0.775f,0.0f);
	glEnd();

	//left tree 1


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.255f,-0.25f);
	glVertex2f(-0.255f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.190f,-0.17f);
	glVertex2f(-0.320f,-0.17f);
	glVertex2f(-0.255f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.195f,-0.15f);
	glVertex2f(-0.315f,-0.15f);
	glVertex2f(-0.255f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.200f,-0.13f);
	glVertex2f(-0.310f,-0.13f);
	glVertex2f(-0.255f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.205f,-0.11f);
	glVertex2f(-0.305f,-0.11f);
	glVertex2f(-0.255f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.210f,-0.09f);
	glVertex2f(-0.300f,-0.09f);
	glVertex2f(-0.255f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.215f,-0.07f);
	glVertex2f(-0.295f,-0.07f);
	glVertex2f(-0.255f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.220f,-0.05f);
	glVertex2f(-0.290f,-0.05f);
	glVertex2f(-0.255f,0.0f);
	glEnd();

	//left tree 2


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.525f,-0.25f);
	glVertex2f(-0.525f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.460f,-0.17f);
	glVertex2f(-0.590f,-0.17f);
	glVertex2f(-0.525f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.465f,-0.15f);
	glVertex2f(-0.585f,-0.15f);
	glVertex2f(-0.525f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.470f,-0.13f);
	glVertex2f(-0.580f,-0.13f);
	glVertex2f(-0.525f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.475f,-0.11f);
	glVertex2f(-0.575f,-0.11f);
	glVertex2f(-0.525f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.480f,-0.09f);
	glVertex2f(-0.570f,-0.09f);
	glVertex2f(-0.525f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.485f,-0.07f);
	glVertex2f(-0.565f,-0.07f);
	glVertex2f(-0.525f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.490f,-0.05f);
	glVertex2f(-0.560f,-0.05f);
	glVertex2f(-0.525f,0.0f);
	glEnd();

	//left tree 3


	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.775f,-0.25f);
	glVertex2f(-0.775f,-0.1f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.710f,-0.17f);
	glVertex2f(-0.840f,-0.17f);
	glVertex2f(-0.775f,-0.12f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.715f,-0.15f);
	glVertex2f(-0.835f,-0.15f);
	glVertex2f(-0.775f,-0.10f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.720f,-0.13f);
	glVertex2f(-0.830f,-0.13f);
	glVertex2f(-0.775f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.725f,-0.11f);
	glVertex2f(-0.825f,-0.11f);
	glVertex2f(-0.775f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.730f,-0.09f);
	glVertex2f(-0.820f,-0.09f);
	glVertex2f(-0.775f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.735f,-0.07f);
	glVertex2f(-0.815f,-0.07f);
	glVertex2f(-0.775f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.740f,-0.05f);
	glVertex2f(-0.810f,-0.05f);
	glVertex2f(-0.775f,0.0f);
	glEnd();







    //wall
	glPointSize(30.0);
	glBegin(GL_POINTS);
	glColor3ub(96, 96, 96);
	glVertex2f(0.97f, -0.33f);
	glVertex2f(0.85f, -0.33f);
	glVertex2f(0.73f, -0.33f);
	glVertex2f(0.61f, -0.33f);
    glVertex2f(0.49f, -0.33f);
	glVertex2f(0.37f, -0.33f);
	glVertex2f(0.25f, -0.33f);
	glVertex2f(0.13f, -0.33f);
	glVertex2f(0.01f, -0.33f);
	glVertex2f(-0.11f, -0.33f);
	glVertex2f(-0.23f, -0.33f);
	glVertex2f(-0.35f, -0.33f);
	glVertex2f(-0.47f, -0.33f);
	glVertex2f(-0.59f, -0.33f);
	glVertex2f(-0.71f, -0.33f);
	glVertex2f(-0.83f, -0.33f);
	glVertex2f(-0.95f, -0.33f);
	glVertex2f(-0.98f, -0.33f);

	glVertex2f(0.91f, -0.33f);
    glVertex2f(0.79f, -0.33f);
    glVertex2f(0.67f, -0.33f);
    glVertex2f(0.55f, -0.33f);
    glVertex2f(0.43f, -0.33f);
    glVertex2f(0.31f, -0.33f);
    glVertex2f(0.19f, -0.33f);
    glVertex2f(0.07f, -0.33f);
    glVertex2f(-0.05f, -0.33f);
    glVertex2f(-0.17f, -0.33f);
    glVertex2f(-0.29f, -0.33f);
    glVertex2f(-0.41f, -0.33f);
    glVertex2f(-0.53f, -0.33f);
    glVertex2f(-0.65f, -0.33f);
    glVertex2f(-0.77f, -0.33f);
    glVertex2f(-0.89f, -0.33f);
	glEnd();

	//lamp stand

	glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.85f, -0.33f);
	glVertex2f(0.85f, -0.2f);

	glVertex2f(0.61f, -0.33f);
	glVertex2f(0.61f, -0.2f);

	glVertex2f(0.37f, -0.33f);
	glVertex2f(0.37f, -0.2f);

	glVertex2f(0.13f, -0.33f);
	glVertex2f(0.13f, -0.2f);

	glVertex2f(-0.11f, -0.33f);
	glVertex2f(-0.11f, -0.2f);

	glVertex2f(-0.35f, -0.33f);
	glVertex2f(-0.35f, -0.2f);

	glVertex2f(-0.59f, -0.33f);
	glVertex2f(-0.59f, -0.2f);

	glVertex2f(-0.83f, -0.33f);
	glVertex2f(-0.83f, -0.2f);

	glEnd();

    // lamp horizontal
	glLineWidth(4.5);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);

	glVertex2f(0.83f, -0.2f);
	glVertex2f(0.87f, -0.2f);

	glVertex2f(0.59f, -0.2f);
	glVertex2f(0.63f, -0.2f);

	glVertex2f(0.35f, -0.2f);
	glVertex2f(0.39f, -0.2f);

	glVertex2f(0.11f, -0.2f);
	glVertex2f(0.15f, -0.2f);

	glVertex2f(-0.13f, -0.2f);
	glVertex2f(-0.09f, -0.2f);

	glVertex2f(-0.37f, -0.2f);
	glVertex2f(-0.33f, -0.2f);

	glVertex2f(-0.61f, -0.2f);
	glVertex2f(-0.57f, -0.2f);

	glVertex2f(-0.85f, -0.2f);
	glVertex2f(-0.81f, -0.2f);

	glEnd();

	//lamp post
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 0);
	glVertex2f(0.83f, -0.2f); //left bottom
	glVertex2f(0.87f, -0.2f); //right bottom
	glVertex2f(0.89f, -0.15f); //right middle
	glVertex2f(0.87f, -0.1f);  //right top
	glVertex2f(0.83f, -0.1f);  //left top
	glVertex2f(0.81f, -0.15f); //left middle
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 0, 0);
	glVertex2f(0.59f, -0.2f);
	glVertex2f(0.63f, -0.2f);
	glVertex2f(0.65f, -0.15f);
	glVertex2f(0.63f, -0.1f);
	glVertex2f(0.59f, -0.1f);
	glVertex2f(0.57f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0, 255, 255);
	glVertex2f(0.35f, -0.2f);
	glVertex2f(0.39f, -0.2f);
	glVertex2f(0.41f, -0.15f);
	glVertex2f(0.39f, -0.1f);
	glVertex2f(0.35f, -0.1f);
	glVertex2f(0.33f, -0.15f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(127, 0, 255);
	glVertex2f(0.11f, -0.2f);
	glVertex2f(0.15f, -0.2f);
	glVertex2f(0.17f, -0.15f);
	glVertex2f(0.15f, -0.1f);
	glVertex2f(0.11f, -0.1f);
	glVertex2f(0.09f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0, 255, 0);
	glVertex2f(-0.13f, -0.2f);
	glVertex2f(-0.09f, -0.2f);
	glVertex2f(-0.07f, -0.15f);
	glVertex2f(-0.09f, -0.1f);
	glVertex2f(-0.13f, -0.1f);
	glVertex2f(-0.15f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 0, 127);
	glVertex2f(-0.37f, -0.2f);
	glVertex2f(-0.33f, -0.2f);
	glVertex2f(-0.31f, -0.15f);
	glVertex2f(-0.33f, -0.1f);
	glVertex2f(-0.37f, -0.1f);
	glVertex2f(-0.39f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 128, 0);
	glVertex2f(-0.61f, -0.2f);
	glVertex2f(-0.57f, -0.2f);
	glVertex2f(-0.55f, -0.15f);
	glVertex2f(-0.57f, -0.1f);
	glVertex2f(-0.61f, -0.1f);
	glVertex2f(-0.63f, -0.15f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 255);
	glVertex2f(-0.85f, -0.2f);
	glVertex2f(-0.81f, -0.2f);
	glVertex2f(-0.79f, -0.15f);
	glVertex2f(-0.81f, -0.1f);
	glVertex2f(-0.85f, -0.1f);
	glVertex2f(-0.87f, -0.15f);
	glEnd();





    //river
	glBegin(GL_QUADS);
	glColor3ub(0, 135, 210);
    glVertex2f(-1.0f, -1.0f);
    glColor3ub(0, 135, 210);
    glVertex2f(1.0f, -1.0f);
    glColor3ub(130, 160, 180);
    glVertex2f(1.0f, -0.37f);
	glVertex2f(-1.0f, -0.37f);
    glEnd();

    //SHIP

	 //Water bus
    glPushMatrix();
    glTranslatef(ship_position2,0.0f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
    glVertex2f(0.1f, -0.47f);
    glVertex2f(0.5f, -0.47f);
	glVertex2f(0.5f, -0.37f);
    glVertex2f(0.1f, -0.37f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.5f, -0.47f);
    glVertex2f(0.65f, -0.37f);
    glVertex2f(0.5f, -0.37f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.16f, -0.37f);
    glVertex2f(0.42f, -0.37f);
    glVertex2f(0.42f, -0.27f);
    glVertex2f(0.16f, -0.27f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);
    glVertex2f(0.42f, -0.27f);
    glVertex2f(0.42f, -0.37f);
    glVertex2f(0.52f, -0.37f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.34f, -0.2f);
    glVertex2f(0.34f, -0.27f);
    glVertex2f(0.2f, -0.27f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);
    glVertex2f(0.34f, -0.2f);
    glVertex2f(0.34f, -0.27f);
    glVertex2f(0.4f, -0.27f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.22f, -0.12f);
    glVertex2f(0.29f, -0.12f);
    glVertex2f(0.29f, -0.2f);
    glVertex2f(0.22f, -0.2f);
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);

    glVertex2f(0.29f, -0.12f);
    glVertex2f(0.29f, -0.2f);
    glVertex2f(0.32f, -0.2f);

    glEnd();
    //window
    glBegin(GL_QUADS);
	glColor3ub(255,255,102);
    glVertex2f(0.24f, -0.13f);
    glVertex2f(0.28f, -0.13f);
    glVertex2f(0.28f, -0.18f);
    glVertex2f(0.24f, -0.18f);
    glEnd();

    //second row
    glBegin(GL_QUADS);
    glVertex2f(0.22f, -0.21f);
    glVertex2f(0.26f, -0.21f);
    glVertex2f(0.26f, -0.26f);
    glVertex2f(0.22f, -0.26f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.28f, -0.21f);
    glVertex2f(0.32f, -0.21f);
    glVertex2f(0.32f, -0.26f);
    glVertex2f(0.28f, -0.26f);
    glEnd();

    //third row
    glBegin(GL_QUADS);
    glVertex2f(0.18f, -0.28f);
    glVertex2f(0.22f, -0.28f);
    glVertex2f(0.22f, -0.33f);
    glVertex2f(0.18f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.24f, -0.28f);
    glVertex2f(0.28f, -0.28f);
    glVertex2f(0.28f, -0.33f);
    glVertex2f(0.24f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.3f, -0.28f);
    glVertex2f(0.34f, -0.28f);
    glVertex2f(0.34f, -0.33f);
    glVertex2f(0.3f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.36f, -0.28f);
    glVertex2f(0.4f, -0.28f);
    glVertex2f(0.4f, -0.33f);
    glVertex2f(0.36f, -0.33f);
    glEnd();

    glPopMatrix();




    //water bus -2

    glPushMatrix();
    glTranslatef(ship_position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(0,0,0);

	glVertex2f(-0.2f, -0.7f);
	glVertex2f(-0.6f, -0.7f);
	glVertex2f(-0.75f, -0.6f);
	glVertex2f(-0.2f, -0.6f);

	 glEnd();
	 //bus part-1
	 glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.65f, -0.6f);
	glVertex2f(-0.6f, -0.5f);
	glVertex2f(-0.25f, -0.5f);
	glVertex2f(-0.25f, -0.6f);

	 glEnd();
	 //window part-1
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.59f, -0.52f);
	glVertex2f(-0.53f, -0.52f);
	glVertex2f(-0.53f, -0.57f);
	glVertex2f(-0.59f, -0.57f);

	 glEnd();
	 //window part-2
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.5f, -0.52f);
	glVertex2f(-0.44f, -0.52f);
	glVertex2f(-0.44f, -0.57f);
	glVertex2f(-0.5f, -0.57f);

	 glEnd();
//window part -3

	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.41f, -0.52f);
	glVertex2f(-0.35f, -0.52f);
	glVertex2f(-0.35f, -0.57f);
	glVertex2f(-0.41f, -0.57f);

	 glEnd();

//window part -4

	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.32f, -0.52f);
	glVertex2f(-0.26f, -0.52f);
	glVertex2f(-0.26f, -0.57f);
	glVertex2f(-0.32f, -0.57f);

	 glEnd();
	 //bus part-2
	 glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.55f, -0.5f);
	glVertex2f(-0.5f, -0.4f);
	glVertex2f(-0.3f, -0.4f);
	glVertex2f(-0.3f, -0.5f);

	 glEnd();
//bus part-2
//window-1
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.49f, -0.42f);
	glVertex2f(-0.43f, -0.42f);
	glVertex2f(-0.43f, -0.47f);
	glVertex2f(-0.49f, -0.47f);

	 glEnd();
	 //bus part-2
	 //window-2
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.4f, -0.42f);
	glVertex2f(-0.34f, -0.42f);
	glVertex2f(-0.34f, -0.47f);
	glVertex2f(-0.4f, -0.47f);

	 glEnd();
	 //bus part-3
	glBegin(GL_QUADS);
	glColor3ub(255,255,255);

	glVertex2f(-0.47f, -0.4f);
	glVertex2f(-0.45f, -0.3f);
	glVertex2f(-0.35f, -0.3f);
	glVertex2f(-0.35f, -0.4f);

	 glEnd();
	 //window-1
	 glBegin(GL_QUADS);
	glColor3ub(255,255,102);

	glVertex2f(-0.44f, -0.32f);
	glVertex2f(-0.38f, -0.32f);
	glVertex2f(-0.38f, -0.37f);
	glVertex2f(-0.44f, -0.37f);

	 glEnd();


    glPopMatrix();



    glFlush();
    glutSwapBuffers();

}






void AIUB() {

    glLoadIdentity();
    float x, y;
	int i;
	GLfloat radius;
	int triangleAmount =30;
	GLfloat twicePi = 2.0f * PI;

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);



    glBegin(GL_QUADS);
	glColor3ub(199, 239, 255);
	glVertex2f(-1.0f,-1.0f);
	glColor3ub(204, 255, 255 );
	glVertex2f(1.0f,-1.0f);
	glColor3ub(199, 239, 255);
	glVertex2f(1.0f,1.0f);
	glColor3ub(204, 255, 255);
	glVertex2f(-1.0f,1.0f);
	glEnd();


    //Sun
		glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,165,0);
        x=.7f; y=.75f; radius =.05f;

	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;

				glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

   //cloud
   glPushMatrix();
   glTranslatef(cloud_position1,0.0f, 0.0f);
  	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glTranslatef(0.7f, 0.07f, 0.0f);
	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();


	//AIUB Building
		glBegin(GL_TRIANGLE_FAN);
		glColor3ub(210,207,207);
        x=.3f; y=.45f; radius =.3f;
    //GLfloat radius = 0.8f; //radius
        twicePi = 2.0f * PI;

                    glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }

        glEnd();




	glBegin(GL_QUADS);
	glColor3ub(102, 178, 255 );
	glVertex2f(0.03f,0.32f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.57f,0.32f);
	glColor3ub(102, 178, 255);
	glVertex2f(0.58f,0.35f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.02f,0.35f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 178, 255 );
	glVertex2f(0.03f,0.32f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.57f,0.32f);
	glColor3ub(102, 178, 255);
	glVertex2f(0.58f,0.35f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.02f,0.35f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 178, 255 );
	glVertex2f(0.01f,0.38f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.59f,0.38f);
	glColor3ub(102, 178, 255);
	glVertex2f(0.595f,0.41f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.005f,0.41f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 178, 255 );
	glVertex2f(0.0f,0.44f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.6f,0.44f);
	glColor3ub(102, 178, 255);
	glVertex2f(0.6f,0.47f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.0f,0.47f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 178, 255 );
	glVertex2f(0.007f,0.51f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.595f,0.51f);
	glColor3ub(102, 178, 255);
	glVertex2f(0.59f,0.54f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.015f,0.54f);
	glEnd();

	glLineWidth(0.5);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.3f, 0.75f);
	glVertex2f(0.3f, 0.8f);
	glEnd();

//another building
    glBegin(GL_QUADS);
	glColor3ub(204, 229, 255 );
	glVertex2f(-0.4f,0.53f);
	glVertex2f(-0.6f,0.6f);
	glVertex2f(-0.6f,0.3f);
	glVertex2f(-0.4f,0.3f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(0, 114, 0 );
	glVertex2f(-1.0f,0.5f);
	glVertex2f(-0.5f,0.5f);
	glVertex2f(-0.45f,0.6f);
	glVertex2f(-1.0f,0.6f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(160, 160, 160 );
	glVertex2f(-0.45f, 0.6f);
	glVertex2f(-0.35f, 0.46f);
	glVertex2f(-0.4f, 0.46f);
	glVertex2f(-0.475f, 0.55f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(224, 224, 224 );
	glVertex2f(-1.0f, 0.45f);
	glVertex2f(-1.0f, 0.5f);
	glVertex2f(-0.6f, 0.5f);
	glVertex2f(-0.6f, 0.45f);
	glEnd();

	glLineWidth(10.5);
	glBegin(GL_LINES);
	glVertex2f(-0.4f, 0.46f);
	glVertex2f(-0.4f, 0.3f);

	glColor3ub(192, 192, 192);
	glVertex2f(-0.6f, 0.5f);
	glVertex2f(-0.6f, 0.3f);

	glVertex2f(-0.75f, 0.5f);
	glVertex2f(-0.75f, 0.3f);

	glVertex2f(-0.9f, 0.5f);
	glVertex2f(-0.9f, 0.3f);
	glEnd();

	glLineWidth(0.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.6f, 0.5f);
	glVertex2f(-0.6f, 0.3f);

	glVertex2f(-0.75f, 0.5f);
	glVertex2f(-0.75f, 0.3f);

	glVertex2f(-0.9f, 0.5f);
	glVertex2f(-0.9f, 0.3f);

	glVertex2f(-0.4f, 0.46f);
	glVertex2f(-0.4f, 0.3f);
	glEnd();

	glLineWidth(0.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.5f,0.5f);
	glVertex2f(-0.45f,0.6f);

	glVertex2f(-0.55f,0.5f);
	glVertex2f(-0.50f,0.6f);

	glVertex2f(-0.60f,0.5f);
	glVertex2f(-0.55f,0.6f);

	glVertex2f(-0.65f,0.5f);
	glVertex2f(-0.60f,0.6f);

	glVertex2f(-0.70f,0.5f);
	glVertex2f(-0.65f,0.6f);

	glVertex2f(-0.75f,0.5f);
	glVertex2f(-0.70f,0.6f);

	glVertex2f(-0.80f,0.5f);
	glVertex2f(-0.75f,0.6f);

	glVertex2f(-0.85f,0.5f);
	glVertex2f(-0.80f,0.6f);

	glVertex2f(-0.90f,0.5f);
	glVertex2f(-0.85f,0.6f);

	glVertex2f(-0.95f,0.5f);
	glVertex2f(-0.90f,0.6f);

	glVertex2f(-1.00f,0.5f);
	glVertex2f(-0.95f,0.6f);


	glEnd();





//corridor
	glBegin(GL_QUADS);
	glColor3ub(170, 86, 0 );
	glVertex2f(-1.0f,-0.2f);
	glColor3ub(153, 76, 0 );
	glVertex2f(1.0f,-0.2f);
	glColor3ub(170, 86, 0);
	glVertex2f(1.0f,0.3f);
	glColor3ub(153, 76, 0);
	glVertex2f(-1.0f,0.3f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 114, 0 );
	glVertex2f(-1.0f,0.25f);
	glVertex2f(1.0f,0.25f);
	glVertex2f(1.0f,0.3f);
	glVertex2f(-1.0f,0.3f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255 );
	glVertex2f(-1.0f,0.15f);
	glVertex2f(1.0f,0.15f);
	glVertex2f(1.0f,0.25f);
	glVertex2f(-1.0f,0.25f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(64, 64, 64 );
	glVertex2f(-0.4f,-0.2f);
	glVertex2f(0.0f,-0.2f);
	glVertex2f(0.0f,0.25f);
	glVertex2f(-0.4f,0.25f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(160, 160, 160 );
	glVertex2f(-0.4f,0.15f);
	glVertex2f(0.0f,0.15f);
	glVertex2f(0.0f,0.25f);
	glVertex2f(-0.4f,0.25f);
	glEnd();

	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(224, 224, 224 );
	glVertex2f(-0.3f,-0.2f);
	glVertex2f(-0.3f,-0.12f);
	glEnd();

	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(224, 224, 224 );
	glVertex2f(-0.25f,-0.2f);
	glVertex2f(-0.25f,-0.12f);
	glEnd();

	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(224, 224, 224 );
	glVertex2f(-0.2f,-0.2f);
	glVertex2f(-0.2f,-0.12f);
	glEnd();

	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(224, 224, 224 );
	glVertex2f(-0.15f,-0.2f);
	glVertex2f(-0.15f,-0.12f);
	glEnd();

	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(224, 224, 224 );
	glVertex2f(-0.1f,-0.2f);
	glVertex2f(-0.1f,-0.12f);
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(32, 32, 32);
	glVertex2f(-0.399f,-0.2f);
	glVertex2f(-0.399f,0.15f);
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(32, 32,32);
	glVertex2f(-0.35f,-0.2f);
	glVertex2f(-0.35f,0.15f);
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(32, 32,32);
	glVertex2f(-0.31f,-0.2f);
	glVertex2f(-0.31f,0.15f);
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(32, 32,32);
	glVertex2f(-0.399f,-0.15f);
	glVertex2f(-0.31f,-0.15f);

	glVertex2f(-0.399f,-0.05f);
	glVertex2f(-0.31f,-0.05f);

	glVertex2f(-0.399f,0.05f);
	glVertex2f(-0.31f,0.05f);

	glEnd();





	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(32, 32,32);
	glVertex2f(-0.09f,-0.2f);
	glVertex2f(-0.09f,0.15f);
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(32, 32,32);
	glVertex2f(-0.05f,-0.2f);
	glVertex2f(-0.05f,0.15f);
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(32, 32,32);
	glVertex2f(0.0f,-0.2f);
	glVertex2f(0.0f,0.15f);
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(32, 32,32);
	glVertex2f(-0.09f,-0.15f);
	glVertex2f(0.0f,-0.15f);

	glVertex2f(-0.09f,-0.05f);
	glVertex2f(0.0f,-0.05f);

	glVertex2f(-0.09f,0.05f);
	glVertex2f(0.0f,0.05f);

	glEnd();

	//shade line
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255 );
	glVertex2f(-0.95f,0.25f);
	glVertex2f(-0.95f,0.3f);

	glVertex2f(-0.9f,0.25f);
	glVertex2f(-0.9f,0.3f);

	glVertex2f(-0.85f,0.25f);
	glVertex2f(-0.85f,0.3f);

	glVertex2f(-0.8f,0.25f);
	glVertex2f(-0.8f,0.3f);

	glVertex2f(-0.75f,0.25f);
	glVertex2f(-0.75f,0.3f);

	glVertex2f(-0.7f,0.25f);
	glVertex2f(-0.7f,0.3f);

	glVertex2f(-0.65f,0.25f);
	glVertex2f(-0.65f,0.3f);

	glVertex2f(-0.6f,0.25f);
	glVertex2f(-0.6f,0.3f);

	glVertex2f(-0.55f,0.25f);
	glVertex2f(-0.55f,0.3f);

	glVertex2f(-0.5f,0.25f);
	glVertex2f(-0.5f,0.3f);

	glVertex2f(-0.45f,0.25f);
	glVertex2f(-0.45f,0.3f);

	glVertex2f(-0.4f,0.25f);
	glVertex2f(-0.4f,0.3f);

	glVertex2f(-0.35f,0.25f);
	glVertex2f(-0.35f,0.3f);

	glVertex2f(-0.3f,0.25f);
	glVertex2f(-0.3f,0.3f);

	glVertex2f(-0.25f,0.25f);
	glVertex2f(-0.25f,0.3f);

	glVertex2f(-0.2f,0.25f);
	glVertex2f(-0.2f,0.3f);

	glVertex2f(-0.15f,0.25f);
	glVertex2f(-0.15f,0.3f);

	glVertex2f(-0.1f,0.25f);
	glVertex2f(-0.1f,0.3f);

	glVertex2f(-0.05f,0.25f);
	glVertex2f(-0.05f,0.3f);

	glVertex2f(-0.0f,0.25f);
	glVertex2f(-0.0f,0.3f);

	glVertex2f(0.05f,0.25f);
	glVertex2f(0.05f,0.3f);

	glVertex2f(0.1f,0.25f);
	glVertex2f(0.1f,0.3f);

	glVertex2f(0.15f,0.25f);
	glVertex2f(0.15f,0.3f);

	glVertex2f(0.2f,0.25f);
	glVertex2f(0.2f,0.3f);

	glVertex2f(0.25f,0.25f);
	glVertex2f(0.25f,0.3f);

	glVertex2f(0.3f,0.25f);
	glVertex2f(0.3f,0.3f);

	glVertex2f(0.35f,0.25f);
	glVertex2f(0.35f,0.3f);

	glVertex2f(0.4f,0.25f);
	glVertex2f(0.4f,0.3f);

	glVertex2f(0.45f,0.25f);
	glVertex2f(0.45f,0.3f);

	glVertex2f(0.5f,0.25f);
	glVertex2f(0.5f,0.3f);

	glVertex2f(0.55f,0.25f);
	glVertex2f(0.55f,0.3f);

	glVertex2f(0.6f,0.25f);
	glVertex2f(0.6f,0.3f);

	glVertex2f(0.65f,0.25f);
	glVertex2f(0.65f,0.3f);

	glVertex2f(0.7f,0.25f);
	glVertex2f(0.7f,0.3f);

	glVertex2f(0.75f,0.25f);
	glVertex2f(0.75f,0.3f);

	glVertex2f(0.8f,0.25f);
	glVertex2f(0.8f,0.3f);

	glVertex2f(0.85f,0.25f);
	glVertex2f(0.85f,0.3f);

	glVertex2f(0.9f,0.25f);
	glVertex2f(0.9f,0.3f);

	glVertex2f(0.95f,0.25f);
	glVertex2f(0.95f,0.3f);

	glEnd();

	//down shade line
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(192, 192, 192 );
	glVertex2f(-0.97f,0.25f);
	glVertex2f(-0.95f,0.15f);

	glVertex2f(-0.93f,0.25f);
	glVertex2f(-0.91f,0.15f);

	glVertex2f(-0.87f,0.25f);
	glVertex2f(-0.85f,0.15f);

	glVertex2f(-0.83f,0.25f);
	glVertex2f(-0.81f,0.15f);

	glVertex2f(-0.77f,0.25f);
	glVertex2f(-0.75f,0.15f);

	glVertex2f(-0.73f,0.25f);
	glVertex2f(-0.71f,0.15f);

	glVertex2f(-0.67f,0.25f);
	glVertex2f(-0.65f,0.15f);

	glVertex2f(-0.63f,0.25f);
	glVertex2f(-0.61f,0.15f);

	glVertex2f(-0.57f,0.25f);
	glVertex2f(-0.55f,0.15f);

	glVertex2f(-0.53f,0.25f);
	glVertex2f(-0.51f,0.15f);

	glVertex2f(-0.47f,0.25f);
	glVertex2f(-0.45f,0.15f);

	glVertex2f(-0.43f,0.25f);
	glVertex2f(-0.41f,0.15f);



	glVertex2f(0.07f,0.15f);
	glVertex2f(0.05f,0.25f);

	glVertex2f(0.03f,0.15f);
	glVertex2f(0.01f,0.25f);

	glVertex2f(0.17f,0.15f);
	glVertex2f(0.15f,0.25f);

	glVertex2f(0.13f,0.15f);
	glVertex2f(0.11f,0.25f);

	glVertex2f(0.27f,0.15f);
	glVertex2f(0.25f,0.25f);

	glVertex2f(0.23f,0.15f);
	glVertex2f(0.21f,0.25f);

	glVertex2f(0.37f,0.15f);
	glVertex2f(0.35f,0.25f);

	glVertex2f(0.33f,0.15f);
	glVertex2f(0.31f,0.25f);

	glVertex2f(0.47f,0.15f);
	glVertex2f(0.45f,0.25f);

	glVertex2f(0.43f,0.15f);
	glVertex2f(0.41f,0.25f);

	glVertex2f(0.57f,0.15f);
	glVertex2f(0.55f,0.25f);

	glVertex2f(0.53f,0.15f);
	glVertex2f(0.51f,0.25f);

	glVertex2f(0.67f,0.15f);
	glVertex2f(0.65f,0.25f);

	glVertex2f(0.63f,0.15f);
	glVertex2f(0.61f,0.25f);

	glVertex2f(0.77f,0.15f);
	glVertex2f(0.75f,0.25f);

	glVertex2f(0.73f,0.15f);
	glVertex2f(0.71f,0.25f);

	glVertex2f(0.87f,0.15f);
	glVertex2f(0.85f,0.25f);

	glVertex2f(0.83f,0.15f);
	glVertex2f(0.81f,0.25f);

	glVertex2f(0.97f,0.15f);
	glVertex2f(0.95f,0.25f);

	glVertex2f(0.93f,0.15f);
	glVertex2f(0.91f,0.25f);

	glEnd();


//right 1st windows
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255 );
	glVertex2f(0.2f,-0.15f);
	glVertex2f(0.5f,-0.15f);
	glVertex2f(0.5f,0.1f);
	glVertex2f(0.2f,0.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(153, 255, 255 );
	glVertex2f(0.22f,-0.13f);
	glVertex2f(0.48f,-0.13f);
	glVertex2f(0.48f,0.08f);
	glVertex2f(0.22f,0.08f);
	glEnd();

	glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255,255);
	glVertex2f(0.22f,-0.05f);
	glVertex2f(0.48f,-0.05f);

	glVertex2f(0.35f,-0.13f);
	glVertex2f(0.35f,0.08f);

	glVertex2f(0.285f,0.08f);
	glVertex2f(0.285f,-0.05f);

	glVertex2f(0.415f,0.08f);
	glVertex2f(0.415f,-0.05f);
	glEnd();

//right 2nd windows
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255 );
	glVertex2f(0.65f,-0.15f);
	glVertex2f(0.95f,-0.15f);
	glVertex2f(0.95f,0.1f);
	glVertex2f(0.65f,0.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(153, 255, 255 );
	glVertex2f(0.67f,-0.13f);
	glVertex2f(0.93f,-0.13f);
	glVertex2f(0.93f,0.08f);
	glVertex2f(0.67f,0.08f);
	glEnd();

	glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255,255);
	glVertex2f(0.67f,-0.05f);
	glVertex2f(0.93f,-0.05f);

	glVertex2f(0.80f,-0.13f);
	glVertex2f(0.80f,0.08f);

	glVertex2f(0.735f,0.08f);
	glVertex2f(0.735f,-0.05f);

	glVertex2f(0.865f,0.08f);
	glVertex2f(0.865f,-0.05f);
	glEnd();


//left 1st windows
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255 );
	glVertex2f(-0.6f,-0.15f);
	glVertex2f(-0.9f,-0.15f);
	glVertex2f(-0.9f,0.1f);
	glVertex2f(-0.6f,0.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(153, 255, 255 );
	glVertex2f(-0.62f,-0.13f);
	glVertex2f(-0.88f,-0.13f);
	glVertex2f(-0.88f,0.08f);
	glVertex2f(-0.62f,0.08f);
	glEnd();

	glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255,255);
	glVertex2f(-0.62f,-0.05f);
	glVertex2f(-0.88f,-0.05f);

	glVertex2f(-0.75f,-0.13f);
	glVertex2f(-0.75f,0.08f);

	glVertex2f(-0.685f,0.08f);
	glVertex2f(-0.685f,-0.05f);

	glVertex2f(-0.815f,0.08f);
	glVertex2f(-0.815f,-0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(128,0,0);
	glVertex2f(0.93f,-.80f);
	glVertex2f(0.58f,-.80f);
	glVertex2f(0.53f,-.88f);
	glVertex2f(0.85f,-.88f);
	glEnd();

//right tree 1
	glBegin(GL_QUADS);
	glColor3ub(128,0,0);
	glVertex2f(0.085f,-0.2f);
	glVertex2f(0.115f,-0.2f);
	glVertex2f(0.120f,-0.15f);
	glVertex2f(0.080f,-0.15f);
	glEnd();

	glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.1f,-0.15f);
	glVertex2f(0.1f,0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.010f,-0.13f);
	glVertex2f(0.190f,-0.13f);
	glVertex2f(0.1f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.015f,-0.11f);
	glVertex2f(0.185f,-0.11f);
	glVertex2f(0.1f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.020f,-0.09f);
	glVertex2f(0.180f,-0.09f);
	glVertex2f(0.1f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.025f,-0.07f);
	glVertex2f(0.175f,-0.07f);
	glVertex2f(0.1f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.030f,-0.05f);
	glVertex2f(0.170f,-0.05f);
	glVertex2f(0.1f,-0.00f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.035f,-0.03f);
	glVertex2f(0.165f,-0.03f);
	glVertex2f(0.1f,0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.040f,-0.01f);
	glVertex2f(0.160f,-0.01f);
	glVertex2f(0.1f,0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.045f,0.01f);
	glVertex2f(0.155f,0.01f);
	glVertex2f(0.1f,0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.050f,0.03f);
	glVertex2f(0.150f,0.03f);
	glVertex2f(0.1f,0.08f);
	glEnd();

//right tree 2
	glBegin(GL_QUADS);
	glColor3ub(128,0,0);
	glVertex2f(0.560f,-0.2f);
	glVertex2f(0.590f,-0.2f);
	glVertex2f(0.595f,-0.15f);
	glVertex2f(0.555f,-0.15f);
	glEnd();

	glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.575f,-0.15f);
	glVertex2f(0.575f,0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.510f,-0.13f);
	glVertex2f(0.640f,-0.13f);
	glVertex2f(0.575f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.515f,-0.11f);
	glVertex2f(0.635f,-0.11f);
	glVertex2f(0.575f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.520f,-0.09f);
	glVertex2f(0.630f,-0.09f);
	glVertex2f(0.575f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.525f,-0.07f);
	glVertex2f(0.625f,-0.07f);
	glVertex2f(0.575f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.530f,-0.05f);
	glVertex2f(0.620f,-0.05f);
	glVertex2f(0.575f,-0.00f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.535f,-0.03f);
	glVertex2f(0.615f,-0.03f);
	glVertex2f(0.575f,0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.540f,-0.01f);
	glVertex2f(0.610f,-0.01f);
	glVertex2f(0.575f,0.04f);
	glEnd();

//left tree 1
	glBegin(GL_QUADS);
	glColor3ub(128,0,0);
	glVertex2f(-0.515f,-0.2f);
	glVertex2f(-0.485f,-0.2f);
	glVertex2f(-0.480f,-0.15f);
	glVertex2f(-0.520f,-0.15f);
	glEnd();

	glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.5f,-0.15f);
	glVertex2f(-0.5f,0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.590f,-0.13f);
	glVertex2f(-0.410f,-0.13f);
	glVertex2f(-0.5f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.585f,-0.11f);
	glVertex2f(-0.415f,-0.11f);
	glVertex2f(-0.5f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.580f,-0.09f);
	glVertex2f(-0.420f,-0.09f);
	glVertex2f(-0.5f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.575f,-0.07f);
	glVertex2f(-0.425f,-0.07f);
	glVertex2f(-0.5f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.570f,-0.05f);
	glVertex2f(-0.430f,-0.05f);
	glVertex2f(-0.5f,-0.00f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.565f,-0.03f);
	glVertex2f(-0.435f,-0.03f);
	glVertex2f(-0.5f,0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.560f,-0.01f);
	glVertex2f(-0.440f,-0.01f);
	glVertex2f(-0.5f,0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.555f,0.01f);
	glVertex2f(-0.445f,0.01f);
	glVertex2f(-0.5f,0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.550f,0.03f);
	glVertex2f(-0.450f,0.03f);
	glVertex2f(-0.5f,0.08f);
	glEnd();

//left tree 2
	glBegin(GL_QUADS);
	glColor3ub(128,0,0);
	glVertex2f(-0.990f,-0.2f);
	glVertex2f(-0.960f,-0.2f);
	glVertex2f(-0.955f,-0.15f);
	glVertex2f(-0.995f,-0.15f);
	glEnd();

	glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.975f,-0.15f);
	glVertex2f(-0.975f,0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.910f,-0.13f);
	glVertex2f(-1.0490f,-0.13f);
	glVertex2f(-0.975f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.915f,-0.11f);
	glVertex2f(-1.0485f,-0.11f);
	glVertex2f(-0.975f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.920f,-0.09f);
	glVertex2f(-1.0480f,-0.09f);
	glVertex2f(-0.975f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.925f,-0.07f);
	glVertex2f(-1.0480f,-0.07f);
	glVertex2f(-0.975f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.930f,-0.05f);
	glVertex2f(-1.0475f,-0.05f);
	glVertex2f(-0.975f,-0.00f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.935f,-0.03f);
	glVertex2f(-1.0470f,-0.03f);
	glVertex2f(-0.975f,0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.940f,-0.01f);
	glVertex2f(-1.0465f,-0.01f);
	glVertex2f(-0.975f,0.04f);
	glEnd();










//grass
	glBegin(GL_QUADS);
	glColor3ub(76, 153, 0 );
	glVertex2f(-1.0f,-0.2f);
	glColor3ub(76, 153, 0 );
	glVertex2f(1.0f,-0.2f);
	glColor3ub(0, 102, 51);
	glVertex2f(1.0f,-1.0f);
	glColor3ub(0, 102, 51);
	glVertex2f(-1.0f,-1.0f);
	glEnd();





glPopMatrix();





//Car:
    glPushMatrix();
    glTranslatef(car_position2,0.0f, 0.0f);


	glBegin(GL_QUADS);
	glColor3ub(128,0,0);
	glVertex2f(0.93f,-0.80f);
	glVertex2f(0.58f,-0.80f);
	glVertex2f(0.53f,-0.88f);
	glVertex2f(0.85f,-0.88f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(150,0,0);
	glVertex2f(0.80f,-0.70f);
	glVertex2f(0.58f,-0.70f);
	glVertex2f(0.53f,-0.88f);
	glVertex2f(0.75f,-0.83f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(10,10,10);
	glVertex2f(0.90f,-0.80f);
	glVertex2f(0.85f,-0.80f);
	glVertex2f(0.85f,-0.75f);
	glVertex2f(0.90f,-0.75f);
	glEnd();


//wheel
    glTranslatef(0.63f, -0.89f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }


	glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(16,16,15);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();

//Wheel 2
    glTranslatef(0.20f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(16,16,15);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();


	glPopMatrix();


	glFlush();
	glutSwapBuffers();
}




void AIUBRainy() {

    glLoadIdentity();
    float x, y;
	int i;
	GLfloat radius;
	int triangleAmount =30;
	GLfloat twicePi = 2.0f * PI;

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);



    glBegin(GL_QUADS);
	glColor3ub(199, 239, 255);
	glVertex2f(-1.0f,-1.0f);
	glColor3ub(204, 255, 255 );
	glVertex2f(1.0f,-1.0f);
	glColor3ub(96, 96, 96);
	glVertex2f(1.0f,1.0f);
	glColor3ub(96, 96, 96);
	glVertex2f(-1.0f,1.0f);
	glEnd();



   //cloud
   glPushMatrix();
   glTranslatef(cloud_position1,0.0f, 0.0f);
  	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(160, 160, 160 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(160, 160, 160 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(160, 160, 160 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(160, 160, 160);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(160, 160, 160);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(160, 160, 160);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glTranslatef(0.7f, 0.07f, 0.0f);
	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(160, 160, 160);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(160, 160, 160);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(160, 160, 160);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(160, 160, 160);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(160, 160, 160);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(160, 160, 160);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();


	//AIUB Building
		glBegin(GL_TRIANGLE_FAN);
		glColor3ub(210,207,207);
        x=.3f; y=.45f; radius =.3f;
    //GLfloat radius = 0.8f; //radius
        twicePi = 2.0f * PI;

                    glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }

        glEnd();




	glBegin(GL_QUADS);
	glColor3ub(102, 178, 255 );
	glVertex2f(0.03f,0.32f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.57f,0.32f);
	glColor3ub(102, 178, 255);
	glVertex2f(0.58f,0.35f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.02f,0.35f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 178, 255 );
	glVertex2f(0.03f,0.32f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.57f,0.32f);
	glColor3ub(102, 178, 255);
	glVertex2f(0.58f,0.35f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.02f,0.35f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 178, 255 );
	glVertex2f(0.01f,0.38f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.59f,0.38f);
	glColor3ub(102, 178, 255);
	glVertex2f(0.595f,0.41f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.005f,0.41f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 178, 255 );
	glVertex2f(0.0f,0.44f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.6f,0.44f);
	glColor3ub(102, 178, 255);
	glVertex2f(0.6f,0.47f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.0f,0.47f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 178, 255 );
	glVertex2f(0.007f,0.51f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.595f,0.51f);
	glColor3ub(102, 178, 255);
	glVertex2f(0.59f,0.54f);
	glColor3ub(0, 128, 255);
	glVertex2f(0.015f,0.54f);
	glEnd();

	glLineWidth(0.5);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.3f, 0.75f);
	glVertex2f(0.3f, 0.8f);
	glEnd();

	//another building
    glBegin(GL_QUADS);
	glColor3ub(204, 229, 255 );
	glVertex2f(-0.4f,0.53f);
	glVertex2f(-0.6f,0.6f);
	glVertex2f(-0.6f,0.3f);
	glVertex2f(-0.4f,0.3f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(0, 114, 0 );
	glVertex2f(-1.0f,0.5f);
	glVertex2f(-0.5f,0.5f);
	glVertex2f(-0.45f,0.6f);
	glVertex2f(-1.0f,0.6f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(160, 160, 160 );
	glVertex2f(-0.45f, 0.6f);
	glVertex2f(-0.35f, 0.46f);
	glVertex2f(-0.4f, 0.46f);
	glVertex2f(-0.475f, 0.55f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(224, 224, 224 );
	glVertex2f(-1.0f, 0.45f);
	glVertex2f(-1.0f, 0.5f);
	glVertex2f(-0.6f, 0.5f);
	glVertex2f(-0.6f, 0.45f);
	glEnd();

	glLineWidth(10.5);
	glBegin(GL_LINES);
	glVertex2f(-0.4f, 0.46f);
	glVertex2f(-0.4f, 0.3f);

	glColor3ub(192, 192, 192);
	glVertex2f(-0.6f, 0.5f);
	glVertex2f(-0.6f, 0.3f);

	glVertex2f(-0.75f, 0.5f);
	glVertex2f(-0.75f, 0.3f);

	glVertex2f(-0.9f, 0.5f);
	glVertex2f(-0.9f, 0.3f);
	glEnd();

	glLineWidth(0.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.6f, 0.5f);
	glVertex2f(-0.6f, 0.3f);

	glVertex2f(-0.75f, 0.5f);
	glVertex2f(-0.75f, 0.3f);

	glVertex2f(-0.9f, 0.5f);
	glVertex2f(-0.9f, 0.3f);

	glVertex2f(-0.4f, 0.46f);
	glVertex2f(-0.4f, 0.3f);
	glEnd();

	glLineWidth(0.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.5f,0.5f);
	glVertex2f(-0.45f,0.6f);

	glVertex2f(-0.55f,0.5f);
	glVertex2f(-0.50f,0.6f);

	glVertex2f(-0.60f,0.5f);
	glVertex2f(-0.55f,0.6f);

	glVertex2f(-0.65f,0.5f);
	glVertex2f(-0.60f,0.6f);

	glVertex2f(-0.70f,0.5f);
	glVertex2f(-0.65f,0.6f);

	glVertex2f(-0.75f,0.5f);
	glVertex2f(-0.70f,0.6f);

	glVertex2f(-0.80f,0.5f);
	glVertex2f(-0.75f,0.6f);

	glVertex2f(-0.85f,0.5f);
	glVertex2f(-0.80f,0.6f);

	glVertex2f(-0.90f,0.5f);
	glVertex2f(-0.85f,0.6f);

	glVertex2f(-0.95f,0.5f);
	glVertex2f(-0.90f,0.6f);

	glVertex2f(-1.00f,0.5f);
	glVertex2f(-0.95f,0.6f);


	glEnd();

//corridor
	glBegin(GL_QUADS);
	glColor3ub(170, 86, 0 );
	glVertex2f(-1.0f,-0.2f);
	glColor3ub(153, 76, 0 );
	glVertex2f(1.0f,-0.2f);
	glColor3ub(170, 86, 0);
	glVertex2f(1.0f,0.3f);
	glColor3ub(153, 76, 0);
	glVertex2f(-1.0f,0.3f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 114, 0 );
	glVertex2f(-1.0f,0.25f);
	glVertex2f(1.0f,0.25f);
	glVertex2f(1.0f,0.3f);
	glVertex2f(-1.0f,0.3f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255 );
	glVertex2f(-1.0f,0.15f);
	glVertex2f(1.0f,0.15f);
	glVertex2f(1.0f,0.25f);
	glVertex2f(-1.0f,0.25f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(64, 64, 64 );
	glVertex2f(-0.4f,-0.2f);
	glVertex2f(0.0f,-0.2f);
	glVertex2f(0.0f,0.25f);
	glVertex2f(-0.4f,0.25f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(160, 160, 160 );
	glVertex2f(-0.4f,0.15f);
	glVertex2f(0.0f,0.15f);
	glVertex2f(0.0f,0.25f);
	glVertex2f(-0.4f,0.25f);
	glEnd();

	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(224, 224, 224 );
	glVertex2f(-0.3f,-0.2f);
	glVertex2f(-0.3f,-0.12f);
	glEnd();

	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(224, 224, 224 );
	glVertex2f(-0.25f,-0.2f);
	glVertex2f(-0.25f,-0.12f);
	glEnd();

	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(224, 224, 224 );
	glVertex2f(-0.2f,-0.2f);
	glVertex2f(-0.2f,-0.12f);
	glEnd();

	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(224, 224, 224 );
	glVertex2f(-0.15f,-0.2f);
	glVertex2f(-0.15f,-0.12f);
	glEnd();

	glLineWidth(5.5);
	glBegin(GL_LINES);
	glColor3ub(224, 224, 224 );
	glVertex2f(-0.1f,-0.2f);
	glVertex2f(-0.1f,-0.12f);
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(32, 32, 32);
	glVertex2f(-0.399f,-0.2f);
	glVertex2f(-0.399f,0.15f);
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(32, 32,32);
	glVertex2f(-0.35f,-0.2f);
	glVertex2f(-0.35f,0.15f);
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(32, 32,32);
	glVertex2f(-0.31f,-0.2f);
	glVertex2f(-0.31f,0.15f);
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(32, 32,32);
	glVertex2f(-0.399f,-0.15f);
	glVertex2f(-0.31f,-0.15f);

	glVertex2f(-0.399f,-0.05f);
	glVertex2f(-0.31f,-0.05f);

	glVertex2f(-0.399f,0.05f);
	glVertex2f(-0.31f,0.05f);

	glEnd();





	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(32, 32,32);
	glVertex2f(-0.09f,-0.2f);
	glVertex2f(-0.09f,0.15f);
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(32, 32,32);
	glVertex2f(-0.05f,-0.2f);
	glVertex2f(-0.05f,0.15f);
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(32, 32,32);
	glVertex2f(0.0f,-0.2f);
	glVertex2f(0.0f,0.15f);
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);
	glColor3ub(32, 32,32);
	glVertex2f(-0.09f,-0.15f);
	glVertex2f(0.0f,-0.15f);

	glVertex2f(-0.09f,-0.05f);
	glVertex2f(0.0f,-0.05f);

	glVertex2f(-0.09f,0.05f);
	glVertex2f(0.0f,0.05f);

	glEnd();

	//shade line
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255 );
	glVertex2f(-0.95f,0.25f);
	glVertex2f(-0.95f,0.3f);

	glVertex2f(-0.9f,0.25f);
	glVertex2f(-0.9f,0.3f);

	glVertex2f(-0.85f,0.25f);
	glVertex2f(-0.85f,0.3f);

	glVertex2f(-0.8f,0.25f);
	glVertex2f(-0.8f,0.3f);

	glVertex2f(-0.75f,0.25f);
	glVertex2f(-0.75f,0.3f);

	glVertex2f(-0.7f,0.25f);
	glVertex2f(-0.7f,0.3f);

	glVertex2f(-0.65f,0.25f);
	glVertex2f(-0.65f,0.3f);

	glVertex2f(-0.6f,0.25f);
	glVertex2f(-0.6f,0.3f);

	glVertex2f(-0.55f,0.25f);
	glVertex2f(-0.55f,0.3f);

	glVertex2f(-0.5f,0.25f);
	glVertex2f(-0.5f,0.3f);

	glVertex2f(-0.45f,0.25f);
	glVertex2f(-0.45f,0.3f);

	glVertex2f(-0.4f,0.25f);
	glVertex2f(-0.4f,0.3f);

	glVertex2f(-0.35f,0.25f);
	glVertex2f(-0.35f,0.3f);

	glVertex2f(-0.3f,0.25f);
	glVertex2f(-0.3f,0.3f);

	glVertex2f(-0.25f,0.25f);
	glVertex2f(-0.25f,0.3f);

	glVertex2f(-0.2f,0.25f);
	glVertex2f(-0.2f,0.3f);

	glVertex2f(-0.15f,0.25f);
	glVertex2f(-0.15f,0.3f);

	glVertex2f(-0.1f,0.25f);
	glVertex2f(-0.1f,0.3f);

	glVertex2f(-0.05f,0.25f);
	glVertex2f(-0.05f,0.3f);

	glVertex2f(-0.0f,0.25f);
	glVertex2f(-0.0f,0.3f);

	glVertex2f(0.05f,0.25f);
	glVertex2f(0.05f,0.3f);

	glVertex2f(0.1f,0.25f);
	glVertex2f(0.1f,0.3f);

	glVertex2f(0.15f,0.25f);
	glVertex2f(0.15f,0.3f);

	glVertex2f(0.2f,0.25f);
	glVertex2f(0.2f,0.3f);

	glVertex2f(0.25f,0.25f);
	glVertex2f(0.25f,0.3f);

	glVertex2f(0.3f,0.25f);
	glVertex2f(0.3f,0.3f);

	glVertex2f(0.35f,0.25f);
	glVertex2f(0.35f,0.3f);

	glVertex2f(0.4f,0.25f);
	glVertex2f(0.4f,0.3f);

	glVertex2f(0.45f,0.25f);
	glVertex2f(0.45f,0.3f);

	glVertex2f(0.5f,0.25f);
	glVertex2f(0.5f,0.3f);

	glVertex2f(0.55f,0.25f);
	glVertex2f(0.55f,0.3f);

	glVertex2f(0.6f,0.25f);
	glVertex2f(0.6f,0.3f);

	glVertex2f(0.65f,0.25f);
	glVertex2f(0.65f,0.3f);

	glVertex2f(0.7f,0.25f);
	glVertex2f(0.7f,0.3f);

	glVertex2f(0.75f,0.25f);
	glVertex2f(0.75f,0.3f);

	glVertex2f(0.8f,0.25f);
	glVertex2f(0.8f,0.3f);

	glVertex2f(0.85f,0.25f);
	glVertex2f(0.85f,0.3f);

	glVertex2f(0.9f,0.25f);
	glVertex2f(0.9f,0.3f);

	glVertex2f(0.95f,0.25f);
	glVertex2f(0.95f,0.3f);

	glEnd();

	//down shade line
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glColor3ub(192, 192, 192 );
	glVertex2f(-0.97f,0.25f);
	glVertex2f(-0.95f,0.15f);

	glVertex2f(-0.93f,0.25f);
	glVertex2f(-0.91f,0.15f);

	glVertex2f(-0.87f,0.25f);
	glVertex2f(-0.85f,0.15f);

	glVertex2f(-0.83f,0.25f);
	glVertex2f(-0.81f,0.15f);

	glVertex2f(-0.77f,0.25f);
	glVertex2f(-0.75f,0.15f);

	glVertex2f(-0.73f,0.25f);
	glVertex2f(-0.71f,0.15f);

	glVertex2f(-0.67f,0.25f);
	glVertex2f(-0.65f,0.15f);

	glVertex2f(-0.63f,0.25f);
	glVertex2f(-0.61f,0.15f);

	glVertex2f(-0.57f,0.25f);
	glVertex2f(-0.55f,0.15f);

	glVertex2f(-0.53f,0.25f);
	glVertex2f(-0.51f,0.15f);

	glVertex2f(-0.47f,0.25f);
	glVertex2f(-0.45f,0.15f);

	glVertex2f(-0.43f,0.25f);
	glVertex2f(-0.41f,0.15f);



	glVertex2f(0.07f,0.15f);
	glVertex2f(0.05f,0.25f);

	glVertex2f(0.03f,0.15f);
	glVertex2f(0.01f,0.25f);

	glVertex2f(0.17f,0.15f);
	glVertex2f(0.15f,0.25f);

	glVertex2f(0.13f,0.15f);
	glVertex2f(0.11f,0.25f);

	glVertex2f(0.27f,0.15f);
	glVertex2f(0.25f,0.25f);

	glVertex2f(0.23f,0.15f);
	glVertex2f(0.21f,0.25f);

	glVertex2f(0.37f,0.15f);
	glVertex2f(0.35f,0.25f);

	glVertex2f(0.33f,0.15f);
	glVertex2f(0.31f,0.25f);

	glVertex2f(0.47f,0.15f);
	glVertex2f(0.45f,0.25f);

	glVertex2f(0.43f,0.15f);
	glVertex2f(0.41f,0.25f);

	glVertex2f(0.57f,0.15f);
	glVertex2f(0.55f,0.25f);

	glVertex2f(0.53f,0.15f);
	glVertex2f(0.51f,0.25f);

	glVertex2f(0.67f,0.15f);
	glVertex2f(0.65f,0.25f);

	glVertex2f(0.63f,0.15f);
	glVertex2f(0.61f,0.25f);

	glVertex2f(0.77f,0.15f);
	glVertex2f(0.75f,0.25f);

	glVertex2f(0.73f,0.15f);
	glVertex2f(0.71f,0.25f);

	glVertex2f(0.87f,0.15f);
	glVertex2f(0.85f,0.25f);

	glVertex2f(0.83f,0.15f);
	glVertex2f(0.81f,0.25f);

	glVertex2f(0.97f,0.15f);
	glVertex2f(0.95f,0.25f);

	glVertex2f(0.93f,0.15f);
	glVertex2f(0.91f,0.25f);

	glEnd();


//right 1st windows
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255 );
	glVertex2f(0.2f,-0.15f);
	glVertex2f(0.5f,-0.15f);
	glVertex2f(0.5f,0.1f);
	glVertex2f(0.2f,0.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(153, 255, 255 );
	glVertex2f(0.22f,-0.13f);
	glVertex2f(0.48f,-0.13f);
	glVertex2f(0.48f,0.08f);
	glVertex2f(0.22f,0.08f);
	glEnd();

	glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255,255);
	glVertex2f(0.22f,-0.05f);
	glVertex2f(0.48f,-0.05f);

	glVertex2f(0.35f,-0.13f);
	glVertex2f(0.35f,0.08f);

	glVertex2f(0.285f,0.08f);
	glVertex2f(0.285f,-0.05f);

	glVertex2f(0.415f,0.08f);
	glVertex2f(0.415f,-0.05f);
	glEnd();

//right 2nd windows
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255 );
	glVertex2f(0.65f,-0.15f);
	glVertex2f(0.95f,-0.15f);
	glVertex2f(0.95f,0.1f);
	glVertex2f(0.65f,0.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(153, 255, 255 );
	glVertex2f(0.67f,-0.13f);
	glVertex2f(0.93f,-0.13f);
	glVertex2f(0.93f,0.08f);
	glVertex2f(0.67f,0.08f);
	glEnd();

	glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255,255);
	glVertex2f(0.67f,-0.05f);
	glVertex2f(0.93f,-0.05f);

	glVertex2f(0.80f,-0.13f);
	glVertex2f(0.80f,0.08f);

	glVertex2f(0.735f,0.08f);
	glVertex2f(0.735f,-0.05f);

	glVertex2f(0.865f,0.08f);
	glVertex2f(0.865f,-0.05f);
	glEnd();


//left 1st windows
	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255 );
	glVertex2f(-0.6f,-0.15f);
	glVertex2f(-0.9f,-0.15f);
	glVertex2f(-0.9f,0.1f);
	glVertex2f(-0.6f,0.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(153, 255, 255 );
	glVertex2f(-0.62f,-0.13f);
	glVertex2f(-0.88f,-0.13f);
	glVertex2f(-0.88f,0.08f);
	glVertex2f(-0.62f,0.08f);
	glEnd();

	glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(255, 255,255);
	glVertex2f(-0.62f,-0.05f);
	glVertex2f(-0.88f,-0.05f);

	glVertex2f(-0.75f,-0.13f);
	glVertex2f(-0.75f,0.08f);

	glVertex2f(-0.685f,0.08f);
	glVertex2f(-0.685f,-0.05f);

	glVertex2f(-0.815f,0.08f);
	glVertex2f(-0.815f,-0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(128,0,0);
	glVertex2f(0.93f,-.80f);
	glVertex2f(0.58f,-.80f);
	glVertex2f(0.53f,-.88f);
	glVertex2f(0.85f,-.88f);
	glEnd();

//right tree 1
	glBegin(GL_QUADS);
	glColor3ub(128,0,0);
	glVertex2f(0.085f,-0.2f);
	glVertex2f(0.115f,-0.2f);
	glVertex2f(0.120f,-0.15f);
	glVertex2f(0.080f,-0.15f);
	glEnd();

	glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.1f,-0.15f);
	glVertex2f(0.1f,0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.010f,-0.13f);
	glVertex2f(0.190f,-0.13f);
	glVertex2f(0.1f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.015f,-0.11f);
	glVertex2f(0.185f,-0.11f);
	glVertex2f(0.1f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.020f,-0.09f);
	glVertex2f(0.180f,-0.09f);
	glVertex2f(0.1f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.025f,-0.07f);
	glVertex2f(0.175f,-0.07f);
	glVertex2f(0.1f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.030f,-0.05f);
	glVertex2f(0.170f,-0.05f);
	glVertex2f(0.1f,-0.00f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.035f,-0.03f);
	glVertex2f(0.165f,-0.03f);
	glVertex2f(0.1f,0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.040f,-0.01f);
	glVertex2f(0.160f,-0.01f);
	glVertex2f(0.1f,0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.045f,0.01f);
	glVertex2f(0.155f,0.01f);
	glVertex2f(0.1f,0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.050f,0.03f);
	glVertex2f(0.150f,0.03f);
	glVertex2f(0.1f,0.08f);
	glEnd();

//right tree 2
	glBegin(GL_QUADS);
	glColor3ub(128,0,0);
	glVertex2f(0.560f,-0.2f);
	glVertex2f(0.590f,-0.2f);
	glVertex2f(0.595f,-0.15f);
	glVertex2f(0.555f,-0.15f);
	glEnd();

	glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(0.575f,-0.15f);
	glVertex2f(0.575f,0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.510f,-0.13f);
	glVertex2f(0.640f,-0.13f);
	glVertex2f(0.575f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.515f,-0.11f);
	glVertex2f(0.635f,-0.11f);
	glVertex2f(0.575f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.520f,-0.09f);
	glVertex2f(0.630f,-0.09f);
	glVertex2f(0.575f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.525f,-0.07f);
	glVertex2f(0.625f,-0.07f);
	glVertex2f(0.575f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.530f,-0.05f);
	glVertex2f(0.620f,-0.05f);
	glVertex2f(0.575f,-0.00f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(0.535f,-0.03f);
	glVertex2f(0.615f,-0.03f);
	glVertex2f(0.575f,0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(0.540f,-0.01f);
	glVertex2f(0.610f,-0.01f);
	glVertex2f(0.575f,0.04f);
	glEnd();

//left tree 1
	glBegin(GL_QUADS);
	glColor3ub(128,0,0);
	glVertex2f(-0.515f,-0.2f);
	glVertex2f(-0.485f,-0.2f);
	glVertex2f(-0.480f,-0.15f);
	glVertex2f(-0.520f,-0.15f);
	glEnd();

	glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.5f,-0.15f);
	glVertex2f(-0.5f,0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.590f,-0.13f);
	glVertex2f(-0.410f,-0.13f);
	glVertex2f(-0.5f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.585f,-0.11f);
	glVertex2f(-0.415f,-0.11f);
	glVertex2f(-0.5f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.580f,-0.09f);
	glVertex2f(-0.420f,-0.09f);
	glVertex2f(-0.5f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.575f,-0.07f);
	glVertex2f(-0.425f,-0.07f);
	glVertex2f(-0.5f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.570f,-0.05f);
	glVertex2f(-0.430f,-0.05f);
	glVertex2f(-0.5f,-0.00f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.565f,-0.03f);
	glVertex2f(-0.435f,-0.03f);
	glVertex2f(-0.5f,0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.560f,-0.01f);
	glVertex2f(-0.440f,-0.01f);
	glVertex2f(-0.5f,0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.555f,0.01f);
	glVertex2f(-0.445f,0.01f);
	glVertex2f(-0.5f,0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.550f,0.03f);
	glVertex2f(-0.450f,0.03f);
	glVertex2f(-0.5f,0.08f);
	glEnd();

//left tree 2
	glBegin(GL_QUADS);
	glColor3ub(128,0,0);
	glVertex2f(-0.990f,-0.2f);
	glVertex2f(-0.960f,-0.2f);
	glVertex2f(-0.955f,-0.15f);
	glVertex2f(-0.995f,-0.15f);
	glEnd();

	glLineWidth(3.5);
	glBegin(GL_LINES);
	glColor3ub(102, 51,0);
	glVertex2f(-0.975f,-0.15f);
	glVertex2f(-0.975f,0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.910f,-0.13f);
	glVertex2f(-1.0490f,-0.13f);
	glVertex2f(-0.975f,-0.08f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.915f,-0.11f);
	glVertex2f(-1.0485f,-0.11f);
	glVertex2f(-0.975f,-0.06f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.920f,-0.09f);
	glVertex2f(-1.0480f,-0.09f);
	glVertex2f(-0.975f,-0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.925f,-0.07f);
	glVertex2f(-1.0480f,-0.07f);
	glVertex2f(-0.975f,-0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.930f,-0.05f);
	glVertex2f(-1.0475f,-0.05f);
	glVertex2f(-0.975f,-0.00f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.935f,-0.03f);
	glVertex2f(-1.0470f,-0.03f);
	glVertex2f(-0.975f,0.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 0);
    glVertex2f(-0.940f,-0.01f);
	glVertex2f(-1.0465f,-0.01f);
	glVertex2f(-0.975f,0.04f);
	glEnd();




//grass
	glBegin(GL_QUADS);
	glColor3ub(76, 153, 0 );
	glVertex2f(-1.0f,-0.2f);
	glColor3ub(76, 153, 0 );
	glVertex2f(1.0f,-0.2f);
	glColor3ub(0, 102, 51);
	glVertex2f(1.0f,-1.0f);
	glColor3ub(0, 102, 51);
	glVertex2f(-1.0f,-1.0f);
	glEnd();

	//rain-1
  glPushMatrix();
    glTranslatef(rain_position2,0.0f, 0.1f);

	glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(0.3f, 0.9f);

glVertex2f(0.32f, 0.8f);

glEnd();
//rain-2
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(-0.3f, 0.5f);

glVertex2f(-0.28f, 0.4f);

glEnd();
//rain-3
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(0.5f, 0.4f);

glVertex2f(0.52f, 0.3f);

glEnd();

//rain-4
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(-0.8f, -0.3f);

glVertex2f(-0.78f, -0.4f);

glEnd();

//rain-5
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(-0.1f, -0.6f);

glVertex2f(-0.08f, -0.7f);

glEnd();
//rain-6
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(0.5f, -0.4f);

glVertex2f(0.52f, -0.5f);

glEnd();
//rain-7
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(0.3f, -0.8f);

glVertex2f(0.32f, -0.9f);

glEnd();

//rain-8
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(-0.2f, 0.4f);

glVertex2f(-0.18f, 0.3f);

glEnd();
//rain-9
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(0.8f, 0.5f);

glVertex2f(0.82f, 0.4f);

glEnd();
//rain-10
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(0.7f, -0.5f);

glVertex2f(0.72f, -0.6f);

glEnd();
//rain-11
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(-0.8f, 0.8f);

glVertex2f(-0.78f, 0.7f);

glEnd();
//rain-12
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(0.0f, -0.2f);

glVertex2f(0.02, -0.3f);

glEnd();
//rain-13
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(0.8f, 0.5f);

glVertex2f(0.82f, 0.4f);

glEnd();
//rain-14
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(0.0f, -0.8f);

glVertex2f(0.02f, -0.9f);

glEnd();
//rain-15
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(-0.5f, -0.5f);

glVertex2f(-0.48f, -0.6f);

glEnd();
//rain-16
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(0.7f, 0.0f);

glVertex2f(0.72f, -0.1f);

glEnd();
//rain-17
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(0.9f, -0.9f);

glVertex2f(0.92f, -1.0f);

glEnd();
//rain-18
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(0.9f, 1.0f);

glVertex2f(0.92f, 0.9f);

glEnd();
//rain-19
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(0.95f, 0.8f);

glVertex2f(0.97f, 0.7f);

glEnd();
//rain-20
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(0.75f, 0.9f);

glVertex2f(0.77f, 0.8f);

glEnd();
//rain-21
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(-1.0f, 1.0f);

glVertex2f(-0.98f, 0.9f);

glEnd();
//rain-22
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(-0.9f, 0.8f);

glVertex2f(-0.88f, 0.7f);

glEnd();
//rain-23
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(-0.75f, 0.1f);

glVertex2f(-0.73f, 0.0f);

glEnd();
//rain-24
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(0.95f, -0.8f);

glVertex2f(0.97f, -0.9f);

glEnd();
//rain-25
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(0.92f, -0.6f);

glVertex2f(0.94f, -0.7f);

glEnd();
//rain-26
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(0.88f, -0.4f);

glVertex2f(0.9f, -0.5f);

glEnd();
//rain-27
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(-0.02f, 0.1f);

glVertex2f(0.0f, 0.0f);

glEnd();
//rain-28
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(-1.0f, -0.2f);

glVertex2f(-0.98f, -0.3f);

glEnd();
//rain-29
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(0.4f, -0.3f);

glVertex2f(0.42f, -0.4f);

glEnd();
//rain-30
glBegin(GL_LINES);

glColor3ub(255, 255, 255);

glVertex2f(-1.0f, -0.9f);

glVertex2f(-0.98f, -1.0f);

glEnd();
glPopMatrix();





//Car:
    glPushMatrix();
    glTranslatef(car_position2,0.0f, 0.0f);


	glBegin(GL_QUADS);
	glColor3ub(128,0,0);
	glVertex2f(0.93f,-0.80f);
	glVertex2f(0.58f,-0.80f);
	glVertex2f(0.53f,-0.88f);
	glVertex2f(0.85f,-0.88f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(150,0,0);
	glVertex2f(0.80f,-0.70f);
	glVertex2f(0.58f,-0.70f);
	glVertex2f(0.53f,-0.88f);
	glVertex2f(0.75f,-0.83f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(10,10,10);
	glVertex2f(0.90f,-0.80f);
	glVertex2f(0.85f,-0.80f);
	glVertex2f(0.85f,-0.75f);
	glVertex2f(0.90f,-0.75f);
	glEnd();


//wheel
    glTranslatef(0.63f, -0.89f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }


	glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(16,16,15);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();

//Wheel 2
    glTranslatef(0.20f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(16,16,15);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();



	glPopMatrix();

	glFlush();
	glutSwapBuffers();
}

//cloud
void cloud_update1(int value) {

    if(cloud_position1 >1.8)
        cloud_position1 = -1.0f;

    cloud_position1 += cloud_speed;

	glutPostRedisplay();


	glutTimerFunc(100, cloud_update1, 0);
}

//ship2
void ship_update2(int value) {

    if(ship_position2 >1.0)
        ship_position2 = -1.5f;

    ship_position2 += ship_speed2;

	glutPostRedisplay();


	glutTimerFunc(100, ship_update2, 0);
}


void updateship3(int value) {

    if(ship_position3 <-1.0f)
        ship_position3 = 1.5f;

    ship_position3 -= ship_speed3;

	glutPostRedisplay();


	glutTimerFunc(100, updateship3, 0);
}

void updatecar2(int value) {

    if(car_position2 <-2.0f)
        car_position2 = 1.3f;

    car_position2 -= car_speed2;

	glutPostRedisplay();


	glutTimerFunc(100, updatecar2, 0);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			glutDisplayFunc(AIUB);
            glutPostRedisplay();
		}
	}

	glutPostRedisplay();
}

//rain

void rain_update2(int value) {

    if(rain_position2 <-1)
       rain_position2= 1.0f;
        rain_position2 +=rain_speed2;

	glutPostRedisplay();
	glutTimerFunc(100, rain_update2,0);
}


void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'a':
    glutDisplayFunc(AIUB);
    glutPostRedisplay();
    break;

case 'b':
    glutDisplayFunc(khalifa);
    glutPostRedisplay();
    break;

case 'n':
    glutDisplayFunc(khalifaNight);
    glutPostRedisplay();
    break;

case 'r':
    glutDisplayFunc(AIUBRainy);
    glutPostRedisplay();
    break;

	}
	glutPostRedisplay();


}

int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1000, 800);
	glutCreateWindow("Burj Khalifa");
	glutDisplayFunc(khalifa);

	glutKeyboardFunc(handleKeypress);

	glutTimerFunc(100, ship_update2, 0);
    ship_speed2 = 0.02f;

    glutTimerFunc(100, cloud_update1, 0);
    cloud_speed = 0.01f;

    glutTimerFunc(100, updateship3, 0);
    car_speed2 = 0.04f;

    glutTimerFunc(100, updatecar2, 0);
    car_speed2 = 0.04f;

    glutTimerFunc(100,rain_update2,0);
    rain_speed2=-0.5f;

    glutMouseFunc(handleMouse);

	glutMainLoop();
	return 0;
}
