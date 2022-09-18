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
#   File: libtatalas.pri
#
# Author: $author$
#   Date: 9/18/2022
#
# generic QtCreator project .pri file for framework tatalas static library libtatalas
########################################################################

########################################################################
# libtatalas
XOS_LIB_TATALAS_VERSION_BUILD_DATE = 9/18/2022 #$$system(~/bin/utility/tdate)

# libtatalas TARGET
#
libtatalas_TARGET = tatalas
libtatalas_TEMPLATE = lib
libtatalas_CONFIG += staticlib

# libtatalas INCLUDEPATH
#
libtatalas_INCLUDEPATH += \
$${tatalas_INCLUDEPATH} \

# libtatalas DEFINES
#
libtatalas_DEFINES += \
$${tatalas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_LIB_TATALAS_VERSION_BUILD_DATE=$${XOS_LIB_TATALAS_VERSION_BUILD_DATE} \

########################################################################
# libtatalas OBJECTIVE_HEADERS
#
#libtatalas_OBJECTIVE_HEADERS += \
#$${TATALAS_SRC}/xos/lib/tatalas/version.hh \

# libtatalas OBJECTIVE_SOURCES
#
#libtatalas_OBJECTIVE_SOURCES += \
#$${TATALAS_SRC}/xos/lib/tatalas/version.mm \

########################################################################
# libtatalas HEADERS
#
libtatalas_HEADERS += \
$${TATALAS_SRC}/xos/lib/tatalas/version.hpp \

# libtatalas SOURCES
#
libtatalas_SOURCES += \
$${TATALAS_SRC}/xos/lib/tatalas/version.cpp \

########################################################################

