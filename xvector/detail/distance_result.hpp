#pragma once

#ifdef XVEC_MU_SUPPORT
#include "mu/mu_distance_result.hpp"    // IWYU pragma: export
#else                                   // MU_SUPPORT
#include "cpu/cpu_distance_result.hpp"  // IWYU pragma: export
#endif
