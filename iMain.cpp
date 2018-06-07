# include "iGraphics.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>  

#include <time.h>


FILE *highscore;
int pauseTime=0, setTime=80,m=0,lt=0,hs,zx=0;
int imageDrawn = 1;
int set_color[3]={10,106,105};
int bally=0;
int ballx=0;
int dx=30;
int dy=30;
	
int x=30,y=30;
int b=0,t=0;
int s=0;
int speed=5;
int i=0,j=0;
int node=0;
int pf=0;
int life=3;
int x1, y2;
//int y2;
int sp=14;
int gp=0;
int totalEnemy;
int rd=1;


int point=5;
char buffer[]="SCORE: ";
char str1[15], str2[5],str3[10],str55[20];
int n=sprintf(str1, "%d", gp);
int tp=0,bc,p=0;
int crdt1=400, crdt2=300;


struct enemystart
{
	int ghost_L01_x,ghost_L01_y;
	int st;



}enemy[8];


int a1[5],fixX[5],fixY[5];
int b1[5];
int nd[5]={1,1,1,1,1};

void createEnemy()
{
	
	
	
	time_t t;

   
   
   srand((unsigned) time(&t));
	int random=rand()%3;
	totalEnemy= 2+random;
	printf("%d",totalEnemy);
	
	for(int q=1;q<totalEnemy;q++)
	{

		
	
		while(1)
		{
			
			
			enemy[q].ghost_L01_x=rand()%726;
			enemy[q].ghost_L01_y=rand()%700;


			if(enemy[q].ghost_L01_y==645 && (enemy[q].ghost_L01_x>45 && enemy[q].ghost_L01_x<750) &&enemy[q].ghost_L01_x%5==0 )
			{
				a1[q]=enemy[q].ghost_L01_x;
				b1[q]=enemy[q].ghost_L01_y;
				fixX[q]=a1[q];
				fixY[q]=b1[q];
				
				nd[q];
				
				break;
			
			}

			enemy[q].ghost_L01_x=rand()%100;
			enemy[q].ghost_L01_y=rand()%600;

		if(enemy[q].ghost_L01_y>400 && enemy[q].ghost_L01_x==45 &&enemy[q].ghost_L01_y%5==0 )
			{
				a1[q]=enemy[q].ghost_L01_x;
				b1[q]=enemy[q].ghost_L01_y;
				fixX[q]=a1[q];
				fixY[q]=b1[q];
				
				nd[q];
				
				break;
			
			}

			
	
		
		
		}
	
	
	}




}

void checkEnemy()
{
		
	for(int q=1;q<totalEnemy-1;q++)
	{
		
	
	
			
			time_t t;

   
   
			srand((unsigned) time(&t));
		

			if(enemy[q].ghost_L01_y==enemy[q+1].ghost_L01_y && enemy[q].ghost_L01_x==enemy[q+1].ghost_L01_x )
			{
				a1[q]=rand()%726;
				//b1[q]=enemy[1].ghost_L01_y;
				
				break;
			
			}

			
		
			
			
	
	}





}

 void reset_Enemy()
 {
	 for(int q=1;q<totalEnemy;q++)
	 {
		 a1[q]=fixX[q];
			b1[q]=	fixY[q];
			nd[q];
				
	 
	 
	 }
 
 
 }







int player_l2x=30, player_l2y=13;

//--------------------------------------------------- Level 01 Ghost Movement ----------------------------------------------

int ghost1_x=725, ghost1_y=645;
int ghost12_x=725, ghost12_y=325;
void ghost1_move()
{
	

	
	if(p%2==1&&lt==1)
	{	
		{	
			
			
			if(ghost1_x>45 && ghost1_y==645)
				{
				if(ghost1_x<dx &&dy==660)
					{
						ghost1_x+=5;
					}
					else ghost1_x-=5;}
			else if(ghost1_y>15 && ghost1_x==45)  
				{
					if(ghost1_y<dy &&dx==60)
					{
						ghost1_y+=5;
					}
					
					else ghost1_y-=5;
				}
			else if(ghost1_x<725 && ghost1_y==15)
				{
					if(ghost1_x>dx && dy==30)
						ghost1_x-=5;
					else ghost1_x+=5;
			
				}
			else if(ghost1_x==725 && ghost1_y<645)
				{
					if(ghost1_y>dy &&dx==740)
						ghost1_y-=5;
					else ghost1_y+=5;
			
				}
		}




		{
			if(ghost12_x>45 && ghost12_y==325)
			{
				if(ghost12_x<dx && dy==340)
					ghost12_x+=5;
				else 
				ghost12_x-=5;
			}
			else if(ghost12_y>15 && ghost12_x==45)  
				{
					if(ghost12_y<dy && dx==60)
						ghost12_y+=5;
					else ghost12_y-=5;
				}
			else if(ghost12_x<725 && ghost12_y==15)
				{
					if(ghost12_x>dx && dy==30)
						ghost12_x-=5;
					else ghost12_x+=5;
			
				}
			else if(ghost12_x==725 && ghost12_y<325)
				{
					if(ghost12_y>dy && dx==740)
						ghost12_y-=5;
					else ghost12_y+=5;
				}
		

		}
		
		
		for(int q=1;q<totalEnemy;q++)
		{
			if(a1[q]>45 && b1[q]==645)
			{
				if(a1[q]<dx && dy==660)
					a1[q]+=5;
				else a1[q]-=5;
				//printf("\n%d %d %d",dx,dy,a1[q]);
			
			}
			



		

			else if(a1[q]<=45 && b1[q]>15)

			{
				
				if(a1[q]==45 && b1[q]==325)
				{
					time_t t;
					srand((unsigned) time(&t));
						
						rd=rand()%2;
						//rd= 0;
						nd[q]=rd;
						
						//printf("ND: %d\n",nd[q]);
				
				}

					if(nd[q]==1)
					{
						if(b1[q]<dy && dx==60)
						{b1[q]+=5;}
						else 
						{a1[q]=45;
						b1[q]-=5;}
						
					}
							

					
					else if(nd[q]==0)
					{
						
					
						a1[q]+=5;
						b1[q]=325;
						nd[q]=1;
						
						

					}
				
				

			 }

			else if(a1[q]<725 && b1[q]==325)
			{
				
				if(a1[q]==395 && b1[q]==325)
				{
					time_t t;
					srand((unsigned) time(&t));
				
						rd=rand()%2;
						//rd= 0;
						nd[q]=rd;
						
				
				}
					if(nd[q]==1)
					{
						if(a1[q]>dx && dy==340)
						{a1[q]-=5;}
						else{a1[q]+=5;
						b1[q]=325;}
					}

					else if(nd[q]==0)
					{
						a1[q]=395;
						b1[q]-=5;
						nd[q]=1;
					}
			
		
			}

			else if(a1[q]==395 && b1[q]>15)
			{
				
					
					if(nd[q]==1)
					{
						if(b1[q]<dy && dx==410)
						{b1[q]+=5;}
						else 
						{a1[q]=395;
						b1[q]-=5;}
						
					}
		
			
			}
			else if(a1[q]<725 && b1[q]==15)
			{
				if(a1[q]==395 && b1[q]==15)
				{
					time_t t;
					srand((unsigned) time(&t));
						rd=rand()%2;
						nd[q]=rd;
					
				
				}
				if(nd[q]==1||nd[q]==0)
					{
						if(a1[q]>dx && dy==30)
						{
							a1[q]-=5;
						}
						
						else{a1[q]+=5;
						b1[q]=15;
						nd[q]=1;}
						
					}
			
			
			}

			else if(a1[q]==725&&b1[q]<645)
			{
						if(b1[q]>dy && dx==740)
						{b1[q]-=5;}
						else 
						{a1[q]=725;
						b1[q]+=5;}

						if(a1[q]==725&&b1[q]==645)
						{
							a1[q]-=5;
							b1[q]=645;

						}

			
			}

			else if(a1[q]<725&&b1[q]==645)
			{
						a1[q]-=5;
						b1[q]=645;

			
			}


		
	
		
		}

		
			










	}

}






