#include <stdio.h>
int main(void) {
  struct student
  {
 int roll_no;
 char name[30];
  };
  struct subject
  {
  int Pic;
  int Mech;
  int Physics;
  int Maths;
  int EVS;
  float attendance;
  float Pic_attendance;
  float Mech_attendance;
  float Physics_attendance;
  float Maths_attendance;
  float EVS_attendance;

  };
  struct student s[30];
  {
  int i,j,n;
  printf("Enter number of students: ");
  scanf("%d",&n);

      struct subject b[20];
     {
      int Pic,Mech,Physics,Maths,EVS;
      for(i=0;i<n;i++)
    {
      printf("\nEnter name: ");
      scanf("%s",s[i].name);

      printf("\nEnter roll number: ");
      scanf("%d",&s[i].roll_no);

      printf("\nEnter the no. of lectures of PIC attended by the student out of 5: ");
      scanf("%d",&b[i].Pic);

      printf("\nEnter the no. of lectures of Mechanics attended by the student out of 5: ");
      scanf("%d",&b[i].Mech);

      printf("\nEnter the no. of lectures of Physics attended by the student out of 5: ");
      scanf("%d",&b[i].Physics);

      printf("\nEnter the no. of lectures of Maths attended by the student out of 5: ");
      scanf("%d",&b[i].Maths);

      printf("\nEnter the no. of lectures of EVS attended by the student out of 5: ");
      scanf("%d",&b[i].EVS);
    }

      for(i=0;i<n;i++)
    {
      b[i].attendance=(float)((b[i].Maths+b[i].Pic+b[i].Mech+b[i].Physics+b[i].EVS)*100)/25;
      printf("\n Attendance is %f percent",b[i].attendance);

    if(b[i].attendance>=75)
    {
      printf("\n Attendance of roll no. %d : Congrats",s[i].roll_no);

    }
    else
    {
      printf("\n Attendance of roll no. %d : defaulter",s[i].roll_no);
    }
    }
    for(i=0;i<n;i++)
    {
        b[i].Pic_attendance=(float)(b[i].Pic)*100/5;
        b[i].Mech_attendance=(float)(b[i].Mech)*100/5;
        b[i].Physics_attendance=(float)(b[i].Physics)*100/5;
        b[i].Maths_attendance=(float)(b[i].Maths)*100/5;
        b[i].EVS_attendance=(float)(b[i].EVS)*100/5;

     if(b[i].Pic_attendance>=75)
    {
      printf("\n\n Attendance of roll no. %d in PIC : Congrats",s[i].roll_no);
    }
    else
    {
      printf("\n\n Attendance of roll no. %d in PIC : defaulter",s[i].roll_no);
    }
    if(b[i].Mech_attendance>=75)
    {
      printf("\n Attendance of roll no. %d in Mechanics : Congrats",s[i].roll_no);
    }
    else
    {
      printf("\n Attendance of roll no. %d in Mechanics : defaulter",s[i].roll_no);
    }
    if(b[i].Physics_attendance>=75)
    {
      printf("\n Attendance of roll no. %d in Physics : Congrats",s[i].roll_no);
    }
    else
    {
      printf("\n Attendance of roll no. %d in Physics : defaulter",s[i].roll_no);
    }
    if(b[i].Maths_attendance>=75)
    {
      printf("\n Attendance of roll no. %d in Maths : Congrats",s[i].roll_no);
    }
    else
    {
      printf("\n Attendance of roll no. %d in Maths : defaulter",s[i].roll_no);
    }
    if(b[i].EVS_attendance>=75)
    {
      printf("\n Attendance of roll no. %d in EVS : Congrats\n",s[i].roll_no);
    }
    else
    {
      printf("\n Attendance of roll no. %d in EVS : defaulter\n",s[i].roll_no);
    }

    }
    printf("\n          DEFAULTER LIST           \n");
    printf("Roll No.\t\tName of the student\n");

    for(i=0;i<n;i++)
    {
        if(b[i].attendance<=75)
        {
            printf("%d\t\t\t\t%s\n",s[i].roll_no,s[i].name);
        }
    }



}
    }

     }
