#ifndef TC_BLINK_HPP
#define TC_BLINK_HPP

#include <mbed.h>
#include <rtos.h>

namespace TilosiaBlink {

void blink(DigitalOut* led, Kernel::Clock::duration_u32 rel_time);

} // namespace TilosiaBlink

#endif // TC_BLINK_HPP
