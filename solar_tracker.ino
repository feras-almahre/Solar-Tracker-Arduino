// Include the servo motor library
#include <Servo.h>

// Define the LDR sensor pins
#define LDR1 A0
#define LDR2 A1

// Define the error value (you can change it as needed)
#define error 10

// Starting position of the servo motor
int Spoint = 90;

// Create an object for the servo motor
Servo servo;

void setup()
{
    // Attach the servo motor to PWM pin 11
    servo.attach(11);

    // Set the starting position of the servo
    servo.write(Spoint);

    delay(1000);
}

void loop()
{
    // Read the LDR sensor values
    int ldr1 = analogRead(LDR1);
    int ldr2 = analogRead(LDR2);

    // Calculate the difference between the values
    int value1 = abs(ldr1 - ldr2);
    int value2 = abs(ldr2 - ldr1);

    // Check if the difference is within the error threshold
    if ((value1 <= error) || (value2 <= error))
    {
        // Do nothing if both values are nearly equal
    }
    else
    {
        if (ldr1 > ldr2)
        {
            Spoint = --Spoint;
        }

        if (ldr1 < ldr2)
        {
            Spoint = ++Spoint;
        }
    }

    // Write the new position to the servo motor
    servo.write(Spoint);

    delay(80);
}