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
#   File: tatalas.pro
#
# Author: $author$
#   Date: 9/18/2022
#
# os specific QtCreator project .pro file for framework tatalas executable tatalas
########################################################################
#
# Debug: tatalas/build/os/QtCreator/Debug/bin/tatalas
# Release: tatalas/build/os/QtCreator/Release/bin/tatalas
# Profile: tatalas/build/os/QtCreator/Profile/bin/tatalas
#
include(../../../../../build/QtCreator/tatalas.pri)
include(../../../../QtCreator/tatalas.pri)
include(../../tatalas.pri)
include(../../../../QtCreator/app/tatalas/tatalas.pri)

TARGET = $${tatalas_exe_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${tatalas_exe_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${tatalas_exe_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${tatalas_exe_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${tatalas_exe_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${tatalas_exe_HEADERS} \
$${tatalas_exe_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${tatalas_exe_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${tatalas_exe_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${tatalas_exe_LIBS} \
$${FRAMEWORKS} \

########################################################################

