#ifndef _MDFN_MEMORY_H
#define _MDFN_MEMORY_H

// These functions can be used from driver code or from internal Mednafen code.
//

#include <stdint.h>

static inline void MDFN_FastU32MemsetM8(uint32_t *array, uint32_t value_32, unsigned int u32len)
{
   uint32_t *ai;
   for(ai = array; ai < array + u32len; ai += 2)
   {
      ai[0] = value_32;
      ai[1] = value_32;
   }
}

#endif
