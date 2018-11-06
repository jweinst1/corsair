## Core CMake ##

add_subdirectory(utils)
add_subdirectory(types)

add_dependencies(coretypes coreutils)

# Corsair Static Library #
add_library(CorsairStat STATIC
     $<TARGET_OBJECTS:coreutils>
)

# Corsair Shared Library #
add_library(CorsairShared SHARED
     $<TARGET_OBJECTS:coreutils>
)