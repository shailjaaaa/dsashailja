#include<stdio.h>
int main()
{
     int i,j;
     int x=3,y=5;
     int sum=0;
     float per=0.00;
     printf("Enter number of students:%d",x);
     printf("\n");
     
     int stu[x];
     int sub[y];
     for(i=0;i<x;i++)
     {
          sum=0;
          per=0.00;
          printf("Enter roll number:");
          scanf("%d",&stu[i]);
     
     for(j=0;j<y;j++)
     {
          printf("Enter marks of subject of %d:",j);
          scanf("%d",&sub[j]);
          sum+=sub[j];
     }
     
     printf("Total marks:%d\n",sum);
     per=sum/5;
     printf("Percentage:%f\n",per);

     if(80<per && per<100)
     {
          printf("Grade A\n");
     }
     else if(60<per && per<80)
     {
          printf("Grade B\n");
     }
     else if(40<per && per<60)
     {
          printf("Grade C\n");
     }
     else if(0<per && per<40)
     {
          printf("FAIL/n");
     }
     }
     return 0;
}