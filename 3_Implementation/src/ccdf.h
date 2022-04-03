// fahrenheit
#define fah (c * 9/5)+32

// Motion sensor Y
#define sensorY (sen_y)

// Motion sensor X
#define sensorX (sen_x)

// mode selection option
#define mode (m)

// typedef for mode
typedef struct Machine
{
  char m1[10];
  char m2[10];
  char m3[10];
  char m4[10];
  int j;

} Machine;
int mod_select(m)
{
  if ((m != 0) && (m < 5))
    printf ("mode selected:%d\n", mode);
  else
    printf ("select correct option\n");
  //return mode;
}
// Mode Printing and Selection
int
test_run (int m)
{

  

  while((m<=0)||(m>=5)){

      Machine Machine;

      strcpy (Machine.m1, "Office");
      strcpy (Machine.m2, "Bed room");
      strcpy (Machine.m3, "Kitchen");
      strcpy (Machine.m4, "Hall area");

      printf ("Mode 1:%s\n", Machine.m1);
      printf ("Mode 2:%s\n", Machine.m2);
      printf ("Mode 3:%s\n", Machine.m3);
      printf ("Mode 4:%s\n", Machine.m4);
      printf ("select your option:\n", mode);


      scanf ("%d%*c", &m);
      mod_select(m);
  } 
  return mode;
}
// Checks m whether entered is Incorrect Option



// Read Motion Sensor Y
int Sensor1 (sen_y)
{
  printf ("Members detected in Sensor Y:");
}

//Read Motion Sensor X
int Sensor2 (sen_x)
{
  printf ("Members detected in Sensor x:");
}

// Members at Entrance
int membersin (sen_y)
{
  printf ("%d People are detected in sensor Y at Entrance\n", sen_y);
  return sen_y;
}

// Members inside Room
int membersout (sen_x)
{
  printf ("%d People are detected in sensor X inside the Room\n", sen_x);
  return sen_x;
}

// mode 1
void Office (m)
{
  Machine Machine;
  printf ("Mode :%s\n", Machine.m1);
}
// mode 2
void Bed_room (m)
{
  Machine Machine;
  printf ("Mode :%s\n", Machine.m2);
}
// mode 3
void Kitchen (m)
{
  Machine Machine;
  printf ("Mode 3:%s\n", Machine.m3);
}
// mode 4
void Hall_area (m)
{
  Machine Machine;
  printf ("Mode 4:%s\n", Machine.m4);
}



// Checking And Comparing X and Y to Turn ON Device
void turn_on_membersin (sen_y, sen_x)
{
  

  if ((sen_x != 0) || (sen_x > sen_y))
    printf ("Device Turned ON\n");
  else
    printf ("Device Turned OFF\n");
}

// Checking And Comparing X and Y to Turn OFF Device

void turn_off_membersout (sen_x, sen_y)
{
 
  if ((sen_x == 0) && (sen_y >= sen_x))
    printf ("Device Turned OFF\n");
  else
    printf ("Device turned ON\n");
}


// Temperature Sensor Celsius
float temp (float c)
{
  printf (" Temperature Sensor Measured in Celsius: ");
  return c;
}

// Temperature conversion Celsius to Fahrenheit
float con (float f,float c)
{
  
  printf ("Temperature Displayed In Fahrenheit: %.2f F\n",fah);
 
  return fah;
}

// Analyzing Temperature and action is taken
//@Office
float record_temp_m1(float c){
printf("%.2f is Current recoreded Office Temperature in Celsius\n",c);
if((c <=24)&&(c>=20)){
    printf("Temperature is Normal @ Workstation \n");
}
else if(c>24)
{
    printf("Temperature is Hot Pressure @ Office\n");
    printf("22 is set");
    sleep(10);
                        while(c!=23){
                        printf("\n\t%.2f",c);
                        
                        c--;
                        sleep(2);
                        system("clear");
                                    }
                        printf("Temperature is normalized Speed up ur Work\n");
    }
else if((c<20)&&(c>0))
{
    printf("Temperature is Cooling like Fridge that causes Dizzy\n");
    printf("22 is set\n");
    sleep(10);
                        while(c!=23){
                        printf("\n\t%.2f",c);
                        
                        c++;
                        sleep(2);
                        system("clear");
                                    }
                        printf(" And Room Temperature is normalized");
}
else if(c<0)
{
    printf("Temperature Sensor is Freezing inside Office may be a leave should be Granted\n");
    printf("22 is set\n");
    sleep(10);
                        while(c!=23){
                        printf("\n\t%.2f",c);
                        
                        c++;
                        sleep(2);
                        system("clear");
                                    }
                        printf(" And Room Temperature is normalized\n");
}
else
{
    printf("#Temperature#Sensor#");
}
return c;

}

