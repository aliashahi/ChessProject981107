void bishap(int *pn,int r1,int c1,int r2,int c2,char workboard[8][8])
{
    char t,j,g;
    int r,c,h;
    int n=0,x=c2-c1;
    int y=r2-r1;

    //PLAYER ONE
    if(*pn==1)
    {
        g='k';
        if(!(x==y||x==-1*y))
        {
            cout<<"\n\aERROR, bishop can't move like this,\n";
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
               //pn =1>>small and 2>>capital
               n=mohrekhodi(*pn,workboard[r1+i][c1+i]);
               //n=1>>mohre khodi and n=2>> harif
               if(n==1)
               {
                    if(c2==i+c1)
                    {
                        cout<<"\n\aERROR,Its your own piece ,you can't take its place\n";
                        return;
                    }
                    else cout<<"\n\aERROR,your own piece is in the way,\n";
                    return;
               }
               else if(n==2)
               {
                    if(c2==i+c1)
                    {
                        j=workboard[r1][c1];
                        t=workboard[r2][c2];
                        workboard[r2][c2]=workboard[r1][c1];
                        workboard[r1][c1]=' ';
                        for(r=0;r<8;r++)
                        {
                            for(c=0;c<8;c++)
                            {
                                if(workboard[r][c]==g)
                                  h=kishtestbala(r,c,workboard);
                            }
                        }
                        if(h==1)
                        {
                            workboard[r1][c1]=j;
                            workboard[r2][c2]=t;
                            cout<<"error"<<"  kishhhh!!"<<endl;
                        }
                        else if(h==0)
                        {
                            *pn==1 ? *pn=2 : *pn=1;
                        }
                        return;
                    }
                    else
                    {
                        cout<<"\n\aERROR,the enemy's piece is in the way,\n";
                        return;
                    }
               }
           }
       }
       j=workboard[r1][c1];
       t=workboard[r2][c2];
       workboard[r2][c2]=workboard[r1][c1];
       workboard[r1][c1]=' ';
    for(r=0;r<8;r++)
        {
            for(c=0;c<8;c++)
            {
                if(workboard[r][c]==g)
                    h=kishtestbala(r,c,workboard);
            }
        }
    if(h==1)
    {
        workboard[r1][c1]=j;
        workboard[r2][c2]=t;
        cout<<"error"<<"  kishhhh!!"<<endl;
    }
    else if(h==0)
    {
        *pn==1 ? *pn=2 : *pn=1;
    }
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
               //pn =1>>small and 2>>capital
               n=mohrekhodi(*pn,workboard[r1+i][c1+i]);
               //n=1>>mohre khodi and n=2>> harif
               if(n==1)
               {
                    if(c2==i+c1)
                    {
                        cout<<"\n\aERROR,Its your own piece ,you can't take its place\n";
                        return;
                    }
                    else cout<<"\n\aERROR,your own piece is in the way,\n";
                    return;
               }
               else if(n==2)
               {
                    if(c2==i+c1)
                    {
                        j=workboard[r1][c1];
                        t=workboard[r2][c2];
                        workboard[r2][c2]=workboard[r1][c1];
                        workboard[r1][c1]=' ';
                        for(r=0;r<8;r++)
                        {
                            for(c=0;c<8;c++)
                            {
                                if(workboard[r][c]==g)
                                    h=kishtestbala(r,c,workboard);
                            }
                        }
                        if (h==1)
                        {
                            workboard[r1][c1]=j;
                            workboard[r2][c2]=t;
                            cout<<"error"<<"  kishhhh!!"<<endl;
                        }
                        else if(h==0)//CHANGEING PLAYER
                        {
                            *pn==1 ? *pn=2 : *pn=1;
                        }
                        return;
                    }
                    else
                    {
                        cout<<"\n\aERROR,the enemy's piece is in the way,\n";
                        return;
                    }
               }
           }
       }
       j=workboard[r1][c1];
       t=workboard[r2][c2];
       workboard[r2][c2]=workboard[r1][c1];
       workboard[r1][c1]=' ';
       for(r=0;r<8;r++)
       {
            for(c=0;c<8;c++)
            {
                if(workboard[r][c]==g)
                  h=kishtestbala(r,c,workboard);
            }
        }
       if(h==1)
        {
            workboard[r1][c1]=j;
            workboard[r2][c2]=t;
            cout<<"error"<<"  kishhhh!!"<<endl;
        }
        else if(h==0)
        {
            *pn==1 ? *pn=2 : *pn=1;
        }
        return;
    }
    //end of scope both negative move
    //negative x and positive y
    if(x<0&&y>0)
    {
       for(int i=x;0<i;i--)
       {
           //check to see is there a piece in way
           if(((int)workboard[r1+i][c1-i])!=32)
           {
               //pn =1>>small and 2>>capital
               n=mohrekhodi(*pn,workboard[r1+i][c1-i]);
               //n=1>>mohre khodi and n=2>> harif
               if(n==1)
               {

                    if(c2==i+c1)
                    {
                        cout<<"\n\aERROR,Its your own piece ,you can't take its place\n";
                        return;
                    }
                    else cout<<"\n\aERROR,your own piece is in the way,\n";
                    return;
               }
               else if(n==2)
               {
                    if(c2==i+c1)
                    {
                        j=workboard[r1][c1];
                        t=workboard[r2][c2];
                        workboard[r2][c2]=workboard[r1][c1];
                        workboard[r1][c1]=' ';
                        for(r=0;r<8;r++)
                        {
                            for(c=0;c<8;c++)
                            {
                                if(workboard[r][c]==g)
                                  h=kishtestbala(r,c,workboard);
                            }
                        }
                    if (h==1)
                    {
                        workboard[r1][c1]=j;
                        workboard[r2][c2]=t;
                        cout<<"error"<<"  kishhhh!!"<<endl;
                    }
                    else if(h==0)
                   {
                        *pn==1 ? *pn=2 : *pn=1;
                   }
                   return;
                   }
                   else
                   {
                        cout<<"\n\aERROR,the enemy's piece is in the way,\n";
                        return;
                   }
               }
           }
       }
       j=workboard[r1][c1];
       t=workboard[r2][c2];
       workboard[r2][c2]=workboard[r1][c1];
       workboard[r1][c1]=' ';
        for(r=0;r<8;r++)
      {
        for(c=0;c<8;c++)
        {
            if (workboard[r][c]==g)
              h=kishtestbala(r,c,workboard);
        }
      }
      if(h==1)
        {
            workboard[r1][c1]=j;
            workboard[r2][c2]=t;
            cout<<"error"<<"  kishhhh!!"<<endl;
        }
        else if(h==0)
        {
            *pn==1 ? *pn=2 : *pn=1;
        }
        return;
    }
    //end of scope x and positive y
        //negative y and positive x
    if(x>0&&y<0)
    {
       for(int i=x;0<i;i--)
       {
           //check to see is there a piece in way
           if(((int)workboard[r1-i][c1+i])!=32)
           {
               //pn =1>>small and 2>>capital
               n=mohrekhodi(*pn,workboard[r1+i][c1-i]);
               //n=1>>mohre khodi and n=2>> harif
               if(n==1)
               {

                    if(c2==i+c1)
                    {
                        cout<<"\n\aERROR,Its your own piece ,you can't take its place\n";
                        return;
                    }
                    else cout<<"\n\aERROR,your own piece is in the way,\n";
                    return;
               }
               else if(n==2)
               {
                    if(c2==i+c1)
                    {
                        j=workboard[r1][c1];
                        t=workboard[r2][c2];
                        workboard[r2][c2]=workboard[r1][c1];
                        workboard[r1][c1]=' ';
                        for(r=0;r<8;r++)
                      {
                        for(c=0;c<8;c++)
                        {
                            if(workboard[r][c]==g)
                              h=kishtestbala(r,c,workboard);
                        }
                      }
                        if (h==1)
                        {
                            workboard[r1][c1]=j;
                            workboard[r2][c2]=t;
                            cout<<"error"<<"  kishhhh!!"<<endl;
                        }
                        else if(h==0)
                       {
                            workboard[r2][c2]=workboard[r1][c1];
                            workboard[r1][c1]=' ';
                            cout<<"\n\aYou took enemy's piece,\n";
                            *pn==1 ? *pn=2 : *pn=1;
                       }
                   return;
                }
                    else
                    {
                     cout<<"\n\aERROR,the enemy's piece is in the way,\n";
                     return;
                    }
               }
           }
       }







                   j=workboard[r1][c1];
           t=workboard[r2][c2];

         workboard[r2][c2]=workboard[r1][c1];
workboard[r1][c1]=' ';

      //
    for(r=0;r<8;r++)
  {
    for(c=0;c<8;c++)
    {
        if (workboard[r][c]==g)
          h=kishtestbala(r,c,workboard);
    }
}//
                    if (h==1)
                    {
                        workboard[r1][c1]=j;
                       workboard[r2][c2]=t;
                         cout<<"error"<<"  kishhhh!!"<<endl;
                    }
                    else if(h==0)
                   {
                        *pn==1 ? *pn=2 : *pn=1;
                   }






       return;
    }
    }

    else if(*pn==2)
    {
        g='K';
    if(!(x==y||x==-1*y))
    {
        cout<<"\nERROR, bishop can't move like this,\n";
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
               //pn =1>>small and 2>>capital
               n=mohrekhodi(*pn,workboard[r1+i][c1+i]);
               //n=1>>mohre khodi and n=2>> harif
               if(n==1)
               {

                    if(c2==i+c1)
                    {
                        cout<<"\nERROR,Its your own piece ,you can't take its place\n";
                        return;
                    }
                    else cout<<"\nERROR,your own piece is in the way,\n";
                    return;
               }
               else if(n==2)
               {
                    if(c2==i+c1)
                    {





                   j=workboard[r1][c1];
           t=workboard[r2][c2];

         workboard[r2][c2]=workboard[r1][c1];
workboard[r1][c1]=' ';

      //
    for(r=0;r<8;r++)
  {
    for(c=0;c<8;c++)
    {
        if (workboard[r][c]==g)
          h=kishtestpaeen(r,c,workboard);
    }
}//
                    if (h==1)
                    {
                        workboard[r1][c1]=j;
                       workboard[r2][c2]=t;
                         cout<<"error"<<"  kishhhh!!"<<endl;
                    }
                    else if(h==0)
                   {
                        *pn==1 ? *pn=2 : *pn=1;
                   }







                        return;
                    }
                    else
                    {
                     cout<<"\nERROR,the enemy's piece is in the way,\n";
                     return;
                    }
               }
           }
       }







                   j=workboard[r1][c1];
           t=workboard[r2][c2];

         workboard[r2][c2]=workboard[r1][c1];
