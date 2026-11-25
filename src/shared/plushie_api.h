#pragma once

#ifdef PLUSHIE_STATIC_BUILD
#    define PLUSHIE_API
#elif defined(PLUSHIE_OS_WINDOWS)
#    define PLUSHIE_API __declspec(dllexport)
#else
#    define PLUSHIE_API __attribute__((visibility("default")))
#endif
 