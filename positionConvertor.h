void positionCon(string location,int loc[2])
{
    int row=-1,col=-1;
    //converting char to int
    int x=atoi(&location[1]);
    //مشخص کردن طول عرض اولیه و ثانویه وارد شده توسط کاربر
    if(location[0]=='a')col=0;
    else if(location[0]=='b')col=1;
    else if(location[0]=='c')col=2;
    else if(location[0]=='d')col=3;
    else if(location[0]=='e')col=4;
    else if(location[0]=='f')col=5;
    else if(location[0]=='g')col=6;
    else if(location[0]=='h')col=7;
    else cout<<"\nERROR in column of location\n";
    if(1<= x <=8)row=8-x;
    else cout<<"\nERROR in row of first location\n";
    loc[0]=row;
    loc[1]=col;
}
