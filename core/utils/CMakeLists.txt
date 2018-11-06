## core utils cmake ##

#####################
# Definiton Options #
#####################

add_definitions()

add_library(coreutils OBJECT
     iotools.c
     fmtalloc.c
)

# add_subdirectory(tests)