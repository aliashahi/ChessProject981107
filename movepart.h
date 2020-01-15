
void movepart(string command1,string command2,char workboard[8][8])
{
    int rowloc1,rowloc2,colloc1,colloc2;
    //مشخص کردن طول عرض اولیه و ثانویه وارد شده توسط کاربر
    if(command1[0]=='a')rowloc1=0;
    else if(command1[0]=='b')rowloc1=1;
    else if(command1[0]=='c')rowloc1=2;
    else if(command1[0]=='d')rowloc1=3;
    else if(command1[0]=='e')rowloc1=4;
    else if(command1[0]=='f')rowloc1=5;
    else if(command1[0]=='g')rowloc1=6;
    else if(command1[0]=='h')rowloc1=7;
    else cout<<"\nerror in column of second location\n";
    if(1<= (int) command1[1]<=8)colloc1=command1[1];
    else cout<<"\nerror in row of first location\n";
    if(command2[0]=='a')rowloc2=0;
    else if(command2[0]=='b')rowloc2=1;
    else if(command2[0]=='c')rowloc2=2;
    else if(command2[0]=='d')rowloc2=3;
    else if(command2[0]=='e')rowloc2=4;
    else if(command2[0]=='f')rowloc2=5;
    else if(command2[0]=='g')rowloc2=6;
    else if(command2[0]=='h')rowloc2=7;
    else cout<<"\nerror in column of second location\n";
    if(1<=(int) command2[1]<=8)colloc2=command2[1];
    else cout<<"\nerror in row of second location\n";
    //تشخیص نوع مهره 
    //if(workboard[rowloc1][colloc1]=='S')sarbaz(rowloc1,colloc1,rowloc2,colloc2,workboard);

}