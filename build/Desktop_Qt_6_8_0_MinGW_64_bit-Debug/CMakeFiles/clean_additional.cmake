# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "AeroGestor1_autogen"
  "CMakeFiles\\AeroGestor1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\AeroGestor1_autogen.dir\\ParseCache.txt"
  )
endif()
