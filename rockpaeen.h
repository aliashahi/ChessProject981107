void rockpaeen(int r1,int c1,int r2,int c2,char w[8][8])
{
    int y,x,i;
     x=c2-c1;
    y=r2-r1;
      if (((y!=0)&&(x!=0)))
      {
          cout<<"error";
                return;
      }
      else if (((int)w[r2][c2]==83)||((int)w[r2][c2]==82)||(int)(w[r2][c2]==78)||((int)w[r2][c2]==66)||((int)w[r2][c2]==75)||(int)(w[r2][c2]==81))
      {
         cout<<"error";
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
                 cout<<"error";
                return;
             }
         }

         w[r2][c2]=w[r1][c1];
                    w[r1][c1]=' ';
     }






    else if(x>0)
    {


        for(i=1;i<x;i++)
        {
            //chek aval be akhar
            if (w[r1][c1+i]!=32)
            {
                cout<<"error";
                return;
            }
        }
         w[r2][c2]=w[r1][c1];
                    w[r1][c1]=' ';
        }



    else if(y<0)
     {
         y=y+1;
         for(i=y;i<0;i++)
         {
             //check az akhar be aval
             if (w[r1+i][c1]!=32)
             {
                 cout<<"error";
                return;
             }
         }

         w[r2][c2]=w[r1][c1];
                    w[r1][c1]=' ';
     }



      else if(y>0)
    {


        for(i=1;i<y;i++)
        {
            //chek aval be akhar
            if (w[r1+i][c1]!=32)
            {
                cout<<"error";
                return;
            }
        }
         w[r2][c2]=w[r1][c1];
                    w[r1][c1]=' ';
        }


}
