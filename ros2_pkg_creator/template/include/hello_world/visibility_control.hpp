#ifndef HELLO_WORLD__VISIBILITY_CONTROL_HPP_
#define HELLO_WORLD__VISIBILITY_CONTROL_HPP_

////////////////////////////////////////////////////////////////////////////////
#if defined(__WIN32)
  #if defined(HELLO_WORLD_BUILDING_DLL) || defined(HELLO_WORLD_EXPORTS)
    #define HELLO_WORLD_PUBLIC __declspec(dllexport)
    #define HELLO_WORLD_LOCAL
  #else  // defined(HELLO_WORLD_BUILDING_DLL) || defined(HELLO_WORLD_EXPORTS)
    #define HELLO_WORLD_PUBLIC __declspec(dllimport)
    #define HELLO_WORLD_LOCAL
  #endif  // defined(HELLO_WORLD_BUILDING_DLL) || defined(HELLO_WORLD_EXPORTS)
#elif defined(__linux__)
  #define HELLO_WORLD_PUBLIC __attribute__((visibility("default")))
  #define HELLO_WORLD_LOCAL __attribute__((visibility("hidden")))
#elif defined(__APPLE__)
  #define HELLO_WORLD_PUBLIC __attribute__((visibility("default")))
  #define HELLO_WORLD_LOCAL __attribute__((visibility("hidden")))
#else
  #error "Unsupported Build Configuration"
#endif

#endif  // HELLO_WORLD__VISIBILITY_CONTROL_HPP_