//----------------------------------------------------- Level 01 Player Movement -----------------------------------------------
void player_move()
{	
	{
		if(dx==ghost1_x&&dy==ghost1_y||dx==ghost1_x+5&&dy==ghost1_y+15||dx==ghost1_x-5&&dy==ghost1_y-15)
		{	
			dx=30;
			dy=30;
			life-=1;
			reset_Enemy();
			ghost1_x=725, ghost1_y=645;
			ghost12_x=725, ghost12_y=325;
			
		}
		else if(dx==ghost1_x-15&&dy==ghost1_y||dx==ghost1_x-15&&dy==ghost1_y+15||dx==ghost1_x+15&&dy==ghost1_y-15||dx==ghost1_x&&dy==ghost1_y+15||dx==ghost1_x+15&&dy==ghost1_y)
		{
			dx=30;
			dy=30;
			life-=1;
			reset_Enemy();
			ghost1_x=725, ghost1_y=645;
			ghost12_x=725, ghost12_y=325;
			
		}
	}



	{
		if(dx==ghost12_x&&dy==ghost12_y||dx==ghost12_x+5&&dy==ghost12_y+15||dx==ghost12_x-5&&dy==ghost12_y-15)
		{
			dx=30;
			dy=30;
			life-=1;
			reset_Enemy();
			ghost1_x=725, ghost1_y=645;
			ghost12_x=725, ghost12_y=325;
		
		
		}
		else if(dx==ghost12_x-15&&dy==ghost12_y||dx==ghost12_x-15&&dy==ghost12_y+15||dx==ghost12_x+15&&dy==ghost12_y-15||dx==ghost12_x&&dy==ghost12_y+15||dx==ghost12_x+15&&dy==ghost12_y)
			
		{
			dx=30;
			dy=30;
			life-=1;
			reset_Enemy();
			ghost1_x=725, ghost1_y=645;
			ghost12_x=725, ghost12_y=325;
			
		}
	
	
	
	
	}
		for(int q=1;q<totalEnemy;q++)
		{
			{
		if(dx==a1[q]&&dy==b1[q]||dx==a1[q]+5&&dy==b1[q]+15||dx==a1[q]-5&&dy==b1[q]-15)
		{	
			dx=30;
			dy=30;
			life-=1;
			reset_Enemy();
			ghost12_x=725, ghost12_y=325;
			ghost1_x=725, ghost1_y=645;
		
			
		}
		else if(dx==a1[q]-15&&dy==b1[q]||dx==a1[q]-15&&dy==b1[q]+15||dx==a1[q]+15&&dy==b1[q]-15||dx==a1[q]&&dy==b1[q]+15||dx==a1[q]+15&&dy==b1[q])
		{
			dx=30;
			dy=30;
			life-=1;
			reset_Enemy();
			ghost12_x=725, ghost12_y=325;
			ghost1_x=725, ghost1_y=645;
			
			
		}
	}

		
		
		
		
		
		
		}


}

// ---------------------------------------------------- Level 02 Ghost 01 movement --------------------------------------
//int ghost2_x=35, ghost2_y=305;


int ghost2_x=755, ghost2_y=655;
int ghost3_x=755,ghost3_y=435;
int ghost4_x=735, ghost4_y=215;
int xc=220;
int ghost5_x=384,ghost5_y=650;
int ghost6_x=35,ghost6_y=435;

void renew()
{
	ghost2_x=755, ghost2_y=655;
	ghost3_x=755,ghost3_y=435;
	 ghost4_x=735, ghost4_y=215;


}




void ghost2_move()

{
	 
	 //ghost6_y+=1;

	if(p%2==1&&lt==2){

	{
	if(ghost2_x>35 && ghost2_y==655)

	{
		//ghost2_x-=5; 
		tp=1;
		
	}
	else if(ghost2_y>15 &&ghost2_x==35)  
	{
		//ghost2_y-=5;
		tp=2;
	}

	else if(ghost2_y==15 && ghost2_x<735)
	{
	
		//	ghost2_x+=5;
		tp=3;
	}

	else if(ghost2_x==735 && ghost2_y<655)
	{
		//	ghost2_y+=5;
		tp=4;
		
	}



	switch (tp)
	{
		case 1: ghost2_x-=5; 
				break;

		case 2: ghost2_y-=5;
				break;
			
		case 3: ghost2_x+=5;
				break;

		case 4: ghost2_y+=5; 
				break;
	}
	
	
	}
	
	/*
	int ghost4_x, ghost4_y;

	ghost4_x=690;
	ghost4_y=215;
	

//------------------------------------------------Ghost 02 Level 02 movement-----------------------------------------------

	int ghost5_x,ghost5_y;
	ghost5_x=384;
	ghost5_y=650;
	iShowBMP(ghost5_x,ghost5_y,"g4u1.bmp");
	
	
	
	
	
	*/
	


	{
		if(ghost3_x>55 && ghost3_y==435 )		//ghost3_x=690,ghost3_y=435;
		{
			ghost3_x-=5;

			if(ghost3_x==385 && ghost3_y>215)
			{
				ghost3_y-=5;
				
			
			}

		}


		else if(ghost3_x==385 && ghost3_y>215)
		{
			ghost3_y-=5;
				if(ghost3_x>35&&ghost3_y==215)
				{
			
					ghost3_x-=5;
					m=0;

				}
				
			
		}
		else if(ghost3_x>35&&ghost3_y==215&&m==0)
		{
				ghost3_x-=5;
				if(ghost3_x==35&&ghost3_y<15)
				{
			
					ghost3_y-=5;

				}
		}


		else if(ghost3_x==35&&ghost3_y>15)
		{
			
					ghost3_y-=5;
					if(ghost3_x<690&&ghost3_y==15)
				{
			
					ghost3_x+=5;

				}
		}

		else if(ghost3_x<735&&ghost3_y==15)
		{
			
					ghost3_x+=5;
					if(ghost3_x==735 && ghost3_y<435)
				{
			
					ghost3_y+=5;
					m=1;

				}
					
				
		}

		else if(ghost3_x==735 && ghost3_y<435&&m==1)
				{
			
					ghost3_y+=5;

				}
	//	printf("%d %d", ghost3_x, ghost3_y);

		

	}
//------------------------------------------------Ghost 03 Level 02 movement-----------------------------------------------



	{
		if(ghost4_x==735&&ghost4_y>15)		// ghost4_x=735, ghost4_y=215;
		{
				ghost4_y-=5;
			
				

				if(ghost4_y==15&&ghost4_x>35)
				{
					ghost4_x-=5;
				
					
				
				}
		
		}
		else if(ghost4_y==15&&ghost4_x>35)
		{
					ghost4_x-=5;
					
				
					if(ghost4_x==35&&ghost4_y<215)
				{
					ghost4_y+=5;
				;
				
				
				}
				
		}
		else if(ghost4_x==35&&ghost4_y<215)
		{
					ghost4_y+=5;
					
					
					if(ghost4_x<735&&ghost4_y==215)
				{
					ghost4_x+=5;
				
				
				
				}
				
		}

		else if(ghost4_x<735&&ghost4_y==215)
		{
					ghost4_x+=5;
					
				
				
		}
		


	
	
	
	
	
	
	
	
	}
	}
	


}


