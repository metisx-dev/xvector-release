#pragma once

#ifdef XVEC_MU_SUPPORT
#include "mu/mu_index_array.hpp"    // IWYU pragma: export
#else                                // MU_SUPPORT
#include "cpu/cpu_index_array.hpp"  // IWYU pragma: export
#endif
