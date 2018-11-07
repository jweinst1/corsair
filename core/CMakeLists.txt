## Core CMake ##

add_subdirectory(utils)
add_subdirectory(types)


# Corsair Static Library #
add_library(CorsairStat STATIC
     $<TARGET_OBJECTS:coreutils>
     $<TARGET_OBJECTS:coretypes>
)

# Corsair Shared Library #
add_library(CorsairShared SHARED
     $<TARGET_OBJECTS:coreutils>
     $<TARGET_OBJECTS:coretypes>
)