//----------------------------------------Level 02 Player Movement-----------------------------------------------------

void player2_move()
{	
	for(int i=0;i<=10;i++)
	{	for(int j=0;j<=25; j++)

		{
		
		if(player_l2x-i==ghost2_x && player_l2y+j==ghost2_y)
			{
				player_l2x=30;
				player_l2y=13;
				life-=1;
				 renew();
			}
		else if(player_l2x-i==ghost2_x && player_l2y-j==ghost2_y)
			{
				player_l2x=30;
				player_l2y=13;
				life-=1;
				renew();
			}
		else if(player_l2x+i==ghost2_x && player_l2y+j==ghost2_y)
			{
				player_l2x=30;
				player_l2y=13;
				life-=1;
				renew();
			}
		else if(player_l2x+i==ghost2_x && player_l2y-j==ghost2_y)
			{
				player_l2x=30;
				player_l2y=13;
				life-=1;
				renew();
			}
		

		}

	}



	for( i=0;i<=10;i++)
	{	for( j=0;j<=25; j++)

		{
		
		if(player_l2x-i==ghost3_x && player_l2y+j==ghost3_y)
			{
				player_l2x=30;
				player_l2y=13;
				life-=1;
				renew();
			}
		else if(player_l2x-i==ghost3_x && player_l2y-j==ghost3_y)
			{
				player_l2x=30;
				player_l2y=13;
				life-=1;
				renew();
			}
		else if(player_l2x+i==ghost3_x && player_l2y+j==ghost3_y)
			{
				player_l2x=30;
				player_l2y=13;
				life-=1;
				renew();
			}
		else if(player_l2x+i==ghost3_x && player_l2y-j==ghost3_y)
			{
				player_l2x=30;
				player_l2y=13;
				life-=1;
				renew();
			}
		



		}


	}
	
	for( i=0;i<=10;i++)
	{	for( j=0;j<=25; j++)

		{
		
		if(player_l2x-i==ghost4_x && player_l2y+j==ghost4_y)
			{
				player_l2x=30;
				player_l2y=13;
				life-=1;
				renew();
			}
		else if(player_l2x-i==ghost4_x && player_l2y-j==ghost4_y)
			{
				player_l2x=30;
				player_l2y=13;
				life-=1;
				renew();
			}
		else if(player_l2x+i==ghost4_x && player_l2y+j==ghost4_y)
			{
				player_l2x=30;
				player_l2y=13;
				life-=1;
				renew();
			}
		else if(player_l2x+i==ghost4_x && player_l2y-j==ghost4_y)
			{
				player_l2x=30;
				player_l2y=13;
				life-=1;
				renew();
			}
		



		}


	}








}




//---------------------------------------------------------------------------------------------------------------





void move_right1();
void move_left1();
void move_up1();
void move_down1();


void move_right2();
void move_left2();
void move_up2();
void move_down2();




//int f=80;
int inc[18]={80,120,160,200,240,280,320,360,400,440,480,520,560,600,640,680,720,760};

int in[18]={80,120,160,200,240,280,320,360,4000,440,480,520,560,600,640,680,720,760};
int in1[18]={80,120,160,200,240,280,320,360,4000,440,480,520,560,600,640,680,720,760};
int in2[18]={80,120,160,200,240,280,320,360,4000,440,480,520,560,600,640,680,720,760};

int in3[18]={80,120,160,200,240,280,320,360,400,440,480,520,560,600,640,680,720,760};
int in4[18]={80,120,160,200,240,280,320,360,400,440,480,520,560,600,640,680,720,760};
int in5[18]={80,120,160,200,240,280,320,360,400,440,480,520,560,600,640,680,720,760};

int inc12[18]={80,120,160,200,240,280,320,360,400,440,480,520,560,600,640,680,720,760};
int in11[18]={80,120,160,200,240,280,320,360,400,440,480,520,560,600,640,680,720,760};
int in12[18]={80,120,160,200,240,280,320,360,400,440,480,520,560,600,640,680,720,760};
int in13[18]={80,120,160,200,240,280,320,360,400,440,480,520,560,600,640,680,720,760};
int in14[18]={80,120,160,200,240,280,320,360,400,440,480,520,560,600,640,680,720,760};
int in15[18]={80,120,160,200,240,280,320,360,400,440,480,520,560,600,640,680,720,760};




void MainScreen()
{
	highscore=fopen("highscore.txt","r");
	  hs=fscanf(highscore, "%d", &hs);
	  fclose(highscore);
	imageDrawn = 1;

	
}

void Play_Screen1()
{
	imageDrawn = 2;
	iClear();
	
}

void Settings_Screen()
{
	imageDrawn=3;
	iClear();

}

void Back_Colour()
{
	imageDrawn=7;
	iClear();
	 


}


void High_Score()
{
	imageDrawn=8;

	


}

void Credits()
{
	imageDrawn=9;



}