workboard[r1][c1]=' ';

      //
    for(r=0;r<8;r++)
  {
    for(c=0;c<8;c++)
    {
        if (workboard[r][c]==g)
          h=kishtestpaeen(r,c,workboard);
    }
}//
                    if (h==1)
                    {
                        workboard[r1][c1]=j;
                       workboard[r2][c2]=t;
                         cout<<"error"<<"  kishhhh!!"<<endl;
                    }
                    else if(h==0)
                   {
                        *pn==1 ? *pn=2 : *pn=1;
                   }







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
               //pn =1>>small and 2>>capital
               n=mohrekhodi(*pn,workboard[r1+i][c1+i]);
               //n=1>>mohre khodi and n=2>> harif
               if(n==1)
               {

                    if(c2==i+c1)
                    {
                        cout<<"\nERROR,Its your own piece ,you can't take its place\n";
                        return;
                    }
                    else cout<<"\nERROR,your own piece is in the way,\n";
                    return;
               }
               else if(n==2)
               {
                    if(c2==i+c1)
                    {





                   j=workboard[r1][c1];
           t=workboard[r2][c2];

         workboard[r2][c2]=workboard[r1][c1];
workboard[r1][c1]=' ';

      //
    for(r=0;r<8;r++)
  {
    for(c=0;c<8;c++)
    {
        if (workboard[r][c]==g)
          h=kishtestpaeen(r,c,workboard);
    }
}//
                    if (h==1)
                    {
                        workboard[r1][c1]=j;
                       workboard[r2][c2]=t;
                         cout<<"error"<<"  kishhhh!!"<<endl;
                    }
                    else if(h==0)
                   {
                        *pn==1 ? *pn=2 : *pn=1;
                   }








                        return;
                    }
                    else
                    {
                     cout<<"\nERROR,the enemy's piece is in the way,\n";
                     return;
                    }
               }
           }
       }










                   j=workboard[r1][c1];
           t=workboard[r2][c2];

         workboard[r2][c2]=workboard[r1][c1];
