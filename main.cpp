#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#include "printboard.h"
#include "fillboard.h"

int main()
{
    char board[24][40]={};
    fillboard(board);
    printBoard(board);
    cout<<endl;

    return 0;
}