void Set_Colour()
{
	if(bc==1)
	{
		set_color[0]=205;
		set_color[1]=92;
		set_color[2]=92;//indian red
	}
	else if(bc==2)
	{
		set_color[0]=240;
		set_color[1]=230;
		set_color[2]=140;//khaki
	
	}
	else if(bc==3)
	{
		set_color[0]=135;
		set_color[1]=206;
		set_color[2]=250;//light sky 
	
	}
	else if(bc==4)
	{	
		set_color[0]=244;
		set_color[1]=164;
		set_color[2]=96;//sandy brown
	}
	else if(bc==5)
	{	
		set_color[0]=32;
		set_color[1]=178;
		set_color[2]=170;//light sea green
	}
	else if(bc==6)
	{	
		set_color[0]=192;
		set_color[1]=192;
		set_color[2]=192;//silver
	}
	else if(bc==7)
	{
		set_color[0]=152;
		set_color[1]=251;
		set_color[2]=152;//pale green
	
	
	}



}

void Exit_Screen()
{
	exit(0);
}

void Level_01()
{	
	
	  
	  createEnemy();
	  checkEnemy();
	  
	  printf("%d",hs);
	  imageDrawn=4;
	  
  	  lt=1;
	  

}

void Level01_interface()
{			

			iSetColor(205,92,92);
			iSetColor(set_color[0],set_color[1],set_color[2]);
			iFilledRectangle(0,0,800,700);
			
	
		
	
			iSetColor(255,255,255);
			iFilledRectangle(10,10,780,40);
			iSetColor(255,255,255);
			iFilledRectangle(40,10,40,660);
			iSetColor(255,255,255);
			iFilledRectangle(720,10,40,660);
			iSetColor(255,255,255);
			iFilledRectangle(40,320,720,40);
			iSetColor(255,255,255);
			iFilledRectangle(390,10,40,320);
			iSetColor(255,255,255);
			iFilledRectangle(40,640,720,40);

			iSetColor(255,255,255);
			iFilledRectangle(40,170,160,40);
			iSetColor(255,255,255);
			iFilledRectangle(600,460,140,40);

	

			iSetColor(255,0,0);
			
			iFilledRectangle(360,10,5,40);
			iFilledRectangle(720,310,40,5);
		
			iSetColor(255,0,0);
			iFilledCircle(dx,dy,14,20);
			iSetColor(255,255,255);
			iFilledCircle(dx+3,dy+5,2,20);
			iFilledCircle(dx+10,dy,5,20);


}

void Level01_playerface()
{
		if(pf==1)
			{	
				if(dx%2==0 && dy%2==1)
				{
					iSetColor(255,0,0);
					iFilledCircle(dx,dy,14,20);
					iSetColor(255,255,255);
					iFilledCircle(dx+3,dy+5,2,20);
					iFilledCircle(dx+10,dy,4,20);

				}
				else if (dx%2==1 && dy%2==1)
				{
					iSetColor(255,0,0);
					iFilledCircle(dx,dy,14,20);
					iSetColor(255,255,255);
					iFilledCircle(dx+3,dy+5,2,20);
					
				}
				else if (dx%2==1 && dy%2==0)
				{
					iSetColor(255,0,0);
					iFilledCircle(dx,dy,14,20);
					iSetColor(255,255,255);
					iFilledCircle(dx+3,dy+5,2,20);
					iFilledCircle(dx+10,dy,4,20);
				}

				else 
				{
					iSetColor(255,0,0);
					iFilledCircle(dx,dy,14,20);
					iSetColor(255,255,255);
					iFilledCircle(dx+3,dy+5,2,20);
					
				}
			}



		else if (pf==2)
			{	if(dx%2==0 && dy%2==1)
				{
					
					iSetColor(255,0,0);
					iFilledCircle(dx,dy,14,20);
					iSetColor(255,255,255);
					iFilledCircle(dx-3,dy+5,2,20);
					iFilledCircle(dx-10,dy,5,20);
			
			
				}
				else if (dx%2==1 && dy%2==1)
				{
					iSetColor(255,0,0);
					iFilledCircle(dx,dy,14,20);
					iSetColor(255,255,255);
					iFilledCircle(dx-3,dy+5,2,20);
					
				}
				else if (dx%2==1 && dy%2==0)
				{
					iSetColor(255,0,0);
					iFilledCircle(dx,dy,14,20);
					iSetColor(255,255,255);
					iFilledCircle(dx-3,dy+5,2,20);
					iFilledCircle(dx-10,dy,5,20);
					}

				else 
				{
					iSetColor(255,0,0);
					iFilledCircle(dx,dy,14,20);
					iSetColor(255,255,255);
					iFilledCircle(dx-3,dy+5,2,20);
					
				}
			}



		else if (pf==3)
			{	if(dx%2==0 && dy%2==1)
				{
					
					iSetColor(255,0,0);
					iFilledCircle(dx,dy,14,20);
					iSetColor(255,255,255);
					iFilledCircle(dx-5,dy+3,2,20);
					iFilledCircle(dx,dy+10,5,20);
			
			
				}
				else if (dx%2==1 && dy%2==1)
				{
					iSetColor(255,0,0);
					iFilledCircle(dx,dy,14,20);
					iSetColor(255,255,255);
					iFilledCircle(dx-5,dy+3,2,20);
					
				}
				else if (dx%2==1 && dy%2==0)
				{
					iSetColor(255,0,0);
					iFilledCircle(dx,dy,14,20);
					iSetColor(255,255,255);
					iFilledCircle(dx-5,dy+3,2,20);
					iFilledCircle(dx,dy+10,5,20);
					}

				else 
				{
					iSetColor(255,0,0);
					iFilledCircle(dx,dy,14,20);
					iSetColor(255,255,255);
					iFilledCircle(dx-5,dy+3,2,20);
					
					
				}
			}


		
		else if (pf==4)
			{	if(dx%2==0 && dy%2==1)
				{
					
					iSetColor(255,0,0);
					iFilledCircle(dx,dy,14,20);
					iSetColor(255,255,255);
					iFilledCircle(dx+5,dy+3,2,20);
					iFilledCircle(dx,dy-10,5,20);
			
			
				}
				else if (dx%2==1 && dy%2==1)
				{
					iSetColor(255,0,0);
					iFilledCircle(dx,dy,14,20);
					iSetColor(255,255,255);
					iFilledCircle(dx+5,dy+3,2,20);
					
				}
				else if (dx%2==1 && dy%2==0)
				{
					iSetColor(255,0,0);
					iFilledCircle(dx,dy,14,20);
					iSetColor(255,255,255);
					iFilledCircle(dx+5,dy+3,2,20);
					iFilledCircle(dx,dy-10,5,20);
					}

				else 
				{
					iSetColor(255,0,0);
					iFilledCircle(dx,dy,14,20);
					iSetColor(255,255,255);
					iFilledCircle(dx+5,dy+3,2,20);
					
					
				}
			}


}

