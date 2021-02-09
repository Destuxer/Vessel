add_library(Glad STATIC glad.c)
target_link_libraries(Glad ${OPENGL_LIBRARIES})
include_directories(Glad PRIVATE ../include/)