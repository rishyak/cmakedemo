#include <mbed.h>

#include "blink.hpp"

int main() {
  DigitalOut led(LED1);
  TilosiaBlink::blink(&led, 500ms);
}
