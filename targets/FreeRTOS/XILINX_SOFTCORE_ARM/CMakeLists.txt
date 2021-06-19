#
# Copyright (c) .NET Foundation and Contributors
# See LICENSE file in the project root for full license information.
#

include(FetchContent)
include(NF_Utils)

# have to delete the ffconf.h template from the repo
execute_process(
    COMMAND ${CMAKE_COMMAND} -E remove ${fatfs_SOURCE_DIR}/source/ffconf.h
)

# check if LWIP_SOURCE was specified or if it's empty (default is empty)
set(NO_LWIP_SOURCE TRUE)
if(LWIP_SOURCE)
    if(NOT "${LWIP_SOURCE}" STREQUAL "")
        set(NO_LWIP_SOURCE FALSE)
    endif()
endif()

# LWIP version
set(LWIP_VERSION_EMPTY TRUE)

# check if build was requested with a specifc LWIP version
if(DEFINED LWIP_VERSION)
    if(NOT "${LWIP_VERSION}" STREQUAL "")
        set(LWIP_VERSION_EMPTY FALSE)
    endif()
endif()

# check if build was requested with a specifc LWIP version
if(LWIP_VERSION_EMPTY)
    # no LWIP version actualy specified, must be empty which is fine, we'll default to a known good version
    set(LWIP_GIT_TAG "STABLE-2_0_3_RELEASE")
else()
    # set Git tag
    set(LWIP_GIT_TAG "${LWIP_VERSION}")
endif()

if(NO_LWIP_SOURCE)

    message(STATUS "lwIP ${LWIP_GIT_TAG} from savannah.nongnu.org repo")

    FetchContent_Declare(
        lwip
        GIT_REPOSITORY https://git.savannah.nongnu.org/git/lwip.git
        GIT_TAG ${LWIP_GIT_TAG}
    )

else()
    # LWIP source was specified

    # sanity check is source path exists
    if(EXISTS "${LWIP_SOURCE}/")
        message(STATUS "lwIP ${LWIP_GIT_TAG} (source from: ${LWIP_SOURCE})")

        FetchContent_Declare(
            lwip
            GIT_REPOSITORY ${LWIP_SOURCE}
            GIT_TAG ${LWIP_GIT_TAG}
        )

    else()
        message(FATAL_ERROR "Couldn't find LWIP source at ${LWIP_SOURCE}/")
    endif()

endif()

FetchContent_GetProperties(lwip)
FetchContent_Populate(lwip)

# make vars global
set(NANOCLR_PROJECT_SOURCES ${NANOCLR_PROJECT_SOURCES} CACHE INTERNAL "make global")
set(NANOCLR_PROJECT_INCLUDE_DIRS ${NANOCLR_PROJECT_INCLUDE_DIRS} CACHE INTERNAL "make global")

list(APPEND TARGET_FREERTOS_COMMON_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/include)

# add platform dirs
# add_subdirectory(_include)
# add_subdirectory(_common)
add_subdirectory(_nanoBooter)
# add_subdirectory(_nanoCLR)
add_subdirectory(_bsp)

