#include <Blynk.h>


#include <BlynkSimpleStream.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).

#define BLYNK_TEMPLATE_ID "TMPL2MolblP39"
#define BLYNK_TEMPLATE_NAME "Project1"
#define BLYNK_AUTH_TOKEN "LA1ff03XJbkyMGxTiM-CBHE_XvJk8HF6"
char auth[] = "LA1ff03XJbkyMGxTiM-CBHE_XvJk8HF6";


void setup()
{
 
  // Blynk will work through Serial
  // Do not read or write this serial manually in your sketch
  Serial.begin(9600);
  Blynk.begin(Serial, auth);
}

void loop()
{
  Blynk.run();
}
//designed by Mahmoud Kordy
//kordymahmoud00@gmail.com
