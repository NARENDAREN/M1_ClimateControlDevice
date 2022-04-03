// Header section 

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include "ccdf.h"



// main function

int
main ()
{
// Declare Variables
  int m;  
  float  f,c;
  int sen_y, sen_x;
    
  switch (test_run (mode))
  {
      case 1:
//mode
      Office (m);
//motion Sensor Entry
      label:
        Sensor1 (sen_y);
        scanf ("%d", &sen_y);
        Sensor2 (sen_x);
        scanf ("%d", &sen_x);
        membersin (sen_y);
        membersout (sen_x);
  
        turn_on_membersin(sen_y,sen_x);
        printf("\n");
        turn_off_membersout(sen_x,sen_y);
        printf("\n");
    if(sen_x==0)
    {
       printf("NO one are Detected inside the Office\n");
       printf("Device is Turned off\n");
       goto label;
    }

//Temperature
    temp (c);
    scanf (" %f", &c);
  
    con (f,c);

//Analyzing Temperature m1
    record_temp_m1(c);
        
      break;
      
      case 2:
      Bed_room (m);
      
//motion Sensor Entry
      label2:
        Sensor1 (sen_y);
        scanf ("%d", &sen_y);
        Sensor2 (sen_x);
        scanf ("%d", &sen_x);
        membersin (sen_y);
        membersout (sen_x);
  
        turn_on_membersin(sen_y,sen_x);
        printf("\n");
        turn_off_membersout(sen_x,sen_y);
        printf("\n");
    if(sen_x==0)
    {
       printf("NO one are Detected inside the Room\n");
       printf("Device is Turned off\n");
       goto label2;
    }

//Temperature
    temp (c);
    scanf (" %f", &c);
  
    con (f,c);

//Analyzing Temperature m2
      record_temp_m2(c);
      break;
      
      case 3:
      Kitchen (m);
      
//motion Sensor Entry
      label3:
        Sensor1 (sen_y);
        scanf ("%d", &sen_y);
        Sensor2 (sen_x);
        scanf ("%d", &sen_x);
        membersin (sen_y);
        membersout (sen_x);
  
        turn_on_membersin(sen_y,sen_x);
        printf("\n");
        turn_off_membersout(sen_x,sen_y);
        printf("\n");
    if(sen_x==0)
    {
       printf("NO one are Detected inside the Office\n");
       printf("Device is Turned off\n");
       goto label3;
    }

//Temperature
    temp (c);
    scanf (" %f", &c);
  
    con (f,c);

//Analyzing Temperature m3
    record_temp_m3(c);
        
      break;
      
      
      case 4:
      Hall_area (m);
            
//motion Sensor Entry
      label4:
        Sensor1 (sen_y);
        scanf ("%d", &sen_y);
        Sensor2 (sen_x);
        scanf ("%d", &sen_x);
        membersin (sen_y);
        membersout (sen_x);
  
        turn_on_membersin(sen_y,sen_x);
        printf("\n");
        turn_off_membersout(sen_x,sen_y);
        printf("\n");
    if(sen_x==0)
    {
       printf("NO one are Detected inside the Office\n");
       printf("Device is Turned off\n");
       goto label4;
    }

//Temperature
    temp (c);
    scanf (" %f", &c);
  
    con (f,c);

//Analyzing Temperature m4
    record_temp_m4(c);
      
      
      
      
      
 //Analyzing Temperature
 
    record_temp_m4(c); 
      
    break;
    
    default:
      printf ("INVALID SELECTION OF MODE PLEASE TRY AGAIN");

  }

   return 0;

} 






