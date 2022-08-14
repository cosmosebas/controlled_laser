#include <AccelStepper.h>
 
//AccelStepper stepper(1, 9, 8);//(define el tipo de control del motor,pin de paso,pin direccion)
AccelStepper stepper(1, 7, 6);
 
int pos = 180;
 
void setup()
{
  stepper.setMaxSpeed(800); //velocidad maxima permitida 800
  stepper.setAcceleration(500);// relacion entre aceleracion/desaceleracion 500
  //stepper2.setMaxSpeed(800); //velocidad maxima permitida 800
  //stepper2.setAcceleration(500);// relacion entre aceleracion/desaceleracion 500
}
  
 
void loop()
{
  
  stepper.moveTo(pos);//establece la posicion de destino
    //stepper2.moveTo(pos);//establece la posicion de destino
  stepper.run();
  //stepper2.run();
}
