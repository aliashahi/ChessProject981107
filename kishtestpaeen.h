int kishtestpaeen(int r,int c, char w[8][8])
{

    int i,rock=0,rock1=0,rock2=0,rock3=0,rock4=0,knight=0,k1=0,k2=0,k3=0,k4=0,k5=0,k6=0,k7=0,k8=0,bishap=0,b1=0,b2=0,b3=0,b4=0,sarbaz=0,s1=0,s2=0,queen=0,q[8]={0},king=0;
//rock test

//1
for(i=(1);i<(8-c);i++)
{
    if((w[r][c+i]!='r')&&(w[r][c+i]!=' '))
    {
        rock1=0;
        break;
    }
    if (w[r][c+i]=='r')
    {
        rock1=1;
    break;
}
}

//2

for(i=1;i<(c+1);i++)
{
    if((w[r][c-i]!='r')&&(w[r][c-i]!=' '))
    {
        rock2=0;
        break;
    }
    if (w[r][c-i]=='r')
    {
        rock2=1;
    break;
}
}

//3

   for(i=1;i<(8-r);i++)
{
    if((w[r+i][c]!='r')&&(w[r+i][c]!=' '))
    {
        rock3=0;
        break;
    }
     if (w[r+i][c]=='r')
    {
        rock3=1;
    break;
}
}
//4
for(i=1;i<(r+1);i++)
{
    if((w[r-i][c]!='r')&&(w[r-i][c]!=' '))
    {
        rock4=0;
        break;
    }
     if (w[r-i][c]=='r')
    {
        rock4=1;
    break;
}
}

if ((rock1||rock2||rock3||rock4)==1)
{
    rock=1;
}

//knight

//1
if (w[r+1][c+2]=='n'){
        if((c+2)<8)
    k1=1;}
//2
if (w[r+1][c-2]=='n'){
    if((c-2)>(-1))
    k2=1;}
//3
if (w[r-1][c+2]=='n'){
      if((c+2)<8)
    k3=1;}
//4
if (w[r-1][c-2]=='n'){
    if((c-2)>(-1))
    k4=1;}
//5
if (w[r+2][c+1]=='n'){
     if((c+1)<8)
    k5=1;}
//6
if (w[r+2][c-1]=='n'){
     if((c-1)>(-1))
    k6=1;}
//7
if (w[r-2][c+1]=='n'){
     if((c+1)<8)
    k7=1;}
//8
if (w[r-2][c-1]=='n'){
    if((c-1)>(-1))
    k8=1;}

if((k1||k2||k3||k4||k5||k6||k7||k8)==1)
    {
        knight=1;
    }
//bishap
//1
    for(i=1;i<8;i++)
{
    if((c+i)<(8)){
    if((w[r-i][c+i]!='b')&&(w[r-i][c+i]!=' '))
    {
        b1=0;
        break;
    }
    if (w[r-i][c+i]=='b')
    {
        b1=1;
    break;
}
}}

//2

    for(i=1;i<8;i++)
{
    if((c-i)>(-1)){
    if((w[r+i][c-i]!='b')&&(w[r+i][c-i]!=' '))
    {
        b2=0;
        break;
    }
    if (w[r+i][c-i]=='b')
    {
        b2=1;
    break;
}
}}

//3


  for(i=1;i<8;i++)
{
    if((c-i)>(-1)){
    if((w[r-i][c-i]!='b')&&(w[r-i][c-i]!=' '))
    {
        b3=0;
        break;
    }
    if (w[r-i][c-i]=='b')
    {
        b3=1;
    break;
}
}}

//4
  for(i=1;i<8;i++)
{
    if((c+i)<(8)){
    if((w[r+i][c+i]!='b')&&(w[r+i][c+i]!=' '))
    {
        b4=0;
        break;
    }
    if (w[r+i][c+i]=='b')
    {
        b4=1;
    break;
}
}}

if((b1||b2||b3||b4)==1)
bishap=1;

//queen

//1
for(i=(1);i<(8-c);i++)
{
    if((w[r][c+i]!='q')&&(w[r][c+i]!=' '))
    {
        q[0]=0;
        break;
    }
    if (w[r][c+i]=='q')
    {
       q[0]=1;
    break;
}
}
//2
for(i=1;i<(c+1);i++)
{
    if((w[r][c-i]!='q')&&(w[r][c-i]!=' '))
    {
        q[1]=0;
        break;
    }
    if (w[r][c-i]=='q')
    {
        q[1]=1;
    break;
}
}

//3
for(i=1;i<(8-r);i++)
{
    if((w[r+i][c]!='q')&&(w[r+i][c]!=' '))
    {
        q[2]=0;
        break;
    }
     if (w[r+i][c]=='q')
    {
        q[2]=1;
    break;
}
}

//4
for(i=1;i<(r+1);i++)
{
    if((w[r-i][c]!='q')&&(w[r-i][c]!=' '))
    {
        q[3]=0;
        break;
    }
     if (w[r-i][c]=='q')
    {
        q[3]=1;
    break;
}
}

//5
    for(i=1;i<8;i++)
{
    if((w[r-i][c+i]!='q')&&(w[r-i][c+i]!=' '))
    {
        q[4]=0;
        break;
    }
    if (w[r-i][c+i]=='q')
    {
         if((c+i)<(8))
        q[4]=1;
    break;
}
}


//6
    for(i=1;i<8;i++)
{
    if((w[r+i][c-i]!='q')&&(w[r+i][c-i]!=' '))
    {
        q[5]=0;
        break;
    }
    if (w[r+i][c-i]=='q')
    {
        if((c-i)>(-1))
        q[5]=1;
    break;
}
}


//7

 for(i=1;i<8;i++)
{
    if((w[r-i][c-i]!='q')&&(w[r-i][c-i]!=' '))
    {
        q[6]=0;
        break;
    }
    if (w[r-i][c-i]=='q')
    {
        if((c-i)>(-1))
        q[6]=1;
    break;
}
}

//8
  for(i=1;i<8;i++)
{
    if((w[r+i][c+i]!='q')&&(w[r+i][c+i]!=' '))
    {
        q[7]=0;
        break;
    }
    if (w[r+i][c+i]=='q')
    {
         if((c+i)<(8))
        q[7]=1;
    break;
}
}
if((q[0]||q[1]||q[2]||q[3]||q[4]||q[5]||q[6]||q[7])==1)
queen=1;

//sarbas
//1
if(w[r-1][c-1]=='s'){
   if((c-1)>(-1)){
s1=1;}}
if(w[r-1][c+1]=='s'){
    if((c+1)<(8))
s2=1;}

if((s1||s2)==1)
sarbaz=1;



//king


if((w[r-1][c-1]=='k')||(w[r-1][c]=='k')||(w[r-1][c+1]=='k')||(w[r][c+1]=='k')||(w[r+1][c+1]=='k')||(w[r+1][c]=='k')||(w[r+1][c-1]=='k')||(w[r][c-1]=='k'))
{
    if((c-1)>(-1))
    {
       if((c+1)<(8))
    king=1;
}
}











    if((knight||rock||sarbaz||queen||bishap||king)==1)
    {

        return 1;

        }
    else return 0;
//





}








