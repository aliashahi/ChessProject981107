#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <conio.h>
#include <sstream>

using namespace std;
#include "positionConvertor.h"
#include "mohrekhodi.h"
#include "printboard.h"
#include "fillboard.h"
#include "yasin8x8.h"
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
    int loc1[2]={};
    int loc2[2]={};
    bool isEnd=false;
    int playerNumber=1,nCheck;
    int *pointerPN=&playerNumber;
    char board[24][40]={};
    char workboard[8][8]={
    {'r','n','b','k','q','b','n','r'}\
    ,{'s','s','s','s','s','s','s','s'}\
    ,{' ',' ',' ',' ',' ',' ',' ',' '}\
    ,{' ',' ',' ',' ',' ',' ',' ',' '}\
    ,{' ',' ',' ',' ',' ',' ',' ',' '}\
    ,{' ',' ',' ',' ',' ',' ',' ',' '}\
    ,{'S','S','S','S','S','S','S','S'}\
    ,{'R','N','B','Q','K','B','N','R'}};
    fillboard(board);
    cout<<"\t\tHi\n\tWELCOME to CHESS-GAME\nPlease Enter your name as FIRST Player:\n";
    getline(cin,name1);
    cout<<"THANKS,\nand now Please Enter SECOND Player's name too:\n";
    getline(cin,name2);
    cout<<"THANKS\n\n"<<name1<<" you have white pieces with 'SMALL' characters to represent them,\n\n";
    cout<<"and "<<name2<<" you have Black pieces with 'CAPITAL' characters to represent them,\n\n";
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
            cout<<"\nERROR,This isn't your piece,\n\n";
            continue;
        }
        cout<<"to:\n";
        getline(cin,location2);
        positionCon(location2,loc2);
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
            cout<<"\nERROR,This isn't your piece,\n\n";
            continue;
        }
        cout<<"to:\n";
        getline(cin,location2);
        positionCon(location2,loc2);
        movepart(pointerPN,loc1[0],loc1[1],loc2[0],loc2[1],workboard);
        }

    }
    cout<<"**thanks for playing XOXO**\n";

    return 0;
}
