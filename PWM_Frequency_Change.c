/*
NOTE: This code only works for PWM pins but not the timer pins
For Arduino DUE only 
*/




void sensor_Sen(int DutyCycle)
{
 int val = (DutyCycle*255)/100 ;
 analogWrite(6,val);
 PWMC_ConfigureClocks(38000 * PWM_MAX_DUTY_CYCLE , 0, VARIANT_MCK);
 delay(1);
}


void setup()  {
  pinMode(6, OUTPUT);
  sensor_Sen(9); //send the duty cycle as parameter 
}

void loop()  {

}
