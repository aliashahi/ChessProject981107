void working8x8(char board[24][40],char workboard[8][8])
{
    int i,j,row=1,col=2;//rabete bein ziad shodan markaz moraba ha
    for(i=0;i<8;i++)
    {
        col=2;
        for(j=0;j<8;j++)
        {
            if(workboard[i][j]==' ')continue;
            board[row][col]=workboard[i][j];
            col=col+5;
        }
        row=row+3;
    }
}
