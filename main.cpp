#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
#include "printboard.h"
#include "fillboard.h"
#include "yasin8x8.h"
#include "movepart.h"

int main()
{
    string name1,name2,command1,command2;
    bool isend=false;
    char board[24][40]={};
    char workboard[8][8]={'R','N','B','K','Q','B','N','R','S','S','S','S','S','S','S','S',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','S','S','S','S','S','S','S','S','R','N','B','K','Q','B','N','R'};
    fillboard(board);
    working8x8(board,workboard);
    cout<<endl;
    cout<<"Hi\nWelcome to our CHESS-GAME\nplease enter your name as first player:\n";
    getline(cin,name1);
    cout<<"and now please enter second player's name:\n";
    getline(cin,name2);
    
    while(isend==false)
    {
        working8x8(board,workboard);
        printBoard(board);
        cout<<"\n\nplease enter your move or (e)xit\n";
        getline(cin,command1);
        if(command1=="e")
        {
            break;
        }
        cout<<"to:\n";
        getline(cin,command2);
        movepart(command1,command2,workboard);
        system("CLS");
    }
    cout<<"thanks for your playing XOXO\n";

    return 0;
}
