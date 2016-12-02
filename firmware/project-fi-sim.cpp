#include "project-fi-sim.h"

#include "cellular_hal.h"
STARTUP(cellular_credentials_set("h2g2", "", "", NULL));

void setup() {
  Particle.keepAlive(240);
}
