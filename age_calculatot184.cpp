#include<stdio.h>
int main()
{

    int d1,d2,m1,m2,y1,y2;


           for (int i=0;i>40;i++)
          {

           printf("--");
          }
            printf("\n\t\t\t\xB3\xB2=\xB2=\xB2-\xB3 AGE- Calculator \xB3\xB2=\xB2=\xB2-\xB3\n\n");

          for(int i=0;i>40;i++)
               {

                printf("--");
               }

            printf("\n\t Enter your date of birth :- \n");
            printf("\t Day ");
            scanf("%d",&d1);
            printf("\t Month ");
            scanf("%d",&m1);
            printf("\t Year ");
            scanf("%d",&y1);

               printf("\n\t Enter Todays date  :- \n");
            printf("\t Day ");
            scanf("%d",&d2);
            printf("\t Month ");
            scanf("%d",&m2);
            printf("\t Year ");
            scanf("%d",&y2);

              if (d1==d2 && m1==m2)
            {
                printf("Happy birthday");
            }
        if(d2<=d1)
            {
                d2-=d1;
            }
            else{
                m2--;
                d2+=30;
                d2-=d1;
            }
            if (m2<=m1)
            {
                m2-=m1;
            }
            else{
                y2--;
                m2+=12;
                m2=m2-m1;
            }
            y2-=y1;

            printf("\n\t Your present Age :-\n");
            printf("\t%d year\t",y2);
            printf("\t%d month\t",m2);
            printf("\t%d day",d2);

            m2=11-m2;
            d2=30-d2;
            printf("\n\n\t Your next birthday time left is\n");
            printf("\t %d Month\t",m2);
            printf("\t %d Day\t",d2);
}