//Analyzing Room Temperature
//@ Bed Room

float record_temp_m2(float c){
printf("%.2f is Current recoreded Room Temperature in Celsius\n",c);
if((c <=19.06)&&(c>=15.05)){
    printf("Your RoomTemperature Looks Good ; Have a Good Sleep \n");
}
else if(c>19.06)
{
    printf("Room Temperature is Sizzling\n");
    printf("18 is set\n");
    sleep(10);
                        while(c!=19){
                        printf("\n\t%.2f",c);
                        
                        c--;
                        sleep(2);
                        system("clear");
                                    }
                        printf("Temperature is Normalized\n");
    }
else if((c<15.05)&&(c>0))
{
    printf("Room Temperature is Low And Is Trouble For Elders, Childrens etc.,\n");
    printf("18 is set");
    sleep(10);
                        while(c!=20){
                        printf("\n\t%.2f",c);
                        
                        c++;
                        sleep(2);
                        system("clear");
                                    }
                        printf(" And Room Temperature is Normalized To a Better Temperature\n");
}
else if(c<0)
{
    printf(" Room Temperature  is Very Cold; Make Yourself Warm\n");
    printf("22 is set");
    sleep(10);
                        while(c!=20){
                        printf("\n\t%.2f",c);
                        
                        c++;
                        sleep(2);
                        system("clear");
                                    }
                        printf(" And Room Temperature is NormalizedTo a Better Temperature\n");
}
else
{
    printf("#Temperature#Sensor#");
}
return c;

}

//@ Kitchen
float record_temp_m3(float c){
printf("%.2f is Current recoreded Kitchen Temperature in Celsius\n",c);
if((c <=24)&&(c>=20)){
    printf("Kitchen is a Good Place with a Normal Temperature\n");
}
else if(c>24)
{
    printf("Kitchen is hot as a Vessel \n");
    printf("Exhaust is Turned ON");
    sleep(10);
                        while(c!=21){
                        printf("\n\t%.2f",c);
                        
                        c--;
                        sleep(2);
                        system("clear");
                                    }
                        printf("Temperature is Normalized and Tastes good like Food");
    }
else if((c<20)&&(c>0))
{
    printf("Temperature is low ");
    printf("18 is set");
    sleep(10);
                        while(c!=21){
                        printf("\n\t%.2f",c);
                        
                        c++;
                        sleep(2);
                        system("clear");
                                    }
                        printf(" And Kitchen Space is Normalized To a Better Temperature");
}
else
{
    printf("#Temperature#Sensor#");
}
return c;

}

//@ Hall_area
// Analyzing Temperature and action is taken
float record_temp_m4(float c){
printf("%.2f is Current recoreded Hall Area Temperature in Celsius\n",c);
if((c <=22)&&(c>=18)){
    printf("A good Area for being Together with a perfect Temperature\n");
}
else if(c>22)
{
    printf(" \n");
    printf(" Hot ");
    sleep(10);
                        while(c!=18){
                        printf("\n\t%.2f",c);
                        
                        c--;
                        sleep(2);
                        system("clear");
                                    }
                        printf("Temperature is Normalized and Breezy");
    }
else if((c<20)&&(c>0))
{
    printf("Temperature is low ");
    printf("18 is set");
    sleep(10);
                        while(c!=19){
                        printf("\n\t%.2f",c);
                        
                        c++;
                        sleep(2);
                        system("clear");
                                    }
                        printf(" And  the Hall Area is Normalized To a Better Temperature");
}
else if(c<0)
{
    printf(" Hall Area Temperature  is Very Cold; Make Yourself Warm\n");
    printf("22 is set");
    sleep(10);
                        while(c!=23){
                        printf("\n\t%.2f",c);
                        
                        c++;
                        sleep(2);
                        system("clear");
                                    }
                        printf(" And Hall Area Temperature is Normalized To a Better Temperature\n");
}
else 
{
    printf("#Temperature#Sensor#");
}
return c;

}
