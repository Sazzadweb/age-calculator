#include<stdio.h>
int main()
{



int d1,m1,y1,d2,y2,m2,r1,r2,r3;

printf("=====================================================================\n");
printf("                                Age Calculator                       \n");
printf("=====================================================================\n");

printf("Enter Your Birthday Date: ");
scanf("%d",&d1);
printf("Enter Your Birtday Month: ");
scanf("%d",&m1);
printf("Enter Your Birtday Year: ");
scanf("%d",&y1);


printf("Enter Current Date: ");
scanf("%d",&d2);
printf("Enter Current Month: "); 
scanf("%d",&m2);
printf("Enter Current Year: "); 

scanf("%d",&y2);


if((d1 > 31 || d1<1) || (d2 > 31 || d2<1) || (m1<1 || m1>12) || (m2<1 || m2>12) || (y1<0 && y2<0))

{
    printf("Your Data Something Wrong! Try Again");

}

else
{
 
 r3=y2-y1;
if (d2>=d1)
{
    r1=d2-d1;
}
else{
    m2=m2-1;
    d2=d2+30;
    r1=d2-d1; 
}


if (m2>=m1)
{
    r2=m2-m1;
}
else{
    r3=r3-1;
    m2=m2+12;

    r2=m2-m1; 
  
}

}
 printf("Hey you are %d day %d month %d years old",r1,r2,r3); 


    
    return 0;
}