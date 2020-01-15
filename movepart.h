
void movepart(string location1,string location2,char workboard[8][8])
{
    int rowloc1=-1,rowloc2=-1,colloc1=-1,colloc2=-1;
    //مشخص کردن طول عرض اولیه و ثانویه وارد شده توسط کاربر
    if(location1[0]=='a')colloc1=0;
    else if(location1[0]=='b')colloc1=1;
    else if(location1[0]=='c')colloc1=2;
    else if(location1[0]=='d')colloc1=3;
    else if(location1[0]=='e')colloc1=4;
    else if(location1[0]=='f')colloc1=5;
    else if(location1[0]=='g')colloc1=6;
    else if(location1[0]=='h')colloc1=7;
    else cout<<"\nerror in column of first location\n";
    if(1<= (int)location1[1]<=8)rowloc1=location1[1];
    else cout<<"\nerror in row of first location\n";
    if(location2[0]=='a')colloc2=0;
    else if(location2[0]=='b')colloc2=1;
    else if(location2[0]=='c')colloc2=2;
    else if(location2[0]=='d')colloc2=3;
    else if(location2[0]=='e')colloc2=4;
    else if(location2[0]=='f')colloc2=5;
    else if(location2[0]=='g')colloc2=6;
    else if(location2[0]=='h')colloc2=7;
    else cout<<"\nerror in column of second location\n";
    if(1<=(int) location2[1]<=8)colloc2=location2[1];
    else cout<<"\nerror in row of second location\n";
    //تشخیص نوع مهره
    //if(workboard[rowloc1][colloc1]=='S')sarbaz(rowloc1,colloc1,rowloc2,colloc2,workboard);

}
