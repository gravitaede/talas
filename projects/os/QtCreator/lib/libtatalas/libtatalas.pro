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
#   File: libtatalas.pro
#
# Author: $author$
#   Date: 9/18/2022
#
# os specific QtCreator project .pro file for framework tatalas static library libtatalas
########################################################################
#
# Debug: tatalas/build/os/QtCreator/Debug/lib/libtatalas
# Release: tatalas/build/os/QtCreator/Release/lib/libtatalas
# Profile: tatalas/build/os/QtCreator/Profile/lib/libtatalas
#
include(../../../../../build/QtCreator/tatalas.pri)
include(../../../../QtCreator/tatalas.pri)
include(../../tatalas.pri)
include(../../../../QtCreator/lib/libtatalas/libtatalas.pri)

TARGET = $${libtatalas_TARGET}
TEMPLATE = $${libtatalas_TEMPLATE}
CONFIG += $${libtatalas_CONFIG}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${libtatalas_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${libtatalas_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${libtatalas_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${libtatalas_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${libtatalas_HEADERS} \
$${libtatalas_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${libtatalas_SOURCES} \

########################################################################

