#
# files that are part of the Xilinx BSP
#

include(FetchContent)
include(NF_Utils)

# Add headers
list(APPEND XILINX_BSP_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(XILINX_BSP_INCLUDE_DIRS ${XILINX_BSP_INCLUDE_DIRS} CACHE INTERNAL "make global")

# Add all the object files to executable
list(APPEND XILINX_BSP_LIBS ${CMAKE_CURRENT_SOURCE_DIR}/libs/libxil.a)

set(XILINX_BSP_LIBS ${XILINX_BSP_INCLUDE_DIRS} CACHE INTERNAL "make global")

