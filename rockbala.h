void rockbala(int *pn,int r1,int c1,int r2,int c2,char w[8][8])
{
    int r,c,h,y,x,i;
     x=c2-c1;
    y=r2-r1;
char t,j;

            for(r=0;r<8;r++)
  {
    for(c=0;c<8;c++)
    {
        if (w[r][c]=='k')
          h=kishtestbala(r,c,w);
    }
}




      if (((y!=0)&&(x!=0)))
      {
         cout<<"\n\aERROR,can't move like this\n";
                return;
      }
      else if (((int)w[r2][c2]==115)||((int)w[r2][c2]==114)||(int)(w[r2][c2]==110)||((int)w[r2][c2]==98)||((int)w[r2][c2]==107)||(int)(w[r2][c2]==113))
      {
         cout<<"\n\aERROR,It's your own piece\n";
                return;
      }




 else if(x<0)
     {
         x=x+1;
         for(i=x;i<0;i++)
         {
             //check az akhar be aval
             if (w[r1][c1+i]!=32)
             {
                 cout<<"\n\aERROR,it's way is blocked\n";
                return;
             }
         }
          j=w[r1][c1];
           t=w[r2][c2];

         w[r2][c2]=w[r1][c1];

                    w[r1][c1]=' ';

      //
    for(r=0;r<8;r++)
  {
    for(c=0;c<8;c++)
    {
        if (w[r][c]=='k')
          h=kishtestbala(r,c,w);
    }
}//
                    if (h==1)
                    {
                        w[r1][c1]=j;
                        w[r2][c2]=t;
                         cout<<"error"<<"  kishhhh!!"<<endl;
                    }
                    else if(h==0)
                   {
                        *pn==1 ? *pn=2 : *pn=1;
                   }
     }






    else if(x>0)
    {


        for(i=1;i<x;i++)
        {
            //chek aval be akhar
            if (w[r1][c1+i]!=32)
            {
                cout<<"error"<<"mohre in the way "<<endl;
                return;
            }
        }
              j=w[r1][c1];
           t=w[r2][c2];

         w[r2][c2]=w[r1][c1];

                    w[r1][c1]=' ';

      //
    for(r=0;r<8;r++)
  {
    for(c=0;c<8;c++)
    {
        if (w[r][c]=='k')
          h=kishtestbala(r,c,w);
    }
}//
                    if (h==1)
                    {
                        w[r1][c1]=j;
                        w[r2][c2]=t;
                         cout<<"error"<<"  kishhhh!!"<<endl;
                    }
                    else if(h==0)
                   {
                        *pn==1 ? *pn=2 : *pn=1;
                   }
        }



    else if(y<0)
     {
         y=y+1;
         for(i=y;i<0;i++)
         {
             //check az akhar be aval
             if (w[r1+i][c1]!=32)
             {
                 cout<<"error"<<"mohre in the way "<<endl;
                return;
             }
         }

               j=w[r1][c1];
           t=w[r2][c2];

         w[r2][c2]=w[r1][c1];

                    w[r1][c1]=' ';


      //
    for(r=0;r<8;r++)
  {
    for(c=0;c<8;c++)
    {
        if (w[r][c]=='k')
          h=kishtestbala(r,c,w);
    }
}//
                    if (h==1)
                    {
                        w[r1][c1]=j;
                        w[r2][c2]=t;
                         cout<<"error"<<"  kishhhh!!"<<endl;
                    }
                    else if(h==0)
                   {
                        *pn==1 ? *pn=2 : *pn=1;
                   }
     }



      else if(y>0)
    {


        for(i=1;i<y;i++)
        {
            //chek aval be akhar
            if (w[r1+i][c1]!=32)
            {
                cout<<"error"<<"mohre in the way "<<endl;
                return;
            }
        }
               j=w[r1][c1];
           t=w[r2][c2];

         w[r2][c2]=w[r1][c1];

                    w[r1][c1]=' ';

      //
    for(r=0;r<8;r++)
  {
    for(c=0;c<8;c++)
    {
        if (w[r][c]=='k')
          h=kishtestbala(r,c,w);
    }
}//
                    if (h==1)
                    {
                        w[r1][c1]=j;
                        w[r2][c2]=t;
                         cout<<"error"<<"  kishhhh!!"<<endl;
                    }
                    else if(h==0)
                   {
                        *pn==1 ? *pn=2 : *pn=1;
                   }
        }


}

