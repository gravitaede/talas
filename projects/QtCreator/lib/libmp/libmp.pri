########################################################################
# Copyright (c) 1988-2022 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: libmp.pri
#
# Author: $author$
#   Date: 9/7/2022
#
# generic QtCreator project .pri file for framework talas static library libmp
########################################################################

########################################################################
# libmp
XOS_LIB_MP_VERSION_BUILD_DATE = 9/7/2022 #$$system(~/bin/utility/tdate)

# libmp TARGET
#
libmp_TARGET = mp
libmp_TEMPLATE = lib
libmp_CONFIG += staticlib

# libmp INCLUDEPATH
#
libmp_INCLUDEPATH += \
$${talas_INCLUDEPATH} \

# libmp DEFINES
#
libmp_DEFINES += \
$${talas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_LIB_MP_VERSION_BUILD_DATE=$${XOS_LIB_MP_VERSION_BUILD_DATE} \

########################################################################
# libmp OBJECTIVE_HEADERS
#
#libmp_OBJECTIVE_HEADERS += \
#$${TALAS_SRC}/xos/lib/mp/version.hh \

# libmp OBJECTIVE_SOURCES
#
#libmp_OBJECTIVE_SOURCES += \
#$${TALAS_SRC}/xos/lib/mp/version.mm \

########################################################################
# libmp HEADERS
#
libmp_HEADERS += \

# libmp SOURCES
#
libmp_SOURCES += \
$${MP_SRC}/extract-double.c \
$${MP_SRC}/insert-double.c \
$${MP_SRC}/memory.c \
$${MP_SRC}/mp_bpl.c \
$${MP_SRC}/mp_clz_tab.c \
$${MP_SRC}/mp_set_fns.c \
$${MP_SRC}/stack-alloc.c \
$${MP_SRC}/version.c \

########################################################################

