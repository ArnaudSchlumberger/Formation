/*
 * Objectif: Mesurer la distance jusqu'à un obstacle
 *           Envoyer une impulsion de 10µs sur le pin echo
 *           Puis recevoir l'impulsion sur trig
 *           Mesurer le temps d'aller retour
 *           Puis convertir ce temps en distance
 *           
 * Fonction: pinMode, digitalWrite, delayMicroseconds, pulseIn
 * 
 * Bonus:    Trouver un moyen de fiabiliser la mesure
 */

#include "ultrason.h"

Ultrason us(2,3);
 
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(us.distance());
  
}
