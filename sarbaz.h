void sarbaz(int *pn,int r1,int c1,int r2,int c2,char w[8][8])
{
    int x,y,a=0;
   // while(z=1)
     //   {
if (r1==6) a=-1;
    x=c2-c1;
    y=r2-r1;
    if (((y!=-1)&&(y!=-1+a))||(x>1))
        {
        cout<<"\nERROR\n";
        return;
        }
    else if((x==0)&&((int)w[r2][c2]!=32))
            {
                cout<<"\nERROR\n";
                return;
            }

             else if((x!=0)&&((int)w[r2][c2]==32))
            {
                cout<<"\nERROR\n";
                return;
            }

    else if(((x==-1)||(x==1))&&(((int)w[r2][c2]!=32)||((int)w[r2][c2]!=83)||((int)w[r2][c2]!=82)||(int)(w[r2][c2]!=78)||((int)w[r2][c2]!=66)||((int)w[r2][c2]!=75)||(int)(w[r2][c2]!=81)))
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
