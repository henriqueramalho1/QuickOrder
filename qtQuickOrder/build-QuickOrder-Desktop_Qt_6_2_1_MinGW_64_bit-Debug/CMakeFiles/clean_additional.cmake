# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QuickOrder_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QuickOrder_autogen.dir\\ParseCache.txt"
  "QuickOrder_autogen"
  )
endif()
