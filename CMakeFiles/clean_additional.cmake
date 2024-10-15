# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\appLectron_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appLectron_autogen.dir\\ParseCache.txt"
  "CMakeFiles\\comLib_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\comLib_autogen.dir\\ParseCache.txt"
  "CMakeFiles\\systemInfoLib_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\systemInfoLib_autogen.dir\\ParseCache.txt"
  "appLectron_autogen"
  "comLib_autogen"
  "systemInfoLib_autogen"
  )
endif()
