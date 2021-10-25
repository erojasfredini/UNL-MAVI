cmake_minimum_required(VERSION 3.15.0)

# Librerias a linkear e includes
set(INCLUDES)
set(LIBRARIES)
set(LIBRARY_DIRS)

set(INCLUDES ${INCLUDES} .)
get_target_property(SFML_INCLUDE sfml-graphics INTERFACE_INCLUDE_DIRECTORIES)
set(INCLUDES ${INCLUDES} "${SFML_INCLUDE}")

set(LIBRARIES ${LIBRARIES} sfml-window sfml-system sfml-main sfml-graphics)
set(LIBRARIES ${LIBRARIES} Box2D)
set(LIBRARIES ${LIBRARIES} glu32)

include_directories(${INCLUDES})
link_directories(${LIBRARY_DIRS})

add_compile_definitions(SFML_STATIC)

# Proyecto de ejecutable a generar con codigos
file(GLOB_RECURSE SFMLHELLOWORLDAPP_SOURCES RELATIVE ${PROJECT_SOURCE_DIR}/Src/ *.cpp *.h *.hpp)
add_executable(SFMLHelloWorldApp ${SFMLHELLOWORLDAPP_SOURCES})
target_link_libraries(SFMLHelloWorldApp ${LIBRARIES})

# Folder filters
create_filters("${SFMLHELLOWORLDAPP_SOURCES}" ".")

# Capetas de salida
set_target_properties(SFMLHelloWorldApp PROPERTIES PDB_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/Bin/$<CONFIG>")
set_target_properties(SFMLHelloWorldApp PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/Bin/$<CONFIG>")