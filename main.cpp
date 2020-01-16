#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <conio.h>
#include <sstream>

using namespace std;
#include "printboard.h"
#include "fillboard.h"
#include "yasin8x8.h"
#include "bishap.h"
#include "sarbaz.h"
#include "movepart.h"


int main()
{
    string name1,name2,location1,location2;
    bool isend=false;
    char board[24][40]={};
    char workboard[8][8]={
    {'r','n','b','k','q','b','n','r'}\
    ,{'s','s','s',' ','s','s','s','s'}\
    ,{' ',' ',' ','s',' ',' ',' ',' '}\
    ,{' ',' ',' ',' ',' ',' ',' ',' '}\
    ,{' ',' ',' ',' ',' ',' ',' ',' '}\
    ,{' ',' ',' ',' ',' ',' ',' ',' '}\
    ,{'S','S','S','S','S','S','S','S'}\
    ,{'R','N','B','Q','K','B','N','R'}};
    fillboard(board);
    working8x8(board,workboard);
    cout<<"\t\tHi\n\tWelcome to our CHESS-GAME\nplease enter your name as first player:\n";
    getline(cin,name1);
    cout<<"and now please enter second player's name:\n";
    getline(cin,name2);

    while(isend==false)
    {
        working8x8(board,workboard);
        printBoard(board);
        cout<<"\n(ex:a2 to a4)\n";
        cout<<"\n\nplease enter your move or (ex)it\n";
        getline(cin,location1);
        if(location1[0]=='e'&&location1[1]=='x')
        {
            break;
        }
        cout<<"to:\n";
        getline(cin,location2);
        movepart(location1,location2,workboard);
    }
    cout<<"\t\t\tthanks for your playing XOXO\n";

    return 0;
}
