void nightpaeen(int *pn,int r1,int c1,int r2,int c2,char w[8][8])
{
    int r,c,h;
    char t,j;
 int y,x;
     x=c2-c1;
    y=r2-r1;
      if (x<0) x=-x;
      if (y<0) y=-y;
       if ((y>2)||(x>2)||(y<1)||(x<1)||((x+y)!=3))
      {
         cout<<"\n\aERROR,can't move like this\n";
                return;
      }

        else if (((int)w[r2][c2]==83)||((int)w[r2][c2]==82)||(int)(w[r2][c2]==78)||((int)w[r2][c2]==66)||((int)w[r2][c2]==75)||(int)(w[r2][c2]==81))
      {
         cout<<"\n\aERROR,It's your own piece\n";
                return;
      }
     else
     {




         j=w[r1][c1];
           t=w[r2][c2];

         w[r2][c2]=w[r1][c1];

                    w[r1][c1]=' ';

      //
    for(r=0;r<8;r++)
  {
    for(c=0;c<8;c++)
    {
        if (w[r][c]=='K')
          h=kishtestpaeen(r,c,w);
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


