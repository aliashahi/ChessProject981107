int mohrekhodi(int pn,char workboard)
{
    if(pn==1)//small
    {
        if(workboard=='S')return 2;
        else if(workboard=='R')return 2;
        else if(workboard=='N')return 2;
        else if(workboard=='B')return 2;
        else if(workboard=='Q')return 2;
        else if(workboard=='K')return 2;
        else return 1;
    }
    else if(pn==2)//capital
    {
        if(workboard=='s')return 1;
        else if(workboard=='r')return 1;
        else if(workboard=='n')return 1;
        else if(workboard=='b')return 1;
        else if(workboard=='q')return 1;
        else if(workboard=='k')return 1;
        else return 2;
    }
    else return 3;
}
void bishap(int playerNum,int r1,int c1,int r2,int c2,char workboard[8][8])
{
    int n=0,x=c2-c1;
    int y=r2-r1;
    if(!(x==y||x==-1*y))
    {
        cout<<"error, bishop can't move like this,\n\n";
        return;
    }
    //both positive move
    if(x>0&&y>0)
    {
       for(int i=1;i<=x;i++)
       {
           //check to see is there a piece in way
           if(((int)workboard[r1+i][c1+i])!=32)
           {
               //playerNum =1>>small and 2>>capital
               n=mohrekhodi(playerNum,workboard[r1+i][c1+i]);
               //n=1>>mohre khodi and n=2>> harif
               if(n==1)
               {

                    if(c2==i+c1)
                    {
                        cout<<"its your own piece ,you can't take its place\n";
                        return;
                    }
                    else cout<< "your own piece is in the way,\n";
                    return;
               }
               else if(n==2)
               {
                    if(c2==i+c1)
                    {
                        workboard[r2][c2]=workboard[r1][c1];
                        workboard[r1][c1]=' ';
                        cout<<"you took enemy's piece,\n";
                        return;
                    }
                    else
                    {
                     cout<<"the enemy's piece is in the way,\n";
                     return;
                    }
               }
           }
       }
       workboard[r2][c2]=workboard[r1][c1];
       workboard[r1][c1]=' ';
       cout<<"good move,\n";
       return;
    }
    //end of scope both positive move
        //both negative move
    if(x<0&&y<0)
    {
       for(int i=x;0<i;i--)
       {
           //check to see is there a piece in way
           if(((int)workboard[r1+i][c1+i])!=32)
           {
               //playerNum =1>>small and 2>>capital
               n=mohrekhodi(playerNum,workboard[r1+i][c1+i]);
               //n=1>>mohre khodi and n=2>> harif
               if(n==1)
               {

                    if(c2==i+c1)
                    {
                        cout<<"its your own piece ,you can't take its place\n";
                        return;
                    }
                    else cout<< "your own piece is in the way,\n";
                    return;
               }
               else if(n==2)
               {
                    if(c2==i+c1)
                    {
                        workboard[r2][c2]=workboard[r1][c1];
                        workboard[r1][c1]=' ';
                        cout<<"you took enemy's piece,\n";
                        return;
                    }
                    else
                    {
                     cout<<"the enemy's piece is in the way,\n";
                     return;
                    }
               }
           }
       }
       workboard[r2][c2]=workboard[r1][c1];
       workboard[r1][c1]=' ';
       cout<<"good move,\n";
       return;
    }
    //end of scope both negative move
}

