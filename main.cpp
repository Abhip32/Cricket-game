#include <graphics.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int gdriver=DETECT,gmode;
    initgraph(&gdriver,&gmode,"c:\\");
    char tm[20];
    char tm1[20];
    char p1[20];  char p_1[20];
    char p2[20];  char p_2[20];
    char p3[20];  char p_3[20];
    char p4[20];  char p_4[20];
    char p5[20];  char p_5[20];
    char p6[20];  char p_6[20];
    char p7[20];  char p_7[20];
    char p8[20];  char p_8[20];
    char p9[20];  char p_9[20];
    char p10[20]; char p_10[20];
    char p11[20]; char p_11[20];
    int c=0,sc1,sc2;
    int e,f,p,s,r=0,r1=0,r2=0,temp=0,temp1=0;
    char q[20],t[20],t1[20],b[20],b1[20],br1[100],br2[100];
    int  ba1=0,ba2=0,ba3=0,ba4=0,ba5=0,ba6=0,ba7=0,ba8=0,ba9=0,ba10=0,ba11=0;
    char bal[30],bal1[30],bal2[30],bal3[30],bal4[30],bal5[30],bal6[30],bal7[30],bal8[30],bal9[30],bal10[30],bal11[30];
    int tmsc=0,tmsc1=0,cn=0,cn1=0;
    char tmsc_[100],tmsc1_[100];
    int o=0,ru=0,o1=0,o2=0,o3=0,o4=0;
    int w=0,w1=0,w2=0,w3=0,w4=0;
    int Or=0,Or1=0,Or2=0,Or3=0,Or4=0;
    bool tmbat,tm1bat;
    float ec=0,ec1=0,ec2=0,ec3=0,ec4=0;
    char ec_[20],ec1_[20],ec2_[20],ec3_[20],ec4_[20];
    char w_[20], w1_[20],w2_[20],w3_[20],w4_[20];
    char Or_[20],Or1_[20],Or2_[20],Or3_[20],Or4_[20];
    char o_[20],ru_[20], o1_[20], o2_[20], o3_[20], o4_[20], o5_[20];
    bool wicket1,wicket2,wicket3,wicket4,wicket5,wicket6,wicket7,wicket8,wicket9,wicket10,wicket11;
    int r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0,r10=0,r11=0;
    char br3[100],br4[100],br5[100],br6[100],br7[100],br8[100],br9[100],br10[100],br11[100];
    int f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f9=0,f10=0,f11=0;
    int s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0,s10=0,s11=0;
    char cf1[20],cf2[20],cf3[20],cf4[20],cf5[20],cf6[20],cf7[20],cf8[20],cf9[20],cf10[20],cf11[20];
    char cs1[20],cs2[20],cs3[20],cs4[20],cs5[20],cs6[20],cs7[20],cs8[20],cs9[20],cs10[20],cs11[20];
    float sr1=0,sr2=0,sr3=0,sr4=0,sr5=0,sr6=0,sr7=0,sr8=0,sr9=0,sr10=0,sr11=0;
    char sr1_[50],sr2_[50],sr3_[50],sr4_[50],sr5_[50],sr6_[50],sr7_[50],sr8_[50],sr9_[50],sr10_[50],sr11_[50];
    POINT cursorPos;
    POINT cursorPos1;
    setfillstyle(SOLID_FILL,GREEN);
    setcolor(YELLOW);
    circle(320,240,230);
    floodfill(150,300,YELLOW);
    setcolor(YELLOW);
    settextstyle(3,0,1);
    outtextxy(190,220,"WELCOME TO CRICKET SAGA");
    setcolor(WHITE);
    rectangle(180,200,430,260);
    settextstyle(2,0,4);
    Beep(1000,200);
    Beep(2000,200);
    Beep(3000,200);
    Beep(4000,200);
    Beep(5000,200);
    Beep(6000,200);
    Sleep(200);
    outtextxy(240,420,"PRESS ANY KEY TO CONTINUE");
    getch();Beep(2000,100);

   Menu:

   cleardevice();
    rectangle(100,100,550,450);
    settextstyle(1,0,4);
    outtextxy(130,120,"CRICKET SAGA");
    line(100,160,550,160);

    int i,j;
    i=180;
    j=220;
    rectangle(130,180,520,220);//1st
    settextstyle(3,0,3);
    outtextxy(180,190,"START GAME");
    rectangle(130,240,520,280);//2nd
    settextstyle(3,0,3);
    outtextxy(180,250,"RULES FOR GAME");
    rectangle(130,300,520,340);//3rd
    settextstyle(3,0,3);
    outtextxy(180,310,"ABOUT US");
    rectangle(130,360,520,400);//4th
    settextstyle(3,0,3);
    outtextxy(180,370,"EXIT GAME");
    while(1)
    {
        GetCursorPos(&cursorPos);
        if(GetAsyncKeyState(VK_LBUTTON))
        {
         if(cursorPos.y>=180&&cursorPos.y<=230)
        {
            setcolor(YELLOW);
            rectangle(130,i,520,j);
            Beep(3000,300);
            goto Start;
        }

        }

        GetCursorPos(&cursorPos);
        if(GetAsyncKeyState(VK_LBUTTON))
        {
         if(cursorPos.y>=240&&cursorPos.y<=290)
        {
            setcolor(YELLOW);
            rectangle(130,i+60,520,j+60);
            Beep(3000,300);
            goto Rules;
        }

        }

        GetCursorPos(&cursorPos);
        if(GetAsyncKeyState(VK_LBUTTON))
        {
         if(cursorPos.y>=300&&cursorPos.y<=350)
        {
            setcolor(YELLOW);
            rectangle(130,i+120,520,j+120);
            Beep(3000,300);
            goto About;
        }

        }

        GetCursorPos(&cursorPos);
        if(GetAsyncKeyState(VK_LBUTTON))
        {
         if(cursorPos.y>=360&&cursorPos.y<=410)
        {
            setcolor(YELLOW);
            rectangle(130,i+180,520,j+180);
            Beep(3000,300);
            goto Exit;
        }

        }

    }
    Start:
        {
            cleardevice();
            setcolor(CYAN);
            outtextxy(100,60,"Select Your Team");
            setcolor(WHITE);
            line(50,100,600,100);
            rectangle(50,50,600,400);
            setcolor(LIGHTBLUE);
            outtextxy(100,120,"INDIA");
             setcolor(WHITE);
            rectangle(80,120,200,150);
            setcolor(YELLOW);
            outtextxy(100,180,"AUSTRALIA");
             setcolor(WHITE);
            rectangle(80,180,240,210);
            setcolor(RED);
            outtextxy(100,240,"ENGLAND");
             setcolor(WHITE);
            rectangle(80,240,220,270);
            setcolor(LIGHTGRAY);
            outtextxy(100,300,"NEW ZEALAND");
             setcolor(WHITE);
            rectangle(80,300,260,330);
            setcolor(BLUE);
            outtextxy(400,120,"SRI LANKA");
             setcolor(WHITE);
            rectangle(380,120,520,150);
            setcolor(GREEN);
            outtextxy(400,180,"PAKISTAN");
             setcolor(WHITE);
            rectangle(380,180,520,210);
            setcolor(BROWN);
            outtextxy(400,240,"WEST INDIES");
             setcolor(WHITE);
            rectangle(380,240,550,270);
            setcolor(LIGHTGREEN);
            outtextxy(400,300,"SOUTH AFRICA");
            setcolor(WHITE);
            rectangle(380,300,560,330);
            while(1)
            {
               GetCursorPos(&cursorPos);
               if(GetAsyncKeyState(VK_LBUTTON))
               {
                   if((cursorPos.x>=70&&cursorPos.x<=210)&&(cursorPos.y>=110&&cursorPos.y<=160))
                   {
                       cleardevice();
                         Beep(3000,300);
                       goto india;
                   }
               }

               GetCursorPos(&cursorPos);
               if(GetAsyncKeyState(VK_LBUTTON))
               {
                   if((cursorPos.x>=70&&cursorPos.x<=230)&&(cursorPos.y>=170&&cursorPos.y<=220))
                   {
                       cleardevice();
                        Beep(3000,300);
                       goto australia;
                   }
               }

               GetCursorPos(&cursorPos);
               if(GetAsyncKeyState(VK_LBUTTON))
               {
                   if((cursorPos.x>=70&&cursorPos.x<=210)&&(cursorPos.y>=230&&cursorPos.y<=280))
                   {
                       cleardevice();
                        Beep(3000,300);
                       goto england;
                   }
               }

               GetCursorPos(&cursorPos);
               if(GetAsyncKeyState(VK_LBUTTON))
               {
                   if((cursorPos.x>=70&&cursorPos.x<=250)&&(cursorPos.y>=290&&cursorPos.y<=340))
                   {
                       cleardevice();
                        Beep(3000,300);
                       goto newzeland;
                   }
               }

               GetCursorPos(&cursorPos);
               if(GetAsyncKeyState(VK_LBUTTON))
               {
                   if((cursorPos.x>=370&&cursorPos.x<=510)&&(cursorPos.y>=110&&cursorPos.y<=160))
                   {
                       cleardevice();
                        Beep(3000,300);
                       goto srilanka;
                   }
               }

               GetCursorPos(&cursorPos);
               if(GetAsyncKeyState(VK_LBUTTON))
               {
                   if((cursorPos.x>=370&&cursorPos.x<=510)&&(cursorPos.y>=170&&cursorPos.y<=220))
                   {
                       cleardevice();
                        Beep(3000,300);
                       goto pakistan;
                   }
               }

               GetCursorPos(&cursorPos);
               if(GetAsyncKeyState(VK_LBUTTON))
               {
                   if((cursorPos.x>=370&&cursorPos.x<=540)&&(cursorPos.y>=230&&cursorPos.y<=280))
                   {
                       cleardevice();
                        Beep(3000,300);
                       goto westindies;
                   }
               }

               GetCursorPos(&cursorPos);
               if(GetAsyncKeyState(VK_LBUTTON))
               {
                   if((cursorPos.x>=370&&cursorPos.x<=550)&&(cursorPos.y>=290&&cursorPos.y<=340))
                   {
                       cleardevice();
                        Beep(3000,300);
                       goto southafrica;
                   }
               }

            }
        }


    Rules:
        {
            cleardevice();
            setcolor(WHITE);
            rectangle(50,50,620,430);
             setcolor(MAGENTA);
            outtextxy(60,60,"System will generate random numbers ");
            outtextxy(60,90,"whenever the batsmen gives input to play shot");
            outtextxy(60,120,"The following chart gives amount of runs ");
            outtextxy(60,150,"you will get as per the number returned by the system");
            outtextxy(60,180,"1=One run");
            outtextxy(200,180,"2=Two runs");
            outtextxy(60,210,"3=Three runs");
            outtextxy(200,210,"4=Four runs");
            outtextxy(60,240,"5=Wide or a no ball");
            outtextxy(200,240,"6=Six runs");
            outtextxy(60,270,"there is a special condition for wicket");
            outtextxy(60,300,"when that condition satisfies batsmen is out");
            outtextxy(60,330,"All other rules are as per cricket");
            outtextxy(60,360,"Enjoy your game!!!");
            getch();Beep(2000,100);
            setcolor(WHITE);
            goto Menu;
        }
    About:
        {
            cleardevice();
            setcolor(WHITE);
            rectangle(50,50,620,430);
            setcolor(CYAN);
            outtextxy(60,60,"This game is created in c language");
            outtextxy(60,90,"CODEMONK has created this game.");
            outtextxy(60,120,"Enjoy the whole action of cricket in this game ");
            outtextxy(60,150,"CODEMONK hopes that you will like this game");
            outtextxy(60,180,"Thank You!!");
            getch();Beep(2000,100);
            setcolor(WHITE);
            goto Menu;
        }
    Exit:
        {
            cleardevice();
            setcolor(WHITE);
            rectangle(100,100,600,300);
            outtextxy(150,150,"Are you sure you want to quit this game?");
            rectangle(190,190,250,240);
            rectangle(390,190,450,240);
            outtextxy(200,200," Yes ");
            outtextxy(400,200," No ");
            while(1)
            {
                GetCursorPos(&cursorPos);
                if(GetAsyncKeyState(VK_LBUTTON))
                {
                    if(cursorPos.x>=180&&cursorPos.x<=260)
                    {
                        Beep(3000,300);
                        setcolor(YELLOW);
                        rectangle(190,190,250,240);
                        Sleep(200);
                        return 0;
                    }
                }
                GetCursorPos(&cursorPos);
                if(GetAsyncKeyState(VK_LBUTTON))
                {
                    if(cursorPos.x>=380&&cursorPos.x<=460)
                    {
                        Beep(3000,300);
                        setcolor(YELLOW);
                        rectangle(390,190,450,240);
                         Sleep(200);
                        setcolor(WHITE);
                        goto Menu;
                    }
                }
            }
        }
        india:
            {
                cleardevice();
                setcolor(WHITE);
                outtextxy(0,0,"Your Team : ");
                setcolor(9);
                e=9;
                char team[20]="India";
                strcpy(tm,team);
                char player1[20]="R.Sharma";
                strcpy(p1,player1);
                char player2[20]="S.Dhawan";
                strcpy(p2,player2);
                char player3[20]="V.Kohli";
                strcpy(p3,player3);
                char player4[20]="S.Iyer";
                strcpy(p4,player4);
                char player5[20]="M.S.Dhoni";
                strcpy(p5,player5);
                char player6[20]="H.Pandya";
                strcpy(p6,player6);
                char player7[20]="Y.Chahal";
                strcpy(p7,player7);
                char player8[20]="K.Yadav";
                strcpy(p8,player8);
                char player9[20]="B.Kumar";
                strcpy(p9,player9);
                char player10[20]="M.Shami";
                strcpy(p10,player10);
                char player11[20]="J.Bumrah";
                strcpy(p11,player11);
                goto Start1;
            }
        australia:
            {
                cleardevice();
                setcolor(WHITE);
                outtextxy(0,0,"Your Team : ");
                setcolor(14);
                e=14;
                char team[20]="Australia";
                 strcpy(tm,team);
                 char player1[20]="A.Finch";
                strcpy(p1,player1);
                char player2[20]="D.Warner";
                strcpy(p2,player2);
                char player3[20]="S.Marsh";
                strcpy(p3,player3);
                char player4[20]="S.Smith";
                strcpy(p4,player4);
                char player5[20]="M.Stoins";
                strcpy(p5,player5);
                char player6[20]="M.Wade";
                strcpy(p6,player6);
                char player7[20]="G.Maxwell";
                strcpy(p7,player7);
                char player8[20]="A.Zampa";
                strcpy(p8,player8);
                char player9[20]="M.Starc";
                strcpy(p9,player9);
                char player10[20]="P.Cummins";
                strcpy(p10,player10);
                char player11[20]="J.Richardson";
                strcpy(p11,player11);
                goto Start1;
            }
        england:
            {
                cleardevice();
                setcolor(WHITE);
                outtextxy(0,0,"Your Team : ");
                setcolor(3);
                e=3;
                char team[20]="England";
                 strcpy(tm,team);
                 char player1[20]="A.Hales";
                strcpy(p1,player1);
                char player2[20]="J.Buttler";
                strcpy(p2,player2);
                char player3[20]="M.Ali";
                strcpy(p3,player3);
                char player4[20]="J.Root";
                strcpy(p4,player4);
                char player5[20]="E.Morgan";
                strcpy(p5,player5);
                char player6[20]="S.Curran";
                strcpy(p6,player6);
                char player7[20]="J.Archar";
                strcpy(p7,player7);
                char player8[20]="T.Curran";
                strcpy(p8,player8);
                char player9[20]="M.Wood";
                strcpy(p9,player9);
                char player10[20]="A.Rashid";
                strcpy(p10,player10);
                char player11[20]="C.Woakes";
                strcpy(p11,player11);
                goto Start1;
            }
        newzeland:
            {
                cleardevice();
                setcolor(WHITE);
                outtextxy(0,0,"Your Team : ");
                setcolor(7);
                e=7;
                char team[20]="New Zeland";
                 strcpy(tm,team);
                char player1[20]="C.Munro";
                strcpy(p1,player1);
                char player2[20]="T.Latham";
                strcpy(p2,player2);
                char player3[20]="K.Williamson";
                strcpy(p3,player3);
                char player4[20]="R.Taylor";
                strcpy(p4,player4);
                char player5[20]="M.Guptill";
                strcpy(p5,player5);
                char player6[20]="H.Nicholls";
                strcpy(p6,player6);
                char player7[20]="I.Sodhi";
                strcpy(p7,player7);
                char player8[20]="A.Milne";
                strcpy(p8,player8);
                char player9[20]="M.Santaner";
                strcpy(p9,player9);
                char player10[20]="T.Southee";
                strcpy(p10,player10);
                char player11[20]="T.Boult";
                strcpy(p11,player11);
                goto Start1;
            }
        srilanka:
            {
                cleardevice();
                setcolor(WHITE);
                outtextxy(0,0,"Your Team : ");
                setcolor(1);
                e=1;
                char team[20]="Sri Lanka";
                 strcpy(tm,team);
                  char player1[20]="D.Karunarathne";
                strcpy(p1,player1);
                char player2[20]="K.Parera";
                strcpy(p2,player2);
                char player3[20]="T.Parera";
                strcpy(p3,player3);
                char player4[20]="K.Mendis";
                strcpy(p4,player4);
                char player5[20]="A.Fernando";
                strcpy(p5,player5);
                char player6[20]="A.Mathews";
                strcpy(p6,player6);
                char player7[20]="S.Lakmal";
                strcpy(p7,player7);
                char player8[20]="C.Asalanka";
                strcpy(p8,player8);
                char player9[20]="L.Malinga";
                strcpy(p9,player9);
                char player10[20]="L.Thiramane";
                strcpy(p10,player10);
                char player11[20]="J.Mendis";
                strcpy(p11,player11);
                goto Start1;
            }
        pakistan:
            {
                cleardevice();
                setcolor(WHITE);
                outtextxy(0,0,"Your Team : ");
                setcolor(2);
                e=2;
                char team[20]="Pakistan";
                 strcpy(tm,team);
                  char player1[20]="F.Zaman";
                strcpy(p1,player1);
                char player2[20]="S.Khan";
                strcpy(p2,player2);
                char player3[20]="B.Azam";
                strcpy(p3,player3);
                char player4[20]="S.Malik";
                strcpy(p4,player4);
                char player5[20]="I.Wasim";
                strcpy(p5,player5);
                char player6[20]="M.Hafeez";
                strcpy(p6,player6);
                char player7[20]="S.Afridi";
                strcpy(p7,player7);
                char player8[20]="H.Ali";
                strcpy(p8,player8);
                char player9[20]="M.Amir";
                strcpy(p9,player9);
                char player10[20]="A.Ali";
                strcpy(p10,player10);
                char player11[20]="W.Riaz";
                strcpy(p11,player11);
                goto Start1;
            }
        westindies:
            {
                cleardevice();
                setcolor(WHITE);
                outtextxy(0,0,"Your Team : ");
                setcolor(6);
                e=6;
                char team[20]="West Indies";
                 strcpy(tm,team);
                  char player1[20]="C.Gayle";
                strcpy(p1,player1);
                char player2[20]="E.Lewis";
                strcpy(p2,player2);
                char player3[20]="D.Bravo";
                strcpy(p3,player3);
                char player4[20]="S.Hope";
                strcpy(p4,player4);
                char player5[20]="S.Hetmayer";
                strcpy(p5,player5);
                char player6[20]="C.Brathwate";
                strcpy(p6,player6);
                char player7[20]="F.Allen";
                strcpy(p7,player7);
                char player8[20]="K.Pollard";
                strcpy(p8,player8);
                char player9[20]="S.Gabriel";
                strcpy(p9,player9);
                char player10[20]="O.Thomas";
                strcpy(p10,player10);
                char player11[20]="S.Coteral";
                strcpy(p11,player11);
                goto Start1;
            }
        southafrica:
            {
                cleardevice();
                setcolor(WHITE);
                outtextxy(0,0,"Your Team : ");
                setcolor(10);
                e=10;
                char team[20]="South Africa";
                 strcpy(tm,team);
                  char player1[20]="Q.Decock";
                strcpy(p1,player1);
                char player2[20]="F.DuPlesis";
                strcpy(p2,player2);
                char player3[20]="A.B.Devillers";
                strcpy(p3,player3);
                char player4[20]="J.J.Smuts";
                strcpy(p4,player4);
                char player5[20]="T.Buvuma";
                strcpy(p5,player5);
                char player6[20]="D.Miller";
                strcpy(p6,player6);
                char player7[20]="A.Markram";
                strcpy(p7,player7);
                char player8[20]="R.Dussan";
                strcpy(p8,player8);
                char player9[20]="D.Stayne";
                strcpy(p9,player9);
                char player10[20]="C.Morris";
                strcpy(p10,player10);
                char player11[20]="I.Tahir";
                strcpy(p11,player11);
                goto Start1;
            }



            Start1:
        {
            cleardevice();
            setcolor(CYAN);
            outtextxy(100,60,"Select Opposite Team");
            setcolor(WHITE);
            line(50,100,600,100);
            rectangle(50,50,600,400);
            setcolor(LIGHTBLUE);
            outtextxy(100,120,"INDIA");
             setcolor(WHITE);
            rectangle(80,120,200,150);
            setcolor(YELLOW);
            outtextxy(100,180,"AUSTRALIA");
             setcolor(WHITE);
            rectangle(80,180,240,210);
            setcolor(RED);
            outtextxy(100,240,"ENGLAND");
             setcolor(WHITE);
            rectangle(80,240,220,270);
            setcolor(LIGHTGRAY);
            outtextxy(100,300,"NEW ZEALAND");
             setcolor(WHITE);
            rectangle(80,300,260,330);
            setcolor(BLUE);
            outtextxy(400,120,"SRI LANKA");
             setcolor(WHITE);
            rectangle(380,120,520,150);
            setcolor(GREEN);
            outtextxy(400,180,"PAKISTAN");
             setcolor(WHITE);
            rectangle(380,180,520,210);
            setcolor(BROWN);
            outtextxy(400,240,"WEST INDIES");
             setcolor(WHITE);
            rectangle(380,240,550,270);
            setcolor(LIGHTGREEN);
            outtextxy(400,300,"SOUTH AFRICA");
             setcolor(WHITE);
            rectangle(380,300,560,330);
            while(1)
            {
               GetCursorPos(&cursorPos);
               if(GetAsyncKeyState(VK_LBUTTON))
               {
                   if((cursorPos.x>=70&&cursorPos.x<=210)&&(cursorPos.y>=110&&cursorPos.y<=160))
                   {
                       cleardevice();
                         Beep(3000,300);
                       goto india1;
                   }
               }

               GetCursorPos(&cursorPos);
               if(GetAsyncKeyState(VK_LBUTTON))
               {
                   if((cursorPos.x>=70&&cursorPos.x<=230)&&(cursorPos.y>=170&&cursorPos.y<=220))
                   {
                       cleardevice();
                        Beep(3000,300);
                       goto australia1;
                   }
               }

               GetCursorPos(&cursorPos);
               if(GetAsyncKeyState(VK_LBUTTON))
               {
                   if((cursorPos.x>=70&&cursorPos.x<=210)&&(cursorPos.y>=230&&cursorPos.y<=280))
                   {
                       cleardevice();
                        Beep(3000,300);
                       goto england1;
                   }
               }

               GetCursorPos(&cursorPos);
               if(GetAsyncKeyState(VK_LBUTTON))
               {
                   if((cursorPos.x>=70&&cursorPos.x<=250)&&(cursorPos.y>=290&&cursorPos.y<=340))
                   {
                       cleardevice();
                        Beep(3000,300);
                       goto newzeland1;
                   }
               }

               GetCursorPos(&cursorPos);
               if(GetAsyncKeyState(VK_LBUTTON))
               {
                   if((cursorPos.x>=370&&cursorPos.x<=510)&&(cursorPos.y>=110&&cursorPos.y<=160))
                   {
                       cleardevice();
                        Beep(3000,300);
                       goto srilanka1;
                   }
               }

               GetCursorPos(&cursorPos);
               if(GetAsyncKeyState(VK_LBUTTON))
               {
                   if((cursorPos.x>=370&&cursorPos.x<=510)&&(cursorPos.y>=170&&cursorPos.y<=220))
                   {
                       cleardevice();
                        Beep(3000,300);
                       goto pakistan1;
                   }
               }

               GetCursorPos(&cursorPos);
               if(GetAsyncKeyState(VK_LBUTTON))
               {
                   if((cursorPos.x>=370&&cursorPos.x<=540)&&(cursorPos.y>=230&&cursorPos.y<=280))
                   {
                       cleardevice();
                        Beep(3000,300);
                       goto westindies1;
                   }
               }

               GetCursorPos(&cursorPos);
               if(GetAsyncKeyState(VK_LBUTTON))
               {
                   if((cursorPos.x>=370&&cursorPos.x<=550)&&(cursorPos.y>=290&&cursorPos.y<=340))
                   {
                       cleardevice();
                        Beep(3000,300);
                       goto southafrica1;
                   }
               }

            }
        }


        india1:
            {
                cleardevice();
                setcolor(WHITE);
                outtextxy(0,0,"Opponent Team : ");
                setcolor(9);
                f=9;
                char team1[20]="India";
                 strcpy(tm1,team1);
                char player1[20]="R.Sharma";
                strcpy(p_1,player1);
                char player2[20]="S.Dhawan";
                strcpy(p_2,player2);
                char player3[20]="V.Kohli";
                strcpy(p_3,player3);
                char player4[20]="S.Iyer";
                strcpy(p_4,player4);
                char player5[20]="M.S.Dhoni";
                strcpy(p_5,player5);
                char player6[20]="H.Pandya";
                strcpy(p_6,player6);
                char player7[20]="Y.Chahal";
                strcpy(p_7,player7);
                char player8[20]="K.Yadav";
                strcpy(p_8,player8);
                char player9[20]="B.Kumar";
                strcpy(p_9,player9);
                char player10[20]="M.Shami";
                strcpy(p_10,player10);
                char player11[20]="J.Bumrah";
                strcpy(p_11,player11);

                goto match;
            }
        australia1:
            {
                cleardevice();
                setcolor(WHITE);
               outtextxy(0,0,"Opponent Team : ");
                setcolor(14);
                f=14;
                char team1[20]="Australia";
                 strcpy(tm1,team1);
                 char player1[20]="A.Finch";
                strcpy(p_1,player1);
                char player2[20]="D.Warner";
                strcpy(p_2,player2);
                char player3[20]="S.Marsh";
                strcpy(p_3,player3);
                char player4[20]="S.Smith";
                strcpy(p_4,player4);
                char player5[20]="M.Stoins";
                strcpy(p_5,player5);
                char player6[20]="M.Wade";
                strcpy(p_6,player6);
                char player7[20]="G.Maxwell";
                strcpy(p_7,player7);
                char player8[20]="A.Zampa";
                strcpy(p_8,player8);
                char player9[20]="M.Starc";
                strcpy(p_9,player9);
                char player10[20]="P.Cummins";
                strcpy(p_10,player10);
                char player11[20]="J.Richardson";
                strcpy(p_11,player11);
                goto match;
            }
        england1:
            {
                cleardevice();
                setcolor(WHITE);
                outtextxy(0,0,"Opponent Team : ");
                setcolor(3);
                f=3;
                char team1[20]="England";
                 strcpy(tm1,team1);
                char player1[20]="A.Hales";
                strcpy(p_1,player1);
                char player2[20]="J.Buttler";
                strcpy(p_2,player2);
                char player3[20]="M.Ali";
                strcpy(p_3,player3);
                char player4[20]="J.Root";
                strcpy(p_4,player4);
                char player5[20]="E.Morgan";
                strcpy(p_5,player5);
                char player6[20]="S.Curran";
                strcpy(p_6,player6);
                char player7[20]="J.Archar";
                strcpy(p_7,player7);
                char player8[20]="T.Curran";
                strcpy(p_8,player8);
                char player9[20]="M.Wood";
                strcpy(p_9,player9);
                char player10[20]="A.Rashid";
                strcpy(p_10,player10);
                char player11[20]="C.Woakes";
                strcpy(p_11,player11);

                goto match;
            }
        newzeland1:
            {
                cleardevice();
                setcolor(WHITE);
                outtextxy(0,0,"Opponent Team : ");
                setcolor(7);
                f=7;
                char team1[20]="New Zeland";
                 strcpy(tm1,team1);
                 char player1[20]="C.Munro";
                strcpy(p_1,player1);
                char player2[20]="T.Latham";
                strcpy(p_2,player2);
                char player3[20]="K.Williamson";
                strcpy(p_3,player3);
                char player4[20]="R.Taylor";
                strcpy(p_4,player4);
                char player5[20]="M.Guptill";
                strcpy(p_5,player5);
                char player6[20]="H.Nicholls";
                strcpy(p_6,player6);
                char player7[20]="I.Sodhi";
                strcpy(p_7,player7);
                char player8[20]="A.Milne";
                strcpy(p_8,player8);
                char player9[20]="M.Santaner";
                strcpy(p_9,player9);
                char player10[20]="T.Southee";
                strcpy(p_10,player10);
                char player11[20]="T.Boult";
                strcpy(p_11,player11);
                goto match;
            }
        srilanka1:
            {
                cleardevice();
                setcolor(WHITE);
                outtextxy(0,0,"Opponent Team : ");
                setcolor(1);
                f=1;
                char team1[20]="Sri Lanka";
                 strcpy(tm1,team1);
                  char player1[20]="D.Karunarathne";
                strcpy(p_1,player1);
                char player2[20]="K.Parera";
                strcpy(p_2,player2);
                char player3[20]="T.Parera";
                strcpy(p_3,player3);
                char player4[20]="K.Mendis";
                strcpy(p_4,player4);
                char player5[20]="A.Fernando";
                strcpy(p_5,player5);
                char player6[20]="A.Mathews";
                strcpy(p_6,player6);
                char player7[20]="S.Lakmal";
                strcpy(p_7,player7);
                char player8[20]="C.Asalanka";
                strcpy(p_8,player8);
                char player9[20]="L.Malinga";
                strcpy(p_9,player9);
                char player10[20]="L.Thiramane";
                strcpy(p_10,player10);
                char player11[20]="J.Mendis";
                strcpy(p_11,player11);
                goto match;
            }
        pakistan1:
            {
                cleardevice();
                setcolor(WHITE);
                outtextxy(0,0,"Opponent Team : ");
                setcolor(2);
                f=2;
                char team1[20]="Pakistan";
                 strcpy(tm1,team1);
                   char player1[20]="F.Zaman";
                strcpy(p_1,player1);
                char player2[20]="S.Khan";
                strcpy(p_2,player2);
                char player3[20]="B.Azam";
                strcpy(p_3,player3);
                char player4[20]="S.Malik";
                strcpy(p_4,player4);
                char player5[20]="I.Wasim";
                strcpy(p_5,player5);
                char player6[20]="M.Hafeez";
                strcpy(p_6,player6);
                char player7[20]="S.Afridi";
                strcpy(p_7,player7);
                char player8[20]="H.Ali";
                strcpy(p_8,player8);
                char player9[20]="M.Amir";
                strcpy(p_9,player9);
                char player10[20]="A.Ali";
                strcpy(p_10,player10);
                char player11[20]="W.Riaz";
                strcpy(p_11,player11);
                goto match;
            }
        westindies1:
            {
                cleardevice();
                setcolor(WHITE);
                outtextxy(0,0,"Opponent Team : ");
                setcolor(6);
                f=6;
                char team1[20]="West Indies";
                 strcpy(tm1,team1);
                 char player1[20]="C.Gayle";
                strcpy(p_1,player1);
                char player2[20]="E.Lewis";
                strcpy(p_2,player2);
                char player3[20]="D.Bravo";
                strcpy(p_3,player3);
                char player4[20]="S.Hope";
                strcpy(p_4,player4);
                char player5[20]="S.Hetmayer";
                strcpy(p_5,player5);
                char player6[20]="C.Brathwate";
                strcpy(p_6,player6);
                char player7[20]="F.Allen";
                strcpy(p_7,player7);
                char player8[20]="K.Pollard";
                strcpy(p_8,player8);
                char player9[20]="S.Gabriel";
                strcpy(p_9,player9);
                char player10[20]="O.Thomas";
                strcpy(p_10,player10);
                char player11[20]="S.Coteral";
                strcpy(p_11,player11);
                goto match;
            }
        southafrica1:
            {
                cleardevice();
                setcolor(WHITE);
                outtextxy(0,0,"Opponent Team : ");
                setcolor(10);
                f=10;
                char team1[20]="South Africa";
                 strcpy(tm1,team1);
                 char player1[20]="Q.Decock";
                strcpy(p_1,player1);
                char player2[20]="F.DuPlesis";
                strcpy(p_2,player2);
                char player3[20]="A.B.Devillers";
                strcpy(p_3,player3);
                char player4[20]="J.J.Smuts";
                strcpy(p_4,player4);
                char player5[20]="T.Buvuma";
                strcpy(p_5,player5);
                char player6[20]="D.Miller";
                strcpy(p_6,player6);
                char player7[20]="A.Markram";
                strcpy(p_7,player7);
                char player8[20]="R.Dussan";
                strcpy(p_8,player8);
                char player9[20]="D.Stayne";
                strcpy(p_9,player9);
                char player10[20]="C.Morris";
                strcpy(p_10,player10);
                char player11[20]="I.Tahir";
                strcpy(p_11,player11);

                goto match;
            }

            match:
            {
                cleardevice();
                setcolor(e);
                settextstyle(1,0,3);
                outtextxy(80,20,tm);
                setcolor(WHITE);
                outtextxy(300,20,"V/s");
                 setcolor(f);
                 settextstyle(1,0,3);
                outtextxy(400,20,tm1);
                setcolor(WHITE);
                settextstyle(4,0,2);
                outtextxy(80,100,p1);   outtextxy(400,100,p_1);
                outtextxy(80,130,p2);   outtextxy(400,130,p_2);
                outtextxy(80,160,p3);   outtextxy(400,160,p_3);
                outtextxy(80,190,p4);   outtextxy(400,190,p_4);
                outtextxy(80,210,p5);   outtextxy(400,210,p_5);
                outtextxy(80,240,p6);   outtextxy(400,240,p_6);
                outtextxy(80,270,p7);   outtextxy(400,270,p_7);
                outtextxy(80,300,p8);   outtextxy(400,300,p_8);
                outtextxy(80,330,p9);   outtextxy(400,330,p_9);
                outtextxy(80,360,p10);  outtextxy(400,360,p_10);
                outtextxy(80,390,p11);  outtextxy(400,390,p_11);
                 settextstyle(3,0,2);
                 outtextxy(200,440,"Press any key to continue");
                 getch();Beep(2000,100);
                 goto toss;
            }
            toss:
                {
                 cleardevice();
                 setcolor(e);
                settextstyle(1,0,3);
                outtextxy(80,20,tm);
                setcolor(WHITE);
                outtextxy(300,20,"V/s");
                 setcolor(f);
                 settextstyle(1,0,3);
                outtextxy(400,20,tm1);
                setcolor(WHITE);
                outtextxy(140,60,"Its Time for The Toss");
                srand(time(0));
                p=rand()%100;
                if(p%2==0)
                {
                    setcolor(e);
                    outtextxy(50,120,tm);
                    setcolor(WHITE);
                    outtextxy(50,150,"Will flip the coin");
                    Sleep(700);Beep(3000,300);
                    setcolor(f);
                    outtextxy(50,180,tm1);
                    setcolor(WHITE);
                    outtextxy(50,210,"Call H or T");
                    Sleep(700);Beep(3000,300);
                    srand(time(0));
                    s=rand()%100;
                    if(s%2==0)
                    {
                       setcolor(e);
                       outtextxy(50,240,tm);
                       setcolor(WHITE);
                       outtextxy(50,270," won the toss");
                       Sleep(700);Beep(3000,300);
                       setcolor(e);
                       outtextxy(50,300,tm);
                       setcolor(WHITE);
                       outtextxy(50,330,"Select your choice");
                      settextstyle(3,0,1);
                       rectangle(50,360,150,400);
                       outtextxy(60,370,"BAT");
                       rectangle(250,360,350,400);
                        outtextxy(260,370,"BALL");
                        while(1)
                        {
                        GetCursorPos(&cursorPos);
                        if(GetAsyncKeyState(VK_LBUTTON))
                        {
                            if((cursorPos.x>=40&&cursorPos.x<=160)&&(cursorPos.y>=350&&cursorPos.y<=410))
                            {
                                setcolor(YELLOW);
                                rectangle(50,360,150,400);
                                Beep(3000,300);
                                tmbat=true;
                                goto bat;
                            }
                        }

                         GetCursorPos(&cursorPos);
                        if(GetAsyncKeyState(VK_LBUTTON))
                        {
                            if((cursorPos.x>=240&&cursorPos.x<=360)&&(cursorPos.y>=350&&cursorPos.y<=410))
                            {
                                setcolor(YELLOW);
                                rectangle(250,360,350,400);
                                Beep(3000,300);
                                tm1bat=true;
                                goto ball;
                            }
                        }
                        }
                    }
                    if(s%2!=0)
                    {
                        setcolor(f);
                        outtextxy(50,240,tm1);
                        setcolor(WHITE);
                        outtextxy(50,270," won the toss");
                        Sleep(700);Beep(3000,300);
                        srand(time(0));
                        r=rand()%10;
                        if(r%2==0)
                        {
                         setcolor(f);
                         outtextxy(50,300,tm1);
                         setcolor(WHITE);
                         outtextxy(50,330,"Will Bat first");
                         Beep(3000,300);
                         tm1bat=true;
                         goto ball;
                        }
                        if(r%2!=0)
                        {
                         setcolor(f);
                         outtextxy(50,300,tm1);
                         setcolor(WHITE);
                         outtextxy(50,330,"Will Ball first");
                         Beep(3000,300);
                         tmbat=true;
                         goto bat;
                        }

                    }


                }
                if(p%2!=0)
                {
                    setcolor(f);
                    outtextxy(50,120,tm1);
                    setcolor(WHITE);
                    outtextxy(50,150,"Will flip the coin");
                    Sleep(700);Beep(3000,300);
                    setcolor(e);
                    outtextxy(50,180,tm);
                    setcolor(WHITE);
                    outtextxy(50,210,"Enter Your Call H or T");
                    Beep(3000,300);
                    getch();Beep(2000,100);
                    srand(time(0));
                    s=rand()%100;
                    if(s%2==0)
                    {
                       setcolor(e);
                       outtextxy(50,240,tm);
                       setcolor(WHITE);
                       outtextxy(50,270," won the toss");
                       Sleep(700);Beep(3000,300);
                       setcolor(e);
                       outtextxy(50,300,tm);
                       setcolor(WHITE);
                       outtextxy(50,330,"Select your choice");
                       settextstyle(3,0,1);
                        rectangle(50,360,150,400);
                        outtextxy(60,370,"BAT");
                        Beep(3000,300);
                       rectangle(250,360,350,400);
                        outtextxy(260,370,"BALL");
                        Beep(3000,300);

                       while(1)
                       {

                       GetCursorPos(&cursorPos);
                        if(GetAsyncKeyState(VK_LBUTTON))
                        {
                            if((cursorPos.x>=40&&cursorPos.x<=160)&&(cursorPos.y>=350&&cursorPos.y<=410))
                            {
                                setcolor(YELLOW);
                                rectangle(50,360,150,400);
                                Beep(3000,300);
                                tmbat=true;
                                goto bat;

                            }
                        }

                         GetCursorPos(&cursorPos);
                        if(GetAsyncKeyState(VK_LBUTTON))
                        {
                            if((cursorPos.x>=240&&cursorPos.x<=360)&&(cursorPos.y>=350&&cursorPos.y<=410))
                            {
                                setcolor(YELLOW);
                                rectangle(250,360,350,400);
                                Beep(3000,300);
                                tm1bat=true;
                                goto ball;
                            }
                        }
                       }

                    }
                    if(s%2!=0)
                    {
                        setcolor(f);
                        outtextxy(50,240,tm1);
                        setcolor(WHITE);
                        outtextxy(50,270," won the toss");
                        Sleep(700);Beep(3000,300);
                        srand(time(0));
                        r=rand()%10;
                        if(r%2==0)
                        {
                        setcolor(f);
                        outtextxy(50,300,tm1);
                        setcolor(WHITE);
                         outtextxy(50,330,"Will Bat first");
                         Beep(3000,300);
                         tm1bat=true;
                         goto ball;

                        }
                        if(r%2!=0)
                        {
                         setcolor(f);
                         outtextxy(50,300,tm1);
                         setcolor(WHITE);
                         outtextxy(50,330,"Will Ball first");
                         Beep(3000,300);
                         tmbat=true;
                         goto bat;
                        }
                    }

                }
             }
             bat:
                 {
                     cleardevice();
                     cn++;
                     r=0;
                     r1=0;r2=0;temp=0;temp1=0;o1=0;o2=0;o3=0;o4=0;o=0;
                     Or=0;Or1=0;Or2=0;Or3=0;Or4=0;w=0;w1=0;w2=0;w3=0;w4=0;
                     f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f9=0,f10=0;
                     s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0,s10=0;
                     ec=0;ec1=0;ec2=0;ec3=0;ec4=0;
                     r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0,r10=0,r11=0;
                     ba1=0,ba2=0,ba3=0,ba4=0,ba5=0,ba6=0,ba7=0,ba8=0,ba9=0,ba10=0,ba11=0;
                     sr1=0,sr2=0,sr3=0,sr4=0,sr5=0,sr6=0,sr7=0,sr8=0,sr9=0,sr10=0,sr11=0;
                     wicket1=false;
                     wicket2=false;
                     wicket3=false;
                     wicket4=false;
                     wicket5=false;
                     wicket6=false;
                     wicket7=false;
                     wicket8=false;
                     wicket9=false;
                     wicket10=false;
                     wicket11=false;

                     settextstyle(3,0,1);
                     setcolor(WHITE);
                     outtextxy(0,0,"Batsmen Name");
                     outtextxy(150,0,"Runs");
                     outtextxy(250,0,"Balls");
                     outtextxy(350,0,"Fours");
                     outtextxy(450,0,"Sixes");
                     outtextxy(550,0,"Strike Rate");
                     setcolor(LIGHTMAGENTA);
                     line(0,30,640,30);
                     line(0,290,640,290);
                     line(0,430,640,430);
                     line(0,260,640,260);
                      line(0,318,640,318);
                     setcolor(WHITE);
                     outtextxy(0,295,"Bowler Name");
                     outtextxy(150,295,"Overs");
                     outtextxy(250,295,"Runs");
                     outtextxy(350,295,"Wicket");
                     outtextxy(450,295,"Economy");
                     outtextxy(0,40,p1);
                     outtextxy(0,60,p2);
                     outtextxy(0,80,p3);
                     outtextxy(0,100,p4);
                     outtextxy(0,120,p5);
                     outtextxy(0,140,p6);
                     outtextxy(0,160,p7);
                     outtextxy(0,180,p8);
                     outtextxy(0,200,p9);
                     outtextxy(0,220,p10);
                      outtextxy(0,240,p11);
                     outtextxy(0,265,"Total");
                    outtextxy(200,265,"Balls :");
                       outtextxy(0,320,p_11);
                      outtextxy(0,340,p_10);
                      outtextxy(0,360,p_9);
                      outtextxy(0,380,p_8);
                      outtextxy(0,400,p_7);
                        outtextxy(0,440,"Press enter to play");
                        if(cn==1)
                        {
                         goto run;
                        }
                        else if(cn==2)
                        {
                            goto win;
                        }
                 }
            ball:
                {
                     cn1++;
                     cleardevice();
                     r=0;
                     r1=0;r2=0;temp=0;temp1=0;o1=0;o2=0;o3=0;o4=0;o=0;
                     Or=0;Or1=0;Or2=0;Or3=0;Or4=0;w=0;w1=0;w2=0;w3=0;w4=0;
                     ec=0;ec1=0;ec2=0;ec3=0;ec4=0;
                     r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0,r10=0,r11=0;
                     f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f9=0,f10=0;
                     s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0,s10=0;
                     ba1=0,ba2=0,ba3=0,ba4=0,ba5=0,ba6=0,ba7=0,ba8=0,ba9=0,ba10=0,ba11=0;
                     sr1=0,sr2=0,sr3=0,sr4=0,sr5=0,sr6=0,sr7=0,sr8=0,sr9=0,sr10=0,sr11=0;
                     wicket1=false;
                     wicket2=false;
                     wicket3=false;
                     wicket4=false;
                     wicket5=false;
                     wicket6=false;
                     wicket7=false;
                     wicket8=false;
                     wicket9=false;
                     wicket10=false;
                     wicket11=false;

                     settextstyle(3,0,1);
                     setcolor(WHITE);
                     outtextxy(0,0,"Batsmen Name");
                     outtextxy(150,0,"Runs");
                     outtextxy(250,0,"Balls");
                     outtextxy(350,0,"Fours");
                     outtextxy(450,0,"Sixes");
                     outtextxy(550,0,"Strike Rate");
                     setcolor(LIGHTMAGENTA);
                     line(0,30,640,30);
                      line(0,290,640,290);
                     line(0,430,640,430);
                      line(0,260,640,260);
                       line(0,318,640,318);
                     setcolor(WHITE);
                     outtextxy(0,295,"Bowler Name");
                     outtextxy(150,295,"Overs");
                     outtextxy(250,295,"Runs");
                     outtextxy(350,295,"Wicket");
                     outtextxy(450,295,"Economy");
                     outtextxy(0,265,"Total");
                     outtextxy(200,265,"Balls :");
                      outtextxy(0,40,p_1);
                     outtextxy(0,60,p_2);
                     outtextxy(0,80,p_3);
                     outtextxy(0,100,p_4);
                     outtextxy(0,120,p_5);
                     outtextxy(0,140,p_6);
                     outtextxy(0,160,p_7);
                     outtextxy(0,180,p_8);
                     outtextxy(0,200,p_9);
                     outtextxy(0,220,p_10);
                      outtextxy(0,240,p_11);
                      outtextxy(0,265,"Total");
                      outtextxy(0,320,p11);
                      outtextxy(0,340,p10);
                      outtextxy(0,360,p9);
                      outtextxy(0,380,p8);
                      outtextxy(0,400,p7);
                      outtextxy(0,440,"Press enter to play");
                      if(cn1==1)
                      {
                        goto run;
                      }
                      else if(cn1==2)
                      {
                          goto win;
                      }

                }
                run:
                    {
                        getch();
                        srand(time(0));
                        p=rand()%7;
                        if(p==4)
                        {
                            f1++;
                        }
                        if(p==6)
                        {
                            s1++;
                        }
                        temp1=rand()%100;

                        //_________________________________________//

                        if(p%2==0)
                        {
                        r1+=p;
                        r+=p;
                        temp++;
                           if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket1=true;
                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                 wicket1=true;


                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);;
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                 wicket1=true;


                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                 wicket1=true;


                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                 wicket1=true;

                             }
                         }
                        ba1++;
                        sr1=(float)r1/(float)ba1*(100);
                        sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);
                        sprintf(Or_,"%d",o);
                        sprintf(o_,"%d",o);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);

                        sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);

                         sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);

                        sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);

                        sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d",temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                         sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                       outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(150,320,o_);
                         outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);

                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);


                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);

                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);

                        outtextxy(250,265,b);
                        outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,40,br1);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        if(temp==60)
                        {
                             if(tmbat==true)
                            {
                               tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }
                        }
                        getch();Beep(2000,100);
                        }
                        else if(p%2!=0||wicket1==true)
                        {
                         if(wicket1!=true)
                         {
                           r1+=p;
                           r+=p;
                           temp++;
                           ba1++;
                            sr1=(float)r1/(float)ba1*(100);


                         }
                         else if(wicket1==true)
                         {
                             r1+=0;
                             r+=0;
                             temp+=0;
                             ba1+=0;
                              sr1+=0;

                         }
                          if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket1=true;


                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                 wicket1=true;


                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                 wicket1=true;


                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                 wicket1=true;


                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                 wicket1=true;


                             }
                         }
                         sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);



                        sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);
                            sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);

                           sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);
                        sprintf(o_,"%d",o);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                        sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d",temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                         sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                       outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(250,265,b);
                        outtextxy(150,320,o_);
                         outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);
                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);
                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);
                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);
                       outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,40,br1);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        getch();Beep(2000,100);
                        if(temp==60)
                        {
                            if(tmbat==true)
                            {
                               tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }
                        }
                        if(wicket2!=true)
                        {
                            goto run1;
                        }
                        else if(wicket3!=true)
                        {
                            goto run2;
                        }
                        else if(wicket4!=true)
                        {
                            goto run3;
                        }
                        else if(wicket5!=true)
                        {
                            goto run4;
                        }
                        else if(wicket6!=true)
                        {
                            goto run5;
                        }
                        else if(wicket7!=true)
                        {
                            goto run6;
                        }
                        else if(wicket8!=true)
                        {
                            goto run7;
                        }
                        else if(wicket9!=true)
                        {
                            goto run8;
                        }
                        else if(wicket10!=true)
                        {
                            goto run9;
                        }

                        }

                        goto run;

                    }
                    run1:
                    {
                        srand(time(0));
                        p=rand()%7;
                        if(p==4)
                        {
                            f2++;
                        }
                        if(p==6)
                        {
                            s2++;
                        }
                        temp1=rand()%100;
                        //_________________________________________//
                        if(p%2==0)
                        {
                        r2+=p;
                        r+=p;
                         temp++;
                         if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket2=true;


                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                  wicket2=true;

                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                  wicket2=true;

                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                  wicket2=true;


                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                  wicket2=true;

                             }
                         }
                         ba2++;
                        sr2=(float)r2/(float)ba2*(100);
                       sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);

                       sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);
                            sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);

                           sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                        sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d",temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                         sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                       outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(250,265,b);
                          outtextxy(150,320,o_);
                           outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);
                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);
                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);

                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);
                       outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,40,br1);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        if(temp==60)
                        {
                            if(tmbat==true)
                            {
                               tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }
                        }
                        getch();Beep(2000,100);
                    }
                    else if(p%2!=0||wicket2==true)
                    {
                         if(wicket2!=true)
                         {
                           r2+=p;
                            r+=p;
                            temp++;
                            ba2++;
                            sr2=(float)r2/(float)ba2*(100);
                         }
                         else if(wicket2==true)
                         {
                             r2+=0;
                              r+=0;
                              temp+=0;
                              ba2+=0;
                              sr2+=0;
                         }
                          if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                  wicket2=true;

                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                  wicket2=true;

                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                  wicket2=true;

                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                  wicket2=true;

                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                  wicket2=true;

                             }
                         }

                       sprintf(o_,"%d",o);
                       sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);
                            sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);
                       sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);
                           sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                       sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d", temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                         sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                       outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(250,265,b);
                          outtextxy(150,320,o_);
                           outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);
                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);
                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);
                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);
                        outtextxy(140,40,br1);
                        outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        if(temp==60)
                        {
                            if(tmbat==true)
                            {
                               tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }
                        }
                        getch();Beep(2000,100);
                         if(wicket1!=true)
                        {
                            goto run;
                        }
                        else if(wicket3!=true)
                        {
                            goto run2;
                        }
                        else if(wicket4!=true)
                        {
                            goto run3;
                        }
                        else if(wicket5!=true)
                        {
                            goto run4;
                        }
                        else if(wicket6!=true)
                        {
                            goto run5;
                        }
                        else if(wicket7!=true)
                        {
                            goto run6;
                        }
                        else if(wicket8!=true)
                        {
                            goto run7;
                        }
                        else if(wicket9!=true)
                        {
                            goto run8;
                        }
                        else if(wicket10!=true)
                        {
                            goto run9;
                        }

                    }
                    goto run1;
                }


                run2:
                    {
                        srand(time(0));
                        p=rand()%7;
                        if(p==4)
                        {
                            f3++;
                        }
                        if(p==6)
                        {
                            s3++;
                        }
                        temp1=rand()%100;

                        //_________________________________________//

                        if(p%2==0)
                        {
                        r+=p;
                        r3+=p;
                        temp++;
                           if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket3=true;

                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                 wicket3=true;

                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);;
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                 wicket3=true;

                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                 wicket3=true;

                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                 wicket3=true;

                             }
                         }
                        ba3++;
                         sr3=(float)r3/(float)ba3*(100);
                        sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);
                        sprintf(Or_,"%d",o);
                        sprintf(o_,"%d",o);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);

                        sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);

                         sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);

                        sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                        sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d",temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                        sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                       outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(150,320,o_);
                         outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);

                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);


                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);

                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);

                        outtextxy(250,265,b);
                        outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,40,br1);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        if(temp==60)
                        {
                            if(tmbat==true)
                            {
                               tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }
                        }
                        getch();Beep(2000,100);
                        }
                        else if(p%2!=0||wicket3==true)
                        {
                          if(wicket3!=true)
                         {
                           r3+=p;
                            r+=p;
                            temp++;
                            ba3++;
                            sr3=(float)r3/(float)ba3*(100);
                         }
                         else if(wicket3==true)
                         {
                             r3+=0;
                              r+=0;
                              temp+=0;
                              ba3+=0;
                              sr3+=0;
                         }
                          if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket3=true;

                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                 wicket3=true;

                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                 wicket3=true;

                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                 wicket3=true;

                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                 wicket3=true;
                             }
                         }
                        sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);
                            sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);
                      sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);


                           sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);
                        sprintf(o_,"%d",o);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                        sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d",temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                         sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                       outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(250,265,b);
                        outtextxy(150,320,o_);
                         outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);
                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);
                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);
                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);
                        outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,40,br1);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        getch();Beep(2000,100);
                        if(temp==60)
                        {
                             if(tmbat==true)
                            {
                               tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }

                        }
                        if(wicket1!=true)
                        {
                            goto run;
                        }
                        else if(wicket2!=true)
                        {
                            goto run1;
                        }
                        else if(wicket4!=true)
                        {
                            goto run3;
                        }
                        else if(wicket5!=true)
                        {
                            goto run4;
                        }
                        else if(wicket6!=true)
                        {
                            goto run5;
                        }
                        else if(wicket7!=true)
                        {
                            goto run6;
                        }
                        else if(wicket8!=true)
                        {
                            goto run7;
                        }
                        else if(wicket9!=true)
                        {
                            goto run8;
                        }
                        else if(wicket10!=true)
                        {
                            goto run9;
                        }
                        }

                        goto run2;

                    }
                    run3:
                    {
                        srand(time(0));
                        p=rand()%7;
                        if(p==4)
                        {
                            f4++;
                        }
                        if(p==6)
                        {
                            f4++;
                        }
                        temp1=rand()%100;
                        //_________________________________________//

                        if(p%2==0)
                        {
                        r4+=p;
                         r+=p;
                         temp++;
                         if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket4=true;

                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                 wicket4=true;

                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                 wicket4=true;

                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                 wicket4=true;

                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                 wicket4=true;

                             }
                         }
                         ba4++;
                          sr4=(float)r4/(float)ba4*(100);
                        sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);
                       sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);
                            sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);

                           sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                        sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d",temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                         sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                       outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(250,265,b);
                          outtextxy(150,320,o_);
                           outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);
                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);
                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);

                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);
                        outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,40,br1);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        if(temp==60)
                        {
                            if(tmbat==true)
                            {
                               tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }
                        }
                        getch();Beep(2000,100);
                    }
                    else if(p%2!=0||wicket4==true)
                    {
                         if(wicket4!=true)
                         {
                           r4+=p;
                            r+=p;
                            temp++;
                            ba4++;
                             sr4=(float)r4/(float)ba4*(100);
                        sprintf(sr11_,"%f",sr11);
                         }
                         else if(wicket4==true)
                         {
                             r4+=0;
                              r+=0;
                              temp+=0;
                              ba4+=0;
                               sr4+=0;
                         }
                          if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket4=true;

                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                 wicket4=true;

                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                 wicket4=true;

                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                 wicket4=true;

                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                 wicket4=true;

                             }
                         }

                       sprintf(o_,"%d",o);
                       sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);
                            sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);
                        sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);

                           sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                        sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d", temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                         sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                      outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(250,265,b);
                          outtextxy(150,320,o_);
                           outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);
                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);
                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);
                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);
                        outtextxy(140,40,br1);
                        outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        if(temp==60)
                        {
                            if(tmbat==true)
                            {
                              tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }
                        }
                        getch();Beep(2000,100);
                        if(wicket1!=true)
                        {
                            goto run;
                        }
                        else if(wicket2!=true)
                        {
                            goto run1;
                        }
                        else if(wicket3!=true)
                        {
                            goto run2;
                        }
                        else if(wicket5!=true)
                        {
                            goto run4;
                        }
                        else if(wicket6!=true)
                        {
                            goto run5;
                        }
                        else if(wicket7!=true)
                        {
                            goto run6;
                        }
                        else if(wicket8!=true)
                        {
                            goto run7;
                        }
                        else if(wicket9!=true)
                        {
                            goto run8;
                        }
                        else if(wicket10!=true)
                        {
                            goto run9;
                        }
                    }
                    goto run3;
                }

                run4:
                    {
                        srand(time(0));
                        p=rand()%7;
                        if(p==4)
                        {
                            f5++;
                        }
                        if(p==6)
                        {
                            s5++;
                        }
                        temp1=rand()%100;

                        //_________________________________________//

                        if(p%2==0)
                        {
                        r5+=p;
                         r+=p;
                        temp++;
                           if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket5=true;

                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                 wicket5=true;

                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);;
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                 wicket5=true;

                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                 wicket5=true;

                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                 wicket5=true;

                             }
                         }
                        ba5++;
                         sr5=(float)r5/(float)ba5*(100);
                     sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);
                        sprintf(Or_,"%d",o);
                        sprintf(o_,"%d",o);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);

                        sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);

                         sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);

                      sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                        sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d",temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                         sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                      outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(150,320,o_);
                         outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);

                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);


                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);

                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);

                        outtextxy(250,265,b);
                       outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,40,br1);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        if(temp==60)
                        {
                            if(tmbat==true)
                            {
                               tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }
                        }
                        getch();Beep(2000,100);
                        }
                        else if(p%2!=0||wicket5==true)
                        {
                        if(wicket5!=true)
                         {
                           r5+=p;
                           r+=p;
                           temp++;
                           ba5++;
                            sr5=(float)r5/(float)ba5*(100);
                         }
                         else if(wicket5==true)
                         {
                             r5+=0;
                             r+=0;
                             temp+=0;
                             ba5+=0;
                              sr5+=0;
                         }
                          if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket5=true;

                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                 wicket5=true;

                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                 wicket5=true;

                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                 wicket5=true;

                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                 wicket5=true;
                             }
                         }
                        sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);
                            sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);
                        sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);

                           sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);
                        sprintf(o_,"%d",o);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                        sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d",temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                         sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                      outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(250,265,b);
                        outtextxy(150,320,o_);
                         outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);
                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);
                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);
                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);
                        outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,40,br1);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        getch();Beep(2000,100);
                        if(temp==60)
                        {
                           if(tmbat==true)
                            {
                               tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }
                        }
                        if(wicket1!=true)
                        {
                            goto run;
                        }
                        else if(wicket2!=true)
                        {
                            goto run1;
                        }
                        else if(wicket3!=true)
                        {
                            goto run2;
                        }
                        else if(wicket4!=true)
                        {
                            goto run3;
                        }
                        else if(wicket6!=true)
                        {
                            goto run5;
                        }
                        else if(wicket7!=true)
                        {
                            goto run6;
                        }
                        else if(wicket8!=true)
                        {
                            goto run7;
                        }
                        else if(wicket9!=true)
                        {
                            goto run8;
                        }
                        else if(wicket10!=true)
                        {
                            goto run9;
                        }
                        }

                        goto run4;

                    }
                    run5:
                    {
                        srand(time(0));
                        p=rand()%7;
                        if(p==4)
                        {
                            f6++;
                        }
                        if(p==6)
                        {
                            s6++;
                        }
                        temp1=rand()%100;
                        //_________________________________________//

                        if(p%2==0)
                        {
                        r6+=p;
                        r+=p;
                         temp++;
                         if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket6=true;

                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                 wicket6=true;

                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                 wicket6=true;

                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                 wicket6=true;

                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                 wicket6=true;

                             }
                         }
                         ba6++;
                          sr6=(float)r6/(float)ba6*(100);
                        sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);
                       sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);
                            sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);

                           sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                        sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d",temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                         sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                      outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(250,265,b);
                          outtextxy(150,320,o_);
                           outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);
                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);
                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);

                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);
                        outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,40,br1);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        if(temp==60)
                        {
                            if(tmbat==true)
                            {
                               tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }
                        }
                        getch();Beep(2000,100);
                    }
                    else if(p%2!=0||wicket6==true)
                    {
                         if(wicket6!=true)
                         {
                           r6+=p;
                           r+=p;
                           temp++;
                           ba6++;
                            sr6=(float)r6/(float)ba6*(100);
                         }
                         else if(wicket6==true)
                         {
                             r6+=0;
                             r+=0;
                             temp+=0;
                             ba6+=0;
                             sr6+=0;
                         }
                          if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket6=true;

                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                 wicket6=true;

                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                 wicket6=true;

                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                 wicket6=true;

                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                 wicket6=true;

                             }
                         }
                       sprintf(o_,"%d",o);
                       sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);
                            sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);
                       sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);

                           sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                        sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d", temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                         sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                      outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(250,265,b);
                          outtextxy(150,320,o_);
                           outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);
                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);
                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);
                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);
                        outtextxy(140,40,br1);
                        outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        if(temp==60)
                        {
                            if(tmbat==true)
                            {
                               tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }
                        }
                        getch();Beep(2000,100);
                        if(wicket1!=true)
                        {
                            goto run;
                        }
                        else if(wicket2!=true)
                        {
                            goto run1;
                        }

                        else if(wicket3!=true)
                        {
                            goto run2;
                        }
                        else if(wicket4!=true)
                        {
                            goto run3;
                        }
                        else if(wicket5!=true)
                        {
                            goto run4;
                        }
                        else if(wicket7!=true)
                        {
                            goto run6;
                        }
                        else if(wicket8!=true)
                        {
                            goto run7;
                        }
                        else if(wicket9!=true)
                        {
                            goto run8;
                        }
                        else if(wicket10!=true)
                        {
                            goto run9;
                        }
                    }
                    goto run5;
                }
                 run6:
                    {
                        srand(time(0));
                        p=rand()%7;
                        if(p==4)
                        {
                            f7++;
                        }
                        if(p==6)
                        {
                            s7++;
                        }
                        temp1=rand()%100;

                        //_________________________________________//

                        if(p%2==0)
                        {
                         r+=p;
                        r7+=p;
                        temp++;
                           if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket7=true;

                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                 wicket7=true;

                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);;
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                 wicket7=true;

                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                 wicket7=true;

                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                 wicket7=true;

                             }
                         }
                        ba7++;
                         sr7=(float)r7/(float)ba7*(100);
                        sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);
                        sprintf(Or_,"%d",o);
                        sprintf(o_,"%d",o);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);

                        sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);

                         sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);

                        sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                       sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d",temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                         sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                      outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(150,320,o_);
                         outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);

                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);


                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);

                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);

                        outtextxy(250,265,b);
                        outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,40,br1);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        if(temp==60)
                        {
                           if(tmbat==true)
                            {
                               tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }
                        }
                        getch();Beep(2000,100);
                        }
                        else if(p%2!=0||wicket7==true)
                        {
                         if(wicket7!=true)
                         {
                           r7+=p;
                           r+=p;
                           temp++;
                           ba7++;
                             sr7=(float)r7/(float)ba7*(100);
                         }
                         else if(wicket7==true)
                         {
                             r7+=0;
                              r+=0;
                              temp+=0;
                              ba7+=0;
                                sr7+=0;
                         }
                          if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket7=true;

                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                 wicket7=true;

                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                 wicket7=true;

                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                 wicket7=true;

                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                 wicket7=true;
                             }
                         }
                        sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);
                            sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);
                     sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);


                           sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);
                        sprintf(o_,"%d",o);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                       sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d",temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                         sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                      outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(250,265,b);
                        outtextxy(150,320,o_);
                         outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);
                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);
                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);
                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);
                        outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,40,br1);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        getch();Beep(2000,100);
                        if(temp==60)
                        {
                            if(tmbat==true)
                            {
                               tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }
                        }
                        if(wicket1!=true)
                        {
                            goto run;
                        }
                        else if(wicket2!=true)
                        {
                            goto run1;
                        }
                        else if(wicket3!=true)
                        {
                            goto run2;
                        }
                        else if(wicket4!=true)
                        {
                            goto run3;
                        }
                        else if(wicket5!=true)
                        {
                            goto run4;
                        }
                        else if(wicket6!=true)
                        {
                            goto run5;
                        }
                        else if(wicket8!=true)
                        {
                            goto run7;
                        }
                        else if(wicket9!=true)
                        {
                            goto run8;
                        }
                        else if(wicket10!=true)
                        {
                            goto run9;
                        }
                        }

                        goto run6;

                    }
                    run7:
                    {
                        srand(time(0));
                        p=rand()%7;
                        if(p==4)
                        {
                            f8++;
                        }
                        if(p==6)
                        {
                            s8++;
                        }
                        temp1=rand()%100;
                        //_________________________________________//

                        if(p%2==0)
                        {
                        r8+=p;
                         r+=p;
                         temp++;
                         if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket8=true;

                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                 wicket8=true;

                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                 wicket8=true;

                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                 wicket8=true;

                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                 wicket8=true;

                             }
                         }
                         ba8++;
                        sr8=(float)r8/(float)ba8*(100);
                        sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);

                       sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);
                            sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);

                           sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                    sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d",temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                         sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                      outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(250,265,b);
                          outtextxy(150,320,o_);
                           outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);
                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);
                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);

                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);
                       outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,40,br1);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        if(temp==60)
                        {
                            if(tmbat==true)
                            {
                               tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }
                        }
                        getch();Beep(2000,100);
                    }
                    else if(p%2!=0||wicket8==true)
                    {
                         if(wicket8!=true)
                         {
                           r8+=p;
                           r+=p;
                           temp++;
                           ba8++;
                        sr8=(float)r8/(float)ba8*(100);

                         }
                         else if(wicket8==true)
                         {
                             r8+=0;
                             r+=0;
                             temp+=0;
                             ba8+=0;
                             sr8+=0;
                         }
                          if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket8=true;

                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                 wicket8=true;

                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                 wicket8=true;

                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                 wicket8=true;

                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                 wicket8=true;

                             }
                         }
                       sprintf(o_,"%d",o);
                       sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);
                            sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);

                        sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);


                           sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                        sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d", temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                         sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                      outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(250,265,b);
                          outtextxy(150,320,o_);
                           outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);
                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);
                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);
                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);
                        outtextxy(140,40,br1);
                       outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        if(temp==60)
                        {
                            if(tmbat==true)
                            {
                              tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }
                        }
                        getch();Beep(2000,100);
                        if(wicket1!=true)
                        {
                            goto run;
                        }
                        else if(wicket2!=true)
                        {
                            goto run1;
                        }
                        else if(wicket3!=true)
                        {
                            goto run2;
                        }
                        else if(wicket4!=true)
                        {
                            goto run3;
                        }
                        else if(wicket5!=true)
                        {
                            goto run4;
                        }
                        else if(wicket6!=true)
                        {
                            goto run5;
                        }
                        else if(wicket7!=true)
                        {
                            goto run6;
                        }
                        else if(wicket9!=true)
                        {
                            goto run8;
                        }
                        else if(wicket10!=true)
                        {
                            goto run9;
                        }
                    }
                    goto run7;
                }

                            run8:
                    {
                        srand(time(0));
                        p=rand()%7;
                        if(p==4)
                        {
                            f9++;
                        }
                        if(p==6)
                        {
                            s9++;
                        }
                        temp1=rand()%100;

                        //_________________________________________//

                        if(p%2==0)
                        {
                          r+=p;
                        r9+=p;
                        temp++;
                           if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket9=true;

                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                 wicket9=true;

                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);;
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                 wicket9=true;

                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                 wicket9=true;

                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                 wicket9=true;

                             }
                         }
                        ba9++;
                        sr9=(float)r9/(float)ba9*(100);
                        sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);

                        sprintf(Or_,"%d",o);
                        sprintf(o_,"%d",o);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);

                        sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);

                         sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);

                        sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                        sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d",temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                         sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                      outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(150,320,o_);
                         outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);

                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);


                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);

                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);

                        outtextxy(250,265,b);
                        outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,40,br1);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        if(temp==60)
                        {
                           if(tmbat==true)
                            {
                               tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }
                        }
                        getch();Beep(2000,100);
                        }
                        else if(p%2!=0||wicket9==true)
                        {
                         if(wicket9!=true)
                         {
                           r9+=p;
                           r+=p;
                           temp++;
                           ba9++;
                        sr9=(float)r9/(float)ba9*(100);

                         }
                         else if(wicket9==true)
                         {
                             r9+=0;
                              r+=0;
                              temp+=0;
                              ba9+=0;
                              sr9+=0;
                         }
                          if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket9=true;

                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                 wicket9=true;

                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                 wicket9=true;

                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                 wicket9=true;

                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                 wicket9=true;
                             }
                         }
                        sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);
                            sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);
                        sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);

                           sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);
                        sprintf(o_,"%d",o);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                        sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d",temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                         sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                      outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(250,265,b);
                        outtextxy(150,320,o_);
                         outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);
                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);
                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);
                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);
                        outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,40,br1);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        getch();Beep(2000,100);
                        if(temp==60)
                        {
                             if(tmbat==true)
                            {
                               tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }
                        }
                        if(wicket1!=true)
                        {
                            goto run;
                        }
                        else if(wicket2!=true)
                        {
                            goto run1;
                        }
                        else if(wicket3!=true)
                        {
                            goto run2;
                        }
                        else if(wicket4!=true)
                        {
                            goto run3;
                        }
                        else if(wicket5!=true)
                        {
                            goto run4;
                        }
                        else if(wicket6!=true)
                        {
                            goto run5;
                        }
                        else if(wicket7!=true)
                        {
                            goto run6;
                        }
                        else if(wicket8!=true)
                        {
                            goto run7;
                        }
                        else if(wicket10!=true)
                        {
                            goto run9;
                        }
                        }

                        goto run8;

                    }
                    run9:
                    {
                        srand(time(0));
                        p=rand()%7;
                        if(p==4)
                        {
                            f10++;
                        }
                        if(p==6)
                        {
                            s10++;
                        }
                        temp1=rand()%100;
                        //_________________________________________//

                        if(p%2==0)
                        {
                        r+=p;
                        r10+=p;
                         temp++;
                         if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket10=true;

                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                 wicket10=true;

                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                 wicket10=true;

                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                 wicket10=true;

                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                 wicket10=true;

                             }
                         }
                         ba10++;
                       sr10=(float)r10/(float)ba10*(100);
                       sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);
                       sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);
                            sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);

                           sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                        sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                        sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d",temp);
                         sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                         sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                      outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);
                        outtextxy(0,460,"Result : ");
                        outtextxy(250,265,b);
                          outtextxy(150,320,o_);
                           outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);
                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);
                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);

                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);
                        outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,40,br1);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);
                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        if(temp==60)
                        {
                           if(tmbat==true)
                            {
                               tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;

                            }
                        }
                        getch();Beep(2000,100);
                    }
                    else if(p%2!=0||wicket10==true)
                    {
                         if(wicket10!=true)
                         {
                           r10+=p;
                           r+=p;
                           temp++;
                           ba10++;
                          sr10=(float)r10/(float)ba10*(100);

                         }
                         else if(wicket10==true)
                         {
                             r10+=0;
                             r+=0;
                             temp+=0;
                             ba10+=0;
                             sr10+=0;
                         }
                          if(temp==6||temp==36)
                         {
                             o++;
                             Or+=r-(Or+Or1+Or2+Or3+Or4);
                             ec=(float)Or/(float)o;
                             if(temp1%3==0)
                             {
                                 w++;
                                 wicket10=true;

                             }
                         }
                         else if(temp==12||temp==42)
                         {
                             o1++;
                              Or1+=r-(Or+Or1+Or2+Or3+Or4);
                              ec1=(float)Or1/(float)o1;
                             if(temp1%3==0)
                             {
                                 w1++;
                                 wicket10=true;

                             }
                         }
                         else if(temp==18||temp==48)
                         {
                             o2++;
                              Or2+=r-(Or+Or1+Or2+Or3+Or4);
                              ec2=(float)Or2/(float)o2;
                             if(temp1%3==0)
                             {
                                 w2++;
                                 wicket10=true;

                             }
                         }
                         else if(temp==24||temp==54)
                         {
                             o3++;
                              Or3+=r-(Or+Or1+Or2+Or3+Or4);
                              ec3=(float)Or3/(float)o3;
                             if(temp1%3==0)
                             {
                                 w3++;
                                 wicket10=true;

                             }
                         }
                         else if(temp==30||temp==60)
                         {
                             o4++;
                             Or4+=r-(Or+Or1+Or2+Or3+Or4);
                             ec4=(float)Or4/(float)o4;
                             if(temp1%3==0)
                             {
                                 w4++;
                                 wicket10=true;

                             }
                         }

                       sprintf(o_,"%d",o);
                       sprintf(Or_,"%d",Or);
                        sprintf(Or1_,"%d",Or1);
                         sprintf(Or2_,"%d",Or2);
                          sprintf(Or3_,"%d",Or3);
                           sprintf(Or4_,"%d",Or4);
                            sprintf(ec_,"%f",ec);
                        sprintf(ec1_,"%f",ec1);
                        sprintf(ec2_,"%f",ec2);
                        sprintf(ec3_,"%f",ec3);
                        sprintf(ec4_,"%f",ec4);

                           sprintf(w_,"%d",w);
                        sprintf(w1_,"%d",w1);
                        sprintf(w2_,"%d",w2);
                        sprintf(w3_,"%d",w3);
                        sprintf(w4_,"%d",w4);
                        sprintf(o1_,"%d",o1);
                        sprintf(o2_,"%d",o2);
                        sprintf(o3_,"%d",o3);
                        sprintf(o4_,"%d",o4);
                       sprintf(bal1,"%d",ba1);
                        sprintf(bal2,"%d",ba2);
                        sprintf(bal3,"%d",ba3);
                        sprintf(bal4,"%d",ba4);
                        sprintf(bal5,"%d",ba5);
                        sprintf(bal6,"%d",ba6);
                        sprintf(bal7,"%d",ba7);
                        sprintf(bal8,"%d",ba8);
                        sprintf(bal9,"%d",ba9);
                        sprintf(bal10,"%d",ba10);sprintf(bal11,"%d",ba11);
                        sprintf(br1,"%d",r1);
                        sprintf(br2,"%d",r2);
                        sprintf(br3,"%d",r3);
                        sprintf(br4,"%d",r4);
                        sprintf(br5,"%d",r5);
                        sprintf(br6,"%d",r6);
                        sprintf(br7,"%d",r7);
                        sprintf(br8,"%d",r8);
                        sprintf(br9,"%d",r9);
                        sprintf(br10,"%d",r10);
                        sprintf(br11,"%d",r11);
                        sprintf(q,"%d",p);
                        sprintf(t,"%d",r);
                        sprintf(b,"%d", temp);


                        sprintf(cf1,"%d",f1);
                        sprintf(cs1,"%d",s1);
                        sprintf(cf2,"%d",f2);
                        sprintf(cs2,"%d",s2);
                        sprintf(cf3,"%d",f3);
                        sprintf(cs3,"%d",s3);
                        sprintf(cf4,"%d",f4);
                        sprintf(cs4,"%d",s4);
                        sprintf(cf5,"%d",f5);
                        sprintf(cs5,"%d",s5);
                        sprintf(cf6,"%d",f6);
                        sprintf(cs6,"%d",s6);
                        sprintf(cf7,"%d",f7);
                        sprintf(cs7,"%d",s7);
                        sprintf(cf8,"%d",f8);
                        sprintf(cs8,"%d",s8);
                        sprintf(cf9,"%d",f9);
                        sprintf(cs9,"%d",s9);
                        sprintf(cf10,"%d",f10);
                        sprintf(cs10,"%d",s10);
                        sprintf(cf11,"%d",f11);
                        sprintf(cs11,"%d",s11);

                        sprintf(sr1_,"%f",sr1);
                        sprintf(sr2_,"%f",sr2);
                        sprintf(sr3_,"%f",sr3);
                        sprintf(sr4_,"%f",sr4);
                        sprintf(sr5_,"%f",sr5);
                        sprintf(sr6_,"%f",sr6);
                        sprintf(sr7_,"%f",sr7);
                        sprintf(sr8_,"%f",sr8);
                        sprintf(sr9_,"%f",sr9);
                        sprintf(sr10_,"%f",sr10);
                        sprintf(sr11_,"%f",sr11);
                        outtextxy(550,40,sr1_);
                         outtextxy(550,60,sr2_);
                          outtextxy(550,80,sr3_);
                         outtextxy(550,100,sr4_);
                        outtextxy(550,120,sr5_);
                         outtextxy(550,140,sr6_);
                         outtextxy(550,160,sr7_);
                          outtextxy(550,180,sr8_);
                           outtextxy(550,200,sr9_);
                            outtextxy(550,220,sr10_);
                             outtextxy(550,240,sr11_);
                       outtextxy(350,40,cf1);
                       outtextxy(350,60,cf2);
                       outtextxy(350,80,cf3);
                       outtextxy(350,100,cf4);
                       outtextxy(350,120,cf5);
                       outtextxy(350,140,cf6);
                       outtextxy(350,160,cf7);
                       outtextxy(350,180,cf8);
                      outtextxy(350,200,cf9);
                       outtextxy(350,220,cf10);
                       outtextxy(350,240,cf11);
                       outtextxy(450,40,cs1);
                       outtextxy(450,60,cs2);
                       outtextxy(450,80,cs3);
                       outtextxy(450,100,cs4);
                       outtextxy(450,120,cs5);
                       outtextxy(450,140,cs6);
                       outtextxy(450,160,cs7);
                       outtextxy(450,180,cs8);
                       outtextxy(450,200,cs9);
                       outtextxy(450,220,cs10);
                       outtextxy(450,240,cs11);

                        outtextxy(0,460,"Result : ");
                        outtextxy(250,265,b);
                          outtextxy(150,320,o_);
                           outtextxy(250,320,Or_);
                        outtextxy(250,340,Or1_);
                        outtextxy(250,360,Or2_);
                        outtextxy(250,380,Or3_);
                        outtextxy(250,400,Or4_);
                        outtextxy(150,340,o1_);
                        outtextxy(150,360,o2_);
                        outtextxy(150,380,o3_);
                        outtextxy(150,400,o4_);
                        outtextxy(450,320,ec_);
                        outtextxy(450,340,ec1_);
                        outtextxy(450,360,ec2_);
                        outtextxy(450,380,ec3_);
                        outtextxy(450,400,ec4_);
                         outtextxy(350,320,w_);
                        outtextxy(350,340,w1_);
                        outtextxy(350,360,w2_);
                        outtextxy(350,380,w3_);
                        outtextxy(350,400,w4_);
                        outtextxy(140,40,br1);
                        outtextxy(250,40,bal1);
                        outtextxy(250,60,bal2);
                        outtextxy(250,80,bal3);
                        outtextxy(250,100,bal4);
                        outtextxy(250,120,bal5);
                        outtextxy(250,140,bal6);
                        outtextxy(250,160,bal7);
                        outtextxy(250,180,bal8);
                        outtextxy(250,200,bal9);
                        outtextxy(250,220,bal10);
                        outtextxy(250,240,bal11);
                        outtextxy(140,60,br2);
                        outtextxy(140,80,br3);
                        outtextxy(140,100,br4);
                        outtextxy(140,120,br5);
                        outtextxy(140,140,br6);
                        outtextxy(140,160,br7);
                        outtextxy(140,180,br8);
                        outtextxy(140,200,br9);
                        outtextxy(140,220,br10);
                        outtextxy(140,240,br11);

                        outtextxy(100,265,t);
                        outtextxy(100,460,q);
                        if(temp==60)
                        {
                           if(tmbat==true)
                            {
                               tmsc=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc1=tmsc;
}
else
{
  sc2=tmsc;
}
                                getch();Beep(2000,100);
                                goto ball;
                            }
                            else if(tm1bat==true)
                            {
                               tmsc1=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10+r11;c++;
if(c==1)
{
  sc2=tmsc1;
}
else
{
 sc1=tmsc1;
}
                                getch();Beep(2000,100);
                                goto bat;
                            }
                        }
                        getch();Beep(2000,100);
                        if(wicket1!=true)
                        {
                            goto run;
                        }
                        else if(wicket2!=true)
                        {
                            goto run1;
                        }
                        else if(wicket3!=true)
                        {
                            goto run2;
                        }
                        else if(wicket4!=true)
                        {
                            goto run3;
                        }
                        else if(wicket5!=true)
                        {
                            goto run4;
                        }
                        else if(wicket6!=true)
                        {
                            goto run5;
                        }
                        else if(wicket7!=true)
                        {
                            goto run6;
                        }
                        else if(wicket8!=true)
                        {
                            goto run7;
                        }
                        else if(wicket9!=true)
                        {
                            goto run8;
                        }
                    }
                    goto run9;
                }
                win:
                    {
                      cleardevice();
                      if(sc1>sc2)
                      {
                          settextstyle(0,0,4);
                          setcolor(e);
                          outtextxy(200,200,tm);
                          setcolor(WHITE);
                          outtextxy(160,250,"Won the Match");
                          getch();Beep(2000,100);
                          return 0;
                      }
                      if(sc1<sc2)
                      {

                           settextstyle(0,0,4);
                           setcolor(f);
                           outtextxy(200,200,tm1);
                           setcolor(WHITE);
                           outtextxy(160,250,"Won the Match");
                           getch();Beep(2000,100);
                           return 0;
                      }
                      if(sc1==sc2)
                      {
                          settextstyle(0,0,4);
                          outtextxy(160,230,"DRAW");
                           getch();Beep(2000,100);
                           return 0;
                      }
                    }


}
