#include <stdio.h>
#include <stdlib.h>
#include "employee.h"
#include <time.h>


int main()
{
   printf("Name\t:%s %s\n",alice.prename,alice.name);
   printf("Title\t:%s\n" , alice.title);
   printf("Position\t:%s\n", alice.position);
   printf("Age\t:%d\n", alice.age);
   printf("Salary\t:%.2lf\n", alice.salary);
   printf("Bonus\t:%.2lf\n",alice.bonus);
   printf("Section\t:%c\n", alice.section);
   printf("Team Size\t:%d\n\n", alice.team_size);

   printf("Name\t:%s %s\n",bob.prename,bob.name);
   printf("Title\t:%s\n" , bob.title);
   printf("Position\t:%s\n", bob.position);
   printf("Age\t:%d\n", bob.age);
   printf("Salary\t:%.2lf\n", bob.salary);
   printf("Bonus\t:%.2lf\n",bob.bonus);
   printf("Section\t:%c\n", bob.section);
   printf("Team Size\t:%d\n\n", bob.team_size);
   
   printf("Name\t:%s %s\n",eve.prename,eve.name);
   printf("Title\t:%s\n" , eve.title);
   printf("Position\t:%s\n", eve.position);
   printf("Age\t:%d\n", eve.age);
   printf("Salary\t:%.2lf\n", eve.salary);
   printf("Bonus\t:%.2lf\n",eve.bonus);
   printf("Section\t:%c\n", eve.section);
   printf("Team Size\t:%d\n\n", eve.team_size);
   
   printf("-----------After Randomizing-------------\n\n");

   srand(time(NULL));
 
   int i;

   for(i=0;alice.prename[i]!='\0';i++)
   {alice.prename[i]=(rand()%26+65);}
   for(i=0;alice.name[i]!='\0';i++)
   {alice.name[i]=(rand()%26+65);}
   for(i=0;alice.title[i]!='\0';i++)
   {alice.title[i]=(rand()%26+65);}
   for(i=0;alice.position[i]!='\0';i++)
   {alice.position[i]=(rand()%26+65);}
   alice.age=rand()%30+20;
   alice.salary=(((double)rand()/RAND_MAX)*10000+40000);
   alice.bonus=((rand()%(int)(BONUS_MAX-BONUS_MIN+1))+BONUS_MIN)+(double)rand()/RAND_MAX;
   alice.section=rand()%26+65;
   alice.team_size=rand()%(TEAM_SIZE_MAX-TEAM_SIZE_MIN+1)+TEAM_SIZE_MIN;
   printf("Name\t:%s %s\n",alice.prename,alice.name);
   printf("Title\t:%s\n" , alice.title);
   printf("Position\t:%s\n", alice.position);
   printf("Age\t:%d\n", alice.age);
   printf("Salary\t:%.2lf\n", alice.salary);
   printf("Bonus\t:%.2lf\n",alice.bonus);
   printf("Section\t:%c\n", alice.section);
   printf("Team Size\t:%d\n\n", alice.team_size);

   for(i=0;bob.prename[i]!='\0';i++)
   {bob.prename[i]=(rand()%26+65);}
   for(i=0;bob.name[i]!='\0';i++)
   {bob.name[i]=(rand()%26+65);}
   for(i=0;bob.title[i]!='\0';i++)
   {bob.title[i]=(rand()%26+65);}
   for(i=0;bob.position[i]!='\0';i++)
   {bob.position[i]=(rand()%26+65);}
   bob.age=rand()%30+20;
   bob.salary=(((double)rand()/RAND_MAX)*10000+40000);
   bob.bonus=((rand()%(int)(BONUS_MAX-BONUS_MIN+1))+BONUS_MIN)+(double)rand()/RAND_MAX;
   bob.section=rand()%26+65;
   bob.team_size=rand()%(TEAM_SIZE_MAX-TEAM_SIZE_MIN+1)+TEAM_SIZE_MIN;
   printf("Name\t:%s %s\n",bob.prename,bob.name);
   printf("Title\t:%s\n" , bob.title);
   printf("Position\t:%s\n", bob.position);
   printf("Age\t:%d\n", bob.age);
   printf("Salary\t:%.2lf\n", bob.salary);
   printf("Bonus\t:%.2lf\n",bob.bonus);
   printf("Section\t:%c\n", bob.section);
   printf("Team Size\t:%d\n\n", bob.team_size);

   for(i=0;eve.prename[i]!='\0';i++)
   {eve.prename[i]=(rand()%26+65);}
   for(i=0;eve.name[i]!='\0';i++)
   {eve.name[i]=(rand()%26+65);}
   for(i=0;eve.title[i]!='\0';i++)
   {eve.title[i]=(rand()%26+65);}
   for(i=0;eve.position[i]!='\0';i++)
   {eve.position[i]=(rand()%26+65);}
   eve.age=rand()%30+20;
   eve.salary=(((double)rand()/RAND_MAX)*10000+40000);
   eve.bonus=((rand()%(int)(BONUS_MAX-BONUS_MIN+1))+BONUS_MIN)+(double)rand()/RAND_MAX;
   eve.section=rand()%26+65;
   eve.team_size=rand()%(TEAM_SIZE_MAX-TEAM_SIZE_MIN+1)+TEAM_SIZE_MIN;
   printf("Name\t:%s %s\n",eve.prename,eve.name);
   printf("Title\t:%s\n" , eve.title);
   printf("Position\t:%s\n", eve.position);
   printf("Age\t:%d\n", eve.age);
   printf("Salary\t:%.2lf\n", eve.salary);
   printf("Bonus\t:%.2lf\n",eve.bonus);
   printf("Section\t:%c\n", eve.section);
   printf("Team Size\t:%d\n\n", eve.team_size);

    return 0;
}