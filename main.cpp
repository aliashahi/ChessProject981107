#include <iostream>
#include <fstream>              //PRINTING FROM FILE
#define _WIN32_WINNT 0x0500     //WINDOWS RESIZEING
#include <stdlib.h>
#include <string>
#include <sstream>
#include <windows.h>            //FOR SYSTEM CALLS

using namespace std;
#include "positionConvertor.h"  //user input to coordinate
#include "mohrekhodi.h"         //checking to see is this your piece or not
#include "printboard.h"         //printing the main board
#include "fillboard.h"          //first and only time we fill the constant board
#include "yasin8x8.h"           //putting workboard in board
#include "kishtestbala.h"       //CODED BY YASIN
#include "kishtestpaeen.h"      //CODED BY YASIN
#include "bishap.h"             //I WROTE IT ,HE EDITED IT
#include "sarbaz.h"             //CODED BY YASIN
#include"sarbazbala.h"          //CODED BY YASIN
#include "nightpaeen.h"         //CODED BY YASIN
#include "nightbala.h"          //CODED BY YASIN
#include "rockpaeen.h"          //CODED BY YASIN
#include "rockbala.h"           //CODED BY YASIN
#include "queenpaeen.h"         //CODED BY YASIN
#include "queenbala.h"          //CODED BY YASIN
#include "kingpaeen.h"          //CODED BY YASIN
#include "kingbala.h"           //CODED BY YASIN
#include "movepart.h"           //WHERE WE DECIDE WITCH FUNCTION SHOULD WE CALL


int main()
{
    string name1,name2,location1,location2;

    int j;
    string text;
    ifstream ifs("welcomelogo.txt");//http://patorjk.com/software/taag
    ifstream ifs2("endlogo.txt");
    int loc1[2]={};
    int loc2[2]={};
    int playerNumber=1,nCheck;
    int *pointerPN=&playerNumber;
    char board[24][40]={};
    char workboard[8][8]={
    {'r','n','b','q','k','b','n','r'}\
    ,{'s','s','s','s','s','s','s','s'}\
    ,{' ',' ',' ',' ',' ',' ',' ',' '}\
    ,{' ',' ',' ',' ',' ',' ',' ',' '}\
    ,{' ',' ',' ',' ',' ',' ',' ',' '}\
    ,{' ',' ',' ',' ',' ',' ',' ',' '}\
    ,{'S','S','S','S','S','S','S','S'}\
    ,{'R','B','R','Q','K','B','N','R'}};
    //background color
    system("color cf");
    //for screen size
      HWND console = GetConsoleWindow();
      RECT r;
      GetWindowRect(console, &r);
  //end
    fillboard(board);
    //resizing screen
    MoveWindow(console, r.left, r.top, 550, 750, TRUE);

    while(!ifs.eof())
    {
      getline(ifs,text);
      cout << "" << text << "\n" ;
    }
    //TAKING NAMES
    cout<<"Please Enter your name as FIRST Player:\n";
    getline(cin,name1);
    cout<<"THANKS,\nand now Please Enter SECOND Player's name too:\n";
    getline(cin,name2);
    system("cls");

    cout<<name1<<" you have white pieces with 'SMALL' characters to represent them,\n\n";
    cout<<"and "<<name2<<" you have Black pieces with 'CAPITAL' characters to represent them,\n\n";
    system("color 75");
    //GAME LOOP
    while(1)
    {
        //player 1 white
        if(playerNumber==1)
        {
            working8x8(board,workboard);//FILLING BOARD WITH WORKBOARD
            printBoard(board);//PRINTING BOARD

            cout<<"\n(ex:a2 to a4)\n";
            cout<<"\n"<<name1<<" ,It's your turn,\n";
            cout<<"\n\nplease enter your move or (ex)it:\n";
            getline(cin,location1);//LOCATION 1
            if(location1[0]=='e'&&location1[1]=='x')
            {
                break;
            }
            //CONVERTING
            positionCon(location1,loc1);
            //CHECK TO SEE THIS IS YOUR PIECE OR NOT
            nCheck=mohrekhodi(*pointerPN,workboard[loc1[0]][loc1[1]]);
            if(nCheck==2)
            {
                system("cls");
                cout<<"\n\n";
                cout<<"\n\aERROR,This isn't your piece,\n\n";
                continue;
            }
            cout<<"to:\n";
            getline(cin,location2);
            positionCon(location2,loc2);
            system("cls");
            movepart(pointerPN,loc1[0],loc1[1],loc2[0],loc2[1],workboard);//PLAYERPOINTER & LOCATION 1&2 & WORKBOARD
        }
        //player 2 black
        else if(playerNumber==2)
        {
            working8x8(board,workboard);
            printBoard(board);
            cout<<"\n(ex:a2 to a4)\n";
            cout<<"\n"<<name2<<" ,It's your turn,\n";
            cout<<"\n\nPlease Enter your Move or (ex)it:\n";
            getline(cin,location1);
            if(location1[0]=='e'&&location1[1]=='x')
            {
                break;
            }
            positionCon(location1,loc1);
            nCheck=mohrekhodi(*pointerPN,workboard[loc1[0]][loc1[1]]);
            if(nCheck==2)
            {
                system("cls");
                cout<<"\n\n\n";
                cout<<"\n\aERROR,This isn't your piece,\n\n";
                continue;
            }
            cout<<"to:\n";
            getline(cin,location2);
            positionCon(location2,loc2);
            system("cls");
            cout<<"\n\n\n";
            movepart(pointerPN,loc1[0],loc1[1],loc2[0],loc2[1],workboard);
        }

    }
    //END OF GAME LOOP
        system("color 04");
        system("cls");
        //window resize
        MoveWindow(console, r.left, r.top, 1250, 850, TRUE);
        //printing endlogo.txt
        while(!ifs2.eof())
    {
      getline(ifs2,text);
      cout << "" << text << "\n" ;
    }
    return 0;
}
