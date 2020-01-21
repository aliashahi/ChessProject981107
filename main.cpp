#include <iostream>
#include <fstream>
#define _WIN32_WINNT 0x0500
#include <stdlib.h>
#include <string.h>
#include <string>
#include <conio.h>
#include <sstream>
#include <windows.h>

using namespace std;
#include "positionConvertor.h"
#include "mohrekhodi.h"
#include "printboard.h"
#include "fillboard.h"
#include "yasin8x8.h"
#include "kishtestbala.h"
#include "kishtestpaeen.h"
#include "bishap.h"
#include "sarbaz.h"
#include"sarbazbala.h"
#include "nightpaeen.h"
#include "nightbala.h"
#include "rockpaeen.h"
#include "rockbala.h"
#include "queenpaeen.h"
#include "queenbala.h"
#include "kingpaeen.h"
#include "kingbala.h"
#include "movepart.h"



int main()
{
    string name1,name2,location1,location2;

    int j;
    string text;
    ifstream ifs2("endlogo.txt");
    ifstream ifs("welcomelogo.txt");//http://patorjk.com/software/taag
    int loc1[2]={};
    int loc2[2]={};
    bool isEnd=false;
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
    ,{'R','B','R','K','Q','B','N','R'}};

    system("color cf");
    //for screean size
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
    cout<<"Please Enter your name as FIRST Player:\n";
    getline(cin,name1);
    cout<<"THANKS,\nand now Please Enter SECOND Player's name too:\n";
    getline(cin,name2);
    system("cls");
    cout<<name1<<" you have white pieces with 'SMALL' characters to represent them,\n\n";
    cout<<"and "<<name2<<" you have Black pieces with 'CAPITAL' characters to represent them,\n\n";
    system("color 75");
    while(isEnd==false)
    {
        //player 1 white
        if(playerNumber==1)
        {
        working8x8(board,workboard);
        printBoard(board);
        cout<<"\n(ex:a2 to a4)\n";
        cout<<"\n"<<name1<<" ,It's your turn,\n";
        cout<<"\n\nplease enter your move or (ex)it:\n";
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
        movepart(pointerPN,loc1[0],loc1[1],loc2[0],loc2[1],workboard);
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
        system("color 04");
        system("cls");
        MoveWindow(console, r.left, r.top, 1250, 850, TRUE);
        while(!ifs2.eof())
    {
      getline(ifs2,text);
      cout << "" << text << "\n" ;
    }

    return 0;
}
