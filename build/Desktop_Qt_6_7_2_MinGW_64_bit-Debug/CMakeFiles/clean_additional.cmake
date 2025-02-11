# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Tableur_Chenil_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Tableur_Chenil_autogen.dir\\ParseCache.txt"
  "Tableur_Chenil_autogen"
  )
endif()
