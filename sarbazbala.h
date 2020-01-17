void sarbazbala(int *pn,int r1,int c1,int r2,int c2,char w[8][8])
{
    int x,y,z=0;
   // while(z=1)
     //   {

    x=c2-c1;
    y=r2-r1;
    if ((y=!-1)&&(x>1))
        {
        cout<<"eror";
        return;
        }
    else if((x==0)&&((int)w[r2][c2]!=32))
            {
                cout<<"error";
                return;
            }
    else if(((x==-1)||(x==1))&&(((int)w[r2][c2]!=32)||((int)w[r2][c2]!=115)||((int)w[r2][c2]!=114)||(int)(w[r2][c2]!=110)||((int)w[r2][c2]!=98)||((int)w[r2][c2]!=107)||(int)(w[r2][c2]!=113)))
                {
                    w[r2][c2]=w[r1][c1];
                    w[r1][c1]=' ';
                    *pn==1 ? *pn=2 : *pn=1;



                }
    else if((x==0)&&((int)w[r2][c2]==32))
                {
                    w[r2][c2]=w[r1][c1];
                    w[r1][c1]=' ';
                    *pn==1 ? *pn=2 : *pn=1;

                }

        //}
                  // z=0;
}
