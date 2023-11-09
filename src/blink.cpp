#include "blink.hpp"

namespace TilosiaBlink {

void blink(DigitalOut* led, Kernel::Clock::duration_u32 sleepy_timer) {
  while (true) {
    *led = !*led;
    ThisThread::sleep_for(sleepy_timer);
  }
}

} // namespace TilosiaBlink