void Level01_food()
{	
		
//----------------------------------------------------FOOD Hor Level 01-------------------------------------------------------
	

		for(i=0;i<17;i++)
				{
					if(dx>=inc12[i]-sp && dx<inc12[i]+sp-8 && dy==30 ){inc12[i]=3000; gp+=point;}
				
					else iShowBMP(inc12[i]-5, 20,"dot.bmp");			
						
				}


		for(i=0;i<17;i++)
				{
					if(dx>=in11[i]-sp && dx<in11[i]+sp-8 && dy==340 ){in11[i]=3000; gp+=point;}
				
					else iShowBMP(in11[i]-5, 330,"dot.bmp");			
						
				}


		for(i=0;i<17;i++)
				{
					if(dx>=in12[i]-sp && dx<in12[i]+sp-8 && dy==660 ){in12[i]=3000; gp+=point;}
				
					else iShowBMP(in12[i]-5, 650,"dot.bmp");			
						
				}


//--------------------------------------------Food Ver Level 01------------------------------------------------------------

		for(i=0;i<15;i++)
				{
					if(dy>=in13[i]-sp && dy<in13[i]+sp-8 && dx==60 ){in13[i]=3000; gp+=point;}
				
					else iShowBMP(50,in13[i]-5,"dot.bmp");			
						
				}
		for(i=0;i<7;i++)
				{
					if(dy>=in14[i]-sp && dy<in14[i]+sp-8 && dx==410 ){in14[i]=3000; gp+=point;}
				
					else iShowBMP(400, in14[i]-5,"dot.bmp");			
						
				}
		for(i=0;i<15;i++)
				{
					if(dy>=in15[i]-sp && dy<in15[i]+sp-8 && dx==740 ){in15[i]=3000; gp+=point;}
				
					else iShowBMP(730,in15[i]-5, "dot.bmp");			
						
				}



}

void Level01_ghostdraw()
{
		iShowBMP(ghost1_x, ghost1_y,"g2r1.bmp");
		iShowBMP(ghost12_x, ghost12_y,"g4d1.bmp");
	
		
for(int qq=1;qq<totalEnemy;qq++)
{
	if(qq%2==0)
	iShowBMP(a1[qq],b1[qq],"ghost 2.bmp");
	else if(qq%2==1)
	iShowBMP(a1[qq],b1[qq],"ghost 1.bmp");
	
}
		





}

