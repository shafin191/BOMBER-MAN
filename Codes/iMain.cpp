/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
# include "iGraphics.h"

/* 
	function iDraw() is called again and again by the system.
*/

int dx,x=20,y=20;
int k=1;
int im=1;
double ar1[3]={x+15,x+30,x};
double ar2[3]={y+10,y-10,y};
int t=1,p=1;



void func()

{
		x+=k;
	im=1;

	

	
}
void func2()
{im=2;}
void iDraw()
{

	if(im==1){
	iClear();
	iSetColor(0,0,0);
	
	iSetColor(255,255,255);
	iFilledCircle(x,y,15,150);
	iSetColor(0,0,0);
	iFilledPolygon(ar1,ar2,3);
	iPoint(x+5,y+10,2);
	}
	if(im==2){
		//iClear();
	iSetColor(0,0,0);
	iPoint(25,30,2);
	iSetColor(255,255,255);
	iFilledCircle(20,20,15,150);}


}

/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	printf(" *** Welcome to your 1st Program!!!");

	if(key == 'q')
	{
		//do something with 'q'
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
	//place your codes for other keys here
}

int main()
{
	//place your own initialization codes here. 
//	iSetTimer(5, func);
	// iSetTimer(2,func2);
	// iSetTimer(5, func);
	iInitialize(400, 400, "demooo");
	
	//
	printf(" *** Welcome to your 1st Program!!!");  
	return 0;
}	