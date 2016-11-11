
/*
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * Kaushik Ray wrote this file.  As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return.   
 * ----------------------------------------------------------------------------
 */


/*
NOTE: This code only works for PWM pins but not the timer pins
For Arduino DUE only 
An Example code to change PWM frequency for Arduino DUE
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