void Level01_point_life()
{
		int n=sprintf(str1, "%d", gp);

		iSetColor(00,00,0);
		iText(650, 550, str1, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(550,600,"LIFE:",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(550,550,"POINTS:",GLUT_BITMAP_TIMES_ROMAN_24);

		if(p%2==0)
		{
			iSetColor(0,0,0);
			iText(200,500,"Press 'P' to Pause/Resume the Game",GLUT_BITMAP_TIMES_ROMAN_24);
		}



		int k=sprintf(str2, "%d", life);

		iSetColor(00,00,0);
		iText(630, 600, str2, GLUT_BITMAP_TIMES_ROMAN_24);

		
		highscore=fopen("highscore.txt","r");
				fscanf(highscore,"%d",&hs);
				
				fclose(highscore);


		int zd=sprintf(str55,"%d", hs);
		iSetColor(00,00,0);
		iText(100,600,"HIGH SCORE: ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(260, 600, str55, GLUT_BITMAP_TIMES_ROMAN_24);
}



void Level01_completation()
{

	if(gp>=440 && life!=0)
			{
				p=0;
				iSetColor(255,255,255);
				iFilledRectangle(0,0,800,700);
				iSetColor(0,0,0);
				iText(300,350,"Level 01 Completed",GLUT_BITMAP_TIMES_ROMAN_24);

				highscore=fopen("highscore.txt","w");
				fprintf(highscore,"%d",gp);
				fclose(highscore);

				
			
			
			}

	else if(life==0)
			{
				if(gp>hs)
				{
					p=0;
					 highscore=fopen("highscore.txt","w");
					
				
					fprintf(highscore,"%d",gp);
					fclose(highscore);
					zx=1;

				}
			}



} 
void Level02_completation()
{

	if(gp>=990 && life!=0)
			{
				p=0;
				iSetColor(255,255,255);
				iFilledRectangle(0,0,800,700);
				iSetColor(0,0,0);
				iText(300,350,"Level 02 Completed",GLUT_BITMAP_TIMES_ROMAN_24);

				highscore=fopen("highscore.txt","w");
				fprintf(highscore,"%d",gp);
				fclose(highscore);

				
			
			
			}

	else if(life==0)
			{
				if(gp>hs)
				{
					 highscore=fopen("highscore.txt","w");
					
				
					fprintf(highscore,"%d",gp);
					fclose(highscore);

				}
			}



} 


void Level_02()
{
	imageDrawn=5;
	iClear();
	lt=2;
		
}



void h_score()
{
	 //highscore=fopen("highscore.txt","r");
	 //	highscore=fopen("highscore.txt","r");
	//hs=fscanf(highscore, "%d", &hs);
	//printf("%d",hs);
	 
	if(gp>hs)
		{
			hs=gp;		
		fprintf(highscore, "%d ", hs);

	
		}
	

	




}

void MainInterface()
{iShowBMP(0, 0, "menu.bmp");}




/* 
	function iDraw() is called again and again by the system.
*/
void iDraw()
{
	
	
	
	
		iClear();
		

	{

//-------------------------------------------Main Menu-----------------------------------------
		if (imageDrawn == 1)
		{
			MainInterface();
			
			
		}

//----------------------------------------------Play Menu--------------------------------------------

		else if(imageDrawn==2)
		{
			iShowBMP(0,0,"play.bmp");
			iRectangle(110,450,130,50);
			iRectangle(110,380,130,50);
			iRectangle(110,300,130,50);

		
		}
//---------------------------------------------Options Menu ------------------------------------------
		else if(imageDrawn==3)
		{
			iShowBMP(0,0,"opt.bmp");

			
		
		
		}

		else if(imageDrawn==7)
		{
		
			iShowBMP(0,0,"bc.bmp");
			iSetColor(set_color[0],set_color[1],set_color[2]);
			iFilledRectangle(120,120,80,80);

		}

//--------------------------------------Score High------------------------------------------
	else if(imageDrawn==8)
	{
		iClear();
		iSetColor(250,250,250);
		iFilledRectangle(0,0,800,700);
		//iText(500,500,"GORY");
		iSetColor(0,0,0);

		
				highscore=fopen("highscore.txt","r");
				fscanf(highscore,"%d",&hs);
				fclose(highscore);

		
			int high=sprintf(str3, "%d", hs);
			iShowBMP(0,0,"highScore.bmp");
			iText(350, 275, str3, GLUT_BITMAP_TIMES_ROMAN_24);

			
	}

	//-------------------------------------------Credtis----------------------------------------------------------------

	else if(imageDrawn==9)
	{
		
		iSetColor(255,255,255);
		iText(250,crdt1,"Programmer: Ashfaq Ali Shafin",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(250,crdt2,"Special Thanks: Mr Md Sujan Sharkar",GLUT_BITMAP_TIMES_ROMAN_24);
	
	
	
	}

//---------------------------------------------------Level 01 Drawing------------------------------------------------------------


		else if( imageDrawn==4 )
		{
			Level01_interface();	//Level 01 Drawing
			Level01_playerface();	//Level 01 Player Face
			Level01_food();			//Level 01 Food
			Level01_ghostdraw();	//Level 01 Ghost Draw
			Level01_point_life();	//Point and Life
			Level01_completation();	//Death and HighScore




		}

	


//------------------------------------------------------Level 02 Drawing-----------------------------------------------
		

		else if(imageDrawn==5)
	{
			
			
			iSetColor(set_color[0],set_color[1],set_color[2]);
		
			iFilledRectangle(0,0,800,700);
			iSetColor(255,255,255);
			iFilledRectangle(380,10,40,660);
			iFilledRectangle(30,10,740,40);
			iFilledRectangle(30,210,740,40);
			iFilledRectangle(30,430,740,40);
			iFilledRectangle(30,650,740,40);
			iFilledRectangle(30,10,40,660);
			iFilledRectangle(730,10,40,660);
			iShowBMP(player_l2x, player_l2y,"p1o.bmp");
			
		
		
			
			
			{	if(b%2==1)
			
			{iShowBMP(x1, y2,"b.bmp");}
			}
		


			
// ---------------------------------------------Food Horizontal----------------------------------------------------			
			
			
				for(i=0;i<17;i++)
				{
					if(player_l2x>=inc[i]-sp && player_l2x<inc[i]+sp-8 && player_l2y==13 ){inc[i]=3000; gp+=point;}
				
					else iShowBMP(inc[i]-5, 20,"dot.bmp");			
						
				}



				for(i=0;i<17;i++)
				{	
					if(player_l2x>=in[i]-sp && player_l2x<in[i]+sp-8 && player_l2y==214) { in[i]=3000; gp+=point;}

					else iShowBMP(in[i]-5, 220,"dot.bmp");
							
				}


				for(i=0;i<17;i++)
				{	
					if(player_l2x>=in1[i]-sp && player_l2x<in1[i]+sp-8 && player_l2y==435) { in1[i]=3000;gp+=point;}

					else iShowBMP(in1[i]-5, 440,"dot.bmp");
							
				}


				for(i=0;i<17;i++)
				{	
					if(player_l2x>=in2[i]-sp && player_l2x<in2[i]+sp-8 && player_l2y==655) { in2[i]=3000;gp+=point;}

					else iShowBMP(in2[i]-5, 660,"dot.bmp");
							
				}


// --------------------------------------------- Food Vertical ----------------------------------------------------			
			
			
				for(i=0;i<15;i++)
				{	
					if(player_l2y>=in3[i]-sp && player_l2y<in3[i]+sp-8 && player_l2x==35) { in3[i]=-3000;gp+=point;}

					else iShowBMP(43, in3[i]-5, "dot.bmp");
							
				}


				for(i=0;i<15;i++)
				{	
					if(player_l2y>=in4[i]-sp && player_l2y<in4[i]+sp-8 && player_l2x==385) { in4[i]=-3000;gp+=point;}

					else iShowBMP(385+8, in4[i]-5, "dot.bmp");
							
				}


				for(i=0;i<15;i++)
				{	
					if(player_l2y>=in5[i]-sp && player_l2y<in5[i]+sp-8 && player_l2x==735) { in5[i]=-3000;gp+=point;}

					else iShowBMP(735+8, in5[i]-5, "dot.bmp");
							
				}


























//--------------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------Life & Point--------------------------------------------------------


				{	int n=sprintf(str1, "%d", gp);

				iSetColor(00,00,0);
			iText(650, 550, str1, GLUT_BITMAP_TIMES_ROMAN_24);
			iText(550,600,"LIFE:",GLUT_BITMAP_TIMES_ROMAN_24);
			iText(550,550,"POINTS:",GLUT_BITMAP_TIMES_ROMAN_24);



			int k=sprintf(str2, "%d", life);

				iSetColor(00,00,0);
			iText(630, 600, str2, GLUT_BITMAP_TIMES_ROMAN_24);
			int zd=sprintf(str55,"%d", hs);
		iSetColor(00,00,0);
		iText(100,600,"HIGH SCORE: ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(260, 600, str55, GLUT_BITMAP_TIMES_ROMAN_24);}





		

//-------------------------------------------------------Ghost 01 Picture Level 02-----------------------------------------------------------
	
if(ghost2_x>50 && ghost2_y==655)
{
	if	(ghost2_x%2==0 && ghost2_y%2==1)
		{
			iShowBMP(ghost2_x, ghost2_y,"g1d1.bmp");}
	else if(ghost2_x%2==1 && ghost2_y%2==1)
		{
		iShowBMP(ghost2_x, ghost2_y,"g1l2.bmp");}

}

else if(ghost2_y>20 && ghost2_x==35) 
{


	if(ghost2_y%2==0 && ghost2_x%2==1)
		{
			iShowBMP(ghost2_x, ghost2_y,"g1d1.bmp");}
	else if(ghost2_y%2==1 && ghost2_x%2==1)
		{
			iShowBMP(ghost2_x, ghost2_y,"g1l2.bmp");}

  
}
else if(ghost2_y==15&& ghost2_x<750)
{

	if(ghost2_y%2==1 && ghost2_x%2==0)
	{
		iShowBMP(ghost2_x, ghost2_y,"g1r1.bmp");}
	else if(ghost2_y%2==1 && ghost2_x%2==1)
	{
		iShowBMP(ghost2_x, ghost2_y,"g1l2.bmp");
	}



}

else if(ghost2_y<655 && ghost2_x==735) 
{


	if(ghost2_y%2==0 && ghost2_x%2==1)
		{
			iShowBMP(ghost2_x, ghost2_y,"g1r1.bmp");}
	else if(ghost2_y%2==1 && ghost2_x%2==1)
		{
			iShowBMP(ghost2_x, ghost2_y,"g1l2.bmp");}

	else  iShowBMP(ghost2_x, ghost2_y,"g1d2.bmp");

  
}



//------------------------------------------------Ghost 02 Level 02 Picture----------------------------------------

	iShowBMP(ghost3_x,ghost3_y,"g2l2.bmp");//int ghost3_x=755,ghost3_y=435;










//-----------------------------------------------Ghost 03 Level 02 Picture----------------------------------------------


	
	iShowBMP(ghost4_x,ghost4_y,"g3l2.bmp");


//------------------------------------------------Ghost 04 Level 02 Picture-----------------------------------------------

	//iShowBMP(ghost5_x,ghost5_y,"g4u1.bmp");


	//iShowBMP(ghost6_x,ghost6_y,"g4d1.bmp");
















//	iShowBMP(ghost2_x, ghost2_y,"g1d2.bmp");
//printf("%d %d\n", player_l2x, player_l2y );		
				


//-------------------------------------------------Player 01 Level 02 Face -------------------------------------------------




			if(pf==1)
			
				 
			{
				if(player_l2x%2==0 && player_l2y%2==1)
				{
					iShowBMP(player_l2x, player_l2y,"p1.bmp");
					iShowBMP(player_l2x, player_l2y,"p1o.bmp");

				}
				else if (player_l2x%2==1 && player_l2y%2==1)
				{
					iShowBMP(player_l2x, player_l2y,"p1c.bmp");
				}

				else if (player_l2x%2==1 && player_l2y%2==0)
				{
					iShowBMP(player_l2x, player_l2y,"p1c.bmp");
				}

				else 
				{
					iShowBMP(player_l2x, player_l2y,"p1.bmp");
					iShowBMP(player_l2x, player_l2y,"p1o.bmp");
				}




			}


			
		
			else if(pf==2)
			{
					
				if(player_l2x%2==0 && player_l2y%2==1)
				{
					iShowBMP(player_l2x, player_l2y,"p2.bmp");
					iShowBMP(player_l2x, player_l2y,"p2o.bmp");

				}
				else if (player_l2x%2==1 && player_l2y%2==1)
				{
					iShowBMP(player_l2x, player_l2y,"p2c.bmp");
				}

				else if (player_l2x%2==1 && player_l2y%2==0)
				{
					iShowBMP(player_l2x, player_l2y,"p2c.bmp");
				}

				else 
				{
					iShowBMP(player_l2x, player_l2y,"p1.bmp");
					iShowBMP(player_l2x, player_l2y,"p2o.bmp");
				}


			}




			else if(pf==3)
			{
				if((player_l2x%2==0||player_l2x%2==1) && player_l2y%2==1)
				{
					iShowBMP(player_l2x, player_l2y,"p3.bmp");
					iShowBMP(player_l2x, player_l2y,"p3o.bmp");
				}
				else if((player_l2x%2==0||player_l2x%2==1) && player_l2y%2==0)
				{
					iShowBMP(player_l2x, player_l2y,"p3c.bmp");
					
				}
			}

			else if(pf==4)
			{
				if((player_l2x%2==0||player_l2x%2==1) && player_l2y%2==1)
				{
					iShowBMP(player_l2x, player_l2y,"p4.bmp");
					iShowBMP(player_l2x, player_l2y,"p4o.bmp");
				}
				else if((player_l2x%2==0||player_l2x%2==1) && player_l2y%2==0)
				{
					iShowBMP(player_l2x, player_l2y,"p4c.bmp");
					
				}
			
			
			
			
			
			}
			Level02_completation();

		

		
		}
		
		
		
		
	}
		






	{if(life<=0)
			{
				if(zx==1)
				{
					
					iClear();
		iSetColor(250,250,250);
		iFilledRectangle(0,0,800,700);
		
		iSetColor(0,0,0);

		
				highscore=fopen("highscore.txt","r");
				fscanf(highscore,"%d",&hs);
				fclose(highscore);

		
			int high=sprintf(str3, "%d", hs);
			iShowBMP(0,0,"highScore.bmp");
			iText(350, 275, str3, GLUT_BITMAP_TIMES_ROMAN_24);
				
				}
			
				else if (zx==0){
			
				iClear();
				//imageDrawn=1;
				iShowBMP(0,0,"gameOver.BMP");
				}

			
			}
	}

	
		


		

	

		

}
		
	

/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	printf("\n%d %d", mx,my);
	

}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	
	if (imageDrawn==1&&mx>=620&&mx<=690&&my>=590&&my<=660)
	{
		
		Play_Screen1();
		
				
	}


	else if(imageDrawn==1&& mx>=620&&mx<=760&& my>=500&&my<=550)
	{
		Settings_Screen();
	
	}

	else if(imageDrawn==1&& mx>=620&&mx<=760&& my>=410&&my<=460)
	{
		Exit_Screen();
	}
	
	else if(imageDrawn==2&&mx>=100&&mx<=250&& my>=440&&my<=510)
	{	
		Level_01();
	
	}
	else if(imageDrawn==2&&mx>=100&&mx<=250&& my>=370&&my<=420)
	{
		Level_02();
	}

	else if(imageDrawn==3&&mx>=80&&mx<=415&& my>=490&&my<=535)
	{
		Back_Colour();
	}

	else if(imageDrawn==3&&mx>=80&&mx<=265&& my>=390&&my<=435)
	{
		High_Score();
	}
	else if(imageDrawn==3&&mx>=80&&mx<=205&& my>=300&&my<=340)
	{
		Credits();
	}

	else if(imageDrawn==7&&mx>=18&&mx<=170&& my>=540&&my<=570)
	{
		bc=1;
		Set_Colour();
		
	}
	else if(imageDrawn==7&&mx>=18&&mx<=170&& my>=496&&my<=517)
	{
		bc=2;
		Set_Colour();
		
	}
	else if(imageDrawn==7&&mx>=18&&mx<=200&& my>=450&&my<=470)
	{
		bc=3;
		Set_Colour();
		
	}
	else if(imageDrawn==7&&mx>=18&&mx<=200&& my>=400&&my<=430)
	{
		bc=4;
		Set_Colour();
		
	}
	else if(imageDrawn==7&&mx>=18&&mx<=230&& my>=360&&my<=385)
	{
		bc=5;
		Set_Colour();
		
	}

	else if(imageDrawn==7&&mx>=18&&mx<=110&& my>=315&&my<=345)
	{
		bc=6;
		Set_Colour();
		
	}
		else if(imageDrawn==7&&mx>=18&&mx<=270&& my>=275&&my<=290)
	{
		bc=7;
		Set_Colour();
		
	}




		if(zx==1 && mx>0 &&mx<800 && my>0 && my <700 )
		{
			zx=0;
		}
	










/*	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN);
	{
		//place your codes here	
		
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	
	}*/

}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	

	if(key == 'b')
	{
		
		b=b+1;
	}
	else if(key == 'p')
	{
		p=p+1;
	
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
	

	else if(key== GLUT_KEY_HOME)
	{
		imageDrawn=1;
	}


//-------------------------------------------------- Right Key --------------------------------------

	else if(key == GLUT_KEY_RIGHT )
	{

		if(imageDrawn==4)
		{
			pf=1;
			move_right1();
		
		}

		else if(imageDrawn==5)
		{
			pf=1;
			move_right2();
			
		
		}
	}


//-------------------------------------------------- Left Key --------------------------------------


	else if(key == GLUT_KEY_LEFT)
	{
		
		if(imageDrawn==4)
			{
				pf=2;
				move_left1();
		
			}
		else if(imageDrawn==5)
			{
				pf=2;
				move_left2();
			
	
			}
		
	}


//-------------------------------------------------- UP Key --------------------------------------



	else if(key == GLUT_KEY_UP)
	{
		
		if(imageDrawn==4)
			{
				pf=3;
				move_up1();
			}

		else if(imageDrawn==5)
			{
				pf=3;
				move_up2();
			}
	
	}
	





	//-------------------------------------------------- Down Key --------------------------------------

	
	else if(key == GLUT_KEY_DOWN)
	{
		
		if(imageDrawn==4)
			{	
				pf=4;
				move_down1();
			}



		else if(imageDrawn==5)
			{
				pf=4;	
				move_down2();
			}

	}
	




	


	//place your codes for other keys here
}







//------------------------------------------------Player Movement (Level 01)------------------------------------------------------- -

	
	
	void move_right1()
	{
		
		if(p%2==1)
		{
	
			if(dx<770&&dy<31) 	
			dx=dx+speed;
			
			else if(dx<740&& (dy>=650&&dy<=675))
			{	dy=660;
			dx=dx+speed;}
			else if(dx<740&& (dy>=330&& dy<=350))
			{	dy=340;
			dx=dx+speed;}
			else if(dx<190&&(dy>=170&&dy<=210))
			{	if(dx>180) {dx=620;dy=480;}
				else 
			{dy=190;
				dx+=speed;}
			}
			else if(dx<740&&dy==480)dx+=speed;
			


		
		
			
	}
		
	

	}

void move_left1()
	{
			
	if(p%2==1)
		{
	
			if((dx==60&&dy>30)||(dx==740&&(dy>30&&dy<330)))dx=dx;



			else if (dx==410&&(dy>30&&dy<330)) dx=dx;

			else if(dx==740&&(dy>=330&&dy<=350) )
			{	
				dy=340;
				dx=dx-speed;}

			else if(dx==740&& (dy>=650&&dy<670))
			{	dy=660;
				dx-=speed;
			}
			
			else if(dx==410&&(dy>=330&&dy<=340))
			{dy=340;
			dx=dx-speed;}

				else if(dx>620&&dy==480)dx-=speed;



		
			else if (dx<=740&&(dy>340&&dy<660))
			{	dx=dx;
				
			{	if ((dx<=740&&dx>=620)&&dy==480)
					
				
			{ if (dx==620) {dx=190;dy=190;}
					else dx-=speed;	}
				
			}
			
			}
		
			else if(dx>30) dx=dx-speed;
		}

	}

		


		

void move_up1()
	{
		if(p%2==1)
		{
			if((dx>=50 && dx<=60)&&dy<665) 
		
			{	
				dx=60;	
				dy=dy+speed;
			}

			else if((dx>=390&& dx<=420)&& dy<340)
			{
				dx=410;
				dy=dy+speed;
			}
		
		
			else if((dx>720&&dx<=740)&&dy<660) 
			{

				dx=740;
				dy=dy+speed;

				
			}
		}

	}

void move_down1()

	{

		if(p%2==1)
		{
			if((dx==60)&&(dy<675&&dy>30)) 
	
			{	
				dy=dy-speed;
			}

			else if((dx>=400&&dx<=420)&& dy>30)
			{
				dx=410;
				dy=dy-speed;
			}

		else if((dx>720&&dx<=740)&&dy>30)
			{
				dx=740;
				dy=dy-speed;
			}
		}


	}


//---------------------------------------------------------------------------------------------------------------------------------------









//----------------------------------------------------Player Movement (Level 02)--------------------------------------------------------


	void move_right2()

		{
			if(player_l2x<735&&(player_l2y>=10&&player_l2y<=43))
				{
					
					player_l2y=13;	
					player_l2x+=3;
					
				}

			else if(player_l2x<735 && (player_l2y>185 && player_l2y<240))
				{
					player_l2y=214;
					player_l2x+=3;
			
				}

			else if(player_l2x<735 && (player_l2y>405 && player_l2y<455))
				{
					player_l2y=435;
					player_l2x+=3;
			
				}

			else if(player_l2x<735 && (player_l2y>610 && player_l2y<660))
				{
					player_l2y=655;
					player_l2x+=3;
			
				}
		

		}



	void move_left2()
	{
			if(player_l2x>30&&(player_l2y>=12&&player_l2y<=43))

			{
				player_l2y=13;
				player_l2x-=3;
			
			
			}

			else if(player_l2x>35&&(player_l2y>=185&&player_l2y<=240))

			{
				player_l2y=214;
				player_l2x-=3;
			
			
			}

			else if(player_l2x>35&&(player_l2y>=405&&player_l2y<=455))

			{
				player_l2y=435;
				player_l2x-=3;
			
			
			}

			else if(player_l2x>35&&(player_l2y>=610&&player_l2y<=660))

			{
				player_l2y=655;
				player_l2x-=3;
				
			
			}
			

	
	
	
	
	
	
	}






	void move_up2()
	{
			if((player_l2x>=29 && player_l2x<=45)&&player_l2y<655)
			{
				player_l2x=35;
				player_l2y+=3;
			
			}
			else if((player_l2x>=354 && player_l2x<=414)&&player_l2y<655)
			{
				player_l2x=385;
				player_l2y+=3;
			
			}

			else if((player_l2x>=700 && player_l2x<=735)&&player_l2y<655)
			{
				player_l2x=735;
				player_l2y+=3;
			
			}
		
	
	
	
	
	
	}
	void move_down2()


	{

		if((player_l2x>=35 && player_l2x<=75) && player_l2y>=13)
		{
				player_l2x=35;
				player_l2y-=3;

		
		
		}

		else if((player_l2x>=345 && player_l2x<=414) && player_l2y>=13)
		{
				player_l2x=385;
				player_l2y-=3;
		
		}
	

		else if((player_l2x>=700 && player_l2x<=737) && player_l2y>=13)
		{
				player_l2x=735;
				player_l2y-=3;

		
		
		}
	
	
	
	
	}




//	----------------------------------------Main Function-----------------------------------


int main()
{
	
	
	iSetTimer(60,ghost1_move);
	iSetTimer(10,player_move);
	iSetTimer(10,player2_move);
	iSetTimer(50,ghost2_move);

	
	

	iInitialize(800, 700, "BOMBER MAN"); 
	
	
	return 0;
}	