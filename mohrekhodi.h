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
        else if(workboard==' ')return 3;
        else return 1;
    }
    else if(pn==2)//capital
    {
        if(workboard=='s')return 2;
        else if(workboard=='r')return 2;
        else if(workboard=='n')return 2;
        else if(workboard=='b')return 2;
        else if(workboard=='q')return 2;
        else if(workboard=='k')return 2;
        else if(workboard==' ')return 3;
        else return 1;
    }
    else return 3;
}
