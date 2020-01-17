void nightpaeen(int r1,int c1,int r2,int c2,char w[8][8])
{
 int y,x;
     x=c2-c1;
    y=r2-r1;
      if (x<0) x=-x;
      if (y<0) y=-y;
       if ((y>2)||(x>2)||(y<1)||(x<1)||((x+y)!=3))
      {
          cout<<"error"<<"cant move like this "<<endl;
                return;
      }

        else if (((int)w[r2][c2]==83)||((int)w[r2][c2]==82)||(int)(w[r2][c2]==78)||((int)w[r2][c2]==66)||((int)w[r2][c2]==75)||(int)(w[r2][c2]==81))
      {
         cout<<"error"<<"mohre khodi"<<endl;
                return;
      }
     else
     {
         w[r2][c2]=w[r1][c1];
                    w[r1][c1]=' ';
     }
}

