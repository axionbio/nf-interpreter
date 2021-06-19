#
# files that are part of the Xilinx BSP
#

include(FetchContent)
include(NF_Utils)

list(APPEND XILINX_BSP_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(XILINX_BSP_INCLUDE_DIRS ${XILINX_BSP_INCLUDE_DIRS} CACHE INTERNAL "make global")

