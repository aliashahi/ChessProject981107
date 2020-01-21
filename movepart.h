void movepart(int *pn/*pn stands for player's number*/,int rowloc1,int colloc1,int rowloc2,int colloc2,char workboard[8][8])
{

    if(*pn==1)
    {

    if(workboard[rowloc1][colloc1]=='b')bishap(pn,rowloc1,colloc1,rowloc2,colloc2,workboard);
    else if(workboard[rowloc1][colloc1]=='s')sarbazbala(pn,rowloc1,colloc1,rowloc2,colloc2,workboard);
    else if(workboard[rowloc1][colloc1]=='n')nightbala(pn,rowloc1,colloc1,rowloc2,colloc2,workboard);
    else if(workboard[rowloc1][colloc1]=='r')rockbala(pn,rowloc1,colloc1,rowloc2,colloc2,workboard);
    else if(workboard[rowloc1][colloc1]=='k')kingbala(pn,rowloc1,colloc1,rowloc2,colloc2,workboard);
    else if(workboard[rowloc1][colloc1]=='q')queenbala(pn,rowloc1,colloc1,rowloc2,colloc2,workboard);
    }
    else if(*pn==2)
    {
    if(workboard[rowloc1][colloc1]=='B')bishap(pn,rowloc1,colloc1,rowloc2,colloc2,workboard);
    else if(workboard[rowloc1][colloc1]=='S')sarbaz(pn,rowloc1,colloc1,rowloc2,colloc2,workboard);
    else if(workboard[rowloc1][colloc1]=='N')nightpaeen(pn,rowloc1,colloc1,rowloc2,colloc2,workboard);
    else if(workboard[rowloc1][colloc1]=='R')rockpaeen(pn,rowloc1,colloc1,rowloc2,colloc2,workboard);
    else if(workboard[rowloc1][colloc1]=='Q')queenpaeen(pn,rowloc1,colloc1,rowloc2,colloc2,workboard);
    else if(workboard[rowloc1][colloc1]=='K')kingpaeen(pn,rowloc1,colloc1,rowloc2,colloc2,workboard);
    }
}
