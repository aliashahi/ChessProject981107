void queenbala(int *pn,int r1,int c1,int r2,int c2,char w[8][8])
{
int y,x;
     x=c2-c1;
    y=r2-r1;
    if ((x==0)||(y==0))
    {
       rockbala(r1,c1,r2,c2,w);
    }
    else bishap(pn,r1,c1,r2,c2,w);
}