workboard[r1][c1]=' ';

      //
    for(r=0;r<8;r++)
  {
    for(c=0;c<8;c++)
    {
        if (workboard[r][c]==g)
          h=kishtestpaeen(r,c,workboard);
    }
}//
                    if (h==1)
                    {
                        workboard[r1][c1]=j;
                       workboard[r2][c2]=t;
                         cout<<"error"<<"  kishhhh!!"<<endl;
                    }
                    else if(h==0)
                   {
                        *pn==1 ? *pn=2 : *pn=1;
                   }







       return;
    }
    //end of scope both negative move
        //negative x and positive y
    if(x<0&&y>0)
    {
       for(int i=x;0<i;i--)
       {
           //check to see is there a piece in way
           if(((int)workboard[r1+i][c1-i])!=32)
           {
               //pn =1>>small and 2>>capital
               n=mohrekhodi(*pn,workboard[r1+i][c1-i]);
               //n=1>>mohre khodi and n=2>> harif
               if(n==1)
               {

                    if(c2==i+c1)
                    {
                        cout<<"\nERROR,Its your own piece ,you can't take its place\n";
                        return;
                    }
                    else cout<<"\nERROR,your own piece is in the way,\n";
                    return;
               }
               else if(n==2)
               {
                    if(c2==i+c1)
                    {





                   j=workboard[r1][c1];
           t=workboard[r2][c2];

         workboard[r2][c2]=workboard[r1][c1];
workboard[r1][c1]=' ';

      //
    for(r=0;r<8;r++)
  {
    for(c=0;c<8;c++)
    {
        if (workboard[r][c]==g)
          h=kishtestpaeen(r,c,workboard);
    }
}//
                    if (h==1)
                    {
                        workboard[r1][c1]=j;
                       workboard[r2][c2]=t;
                         cout<<"error"<<"  kishhhh!!"<<endl;
                    }
                    else if(h==0)
                   {
                        *pn==1 ? *pn=2 : *pn=1;
                   }







                        return;
                    }
                    else
                    {
                     cout<<"\nERROR,the enemy's piece is in the way,\n";
                     return;
                    }
               }
           }
       }








                   j=workboard[r1][c1];
           t=workboard[r2][c2];

         workboard[r2][c2]=workboard[r1][c1];
workboard[r1][c1]=' ';

      //
    for(r=0;r<8;r++)
  {
    for(c=0;c<8;c++)
    {
        if (workboard[r][c]==g)
          h=kishtestpaeen(r,c,workboard);
    }
}//
                    if (h==1)
                    {
                        workboard[r1][c1]=j;
                       workboard[r2][c2]=t;
                         cout<<"error"<<"  kishhhh!!"<<endl;
                    }
                    else if(h==0)
                   {
                        *pn==1 ? *pn=2 : *pn=1;
                   }







       return;
    }
    //end of scope x and positive y
        //negative y and positive x
    if(x>0&&y<0)
    {
       for(int i=x;0<i;i--)
       {
           //check to see is there a piece in way
           if(((int)workboard[r1-i][c1+i])!=32)
           {
               //pn =1>>small and 2>>capital
               n=mohrekhodi(*pn,workboard[r1+i][c1-i]);
               //n=1>>mohre khodi and n=2>> harif
               if(n==1)
               {

                    if(c2==i+c1)
                    {
                        cout<<"\nERROR,Its your own piece ,you can't take its place\n";
                        return;
                    }
                    else cout<<"\nERROR,your own piece is in the way,\n";
                    return;
               }
               else if(n==2)
               {
                    if(c2==i+c1)
                    {





                   j=workboard[r1][c1];
           t=workboard[r2][c2];

         workboard[r2][c2]=workboard[r1][c1];
workboard[r1][c1]=' ';

      //
    for(r=0;r<8;r++)
  {
    for(c=0;c<8;c++)
    {
        if (workboard[r][c]==g)
          h=kishtestpaeen(r,c,workboard);
    }
}//
                    if (h==1)
                    {
                        workboard[r1][c1]=j;
                       workboard[r2][c2]=t;
                         cout<<"error"<<"  kishhhh!!"<<endl;
                    }
                    else if(h==0)
                   {
                        *pn==1 ? *pn=2 : *pn=1;
                   }









                        return;
                    }
                    else
                    {
                     cout<<"\nERROR,the enemy's piece is in the way,\n";
                     return;
                    }
               }
           }
       }







                   j=workboard[r1][c1];
           t=workboard[r2][c2];

         workboard[r2][c2]=workboard[r1][c1];
workboard[r1][c1]=' ';

      //
    for(r=0;r<8;r++)
  {
    for(c=0;c<8;c++)
    {
        if (workboard[r][c]==g)
          h=kishtestpaeen(r,c,workboard);
    }
}//
                    if (h==1)
                    {
                        workboard[r1][c1]=j;
                       workboard[r2][c2]=t;
                         cout<<"error"<<"  kishhhh!!"<<endl;
                    }
                    else if(h==0)
                   {
                        *pn==1 ? *pn=2 : *pn=1;
                   }






       return;
    }
    }

    //end of scope negative y and positive x
}
