#include "lib/armv7m/crt0.h"
#include "lib/armv7m/exception_table.h"

void v7m_reset_handler() {
  armv7m::crt0_init();
  while (1);
}


/*
 * Catch unexpected exceptions in a loop.
 */
#define TRAP(name) \
  void v7m_ ## name ## _handler() { \
    while (1); \
  }

TRAP(nmi)
TRAP(hard_fault)
TRAP(mem_manage_fault)
TRAP(bus_fault)
TRAP(usage_fault)
TRAP(sv_call)
TRAP(debug_monitor)
TRAP(pend_sv)
TRAP(sys_tick)
