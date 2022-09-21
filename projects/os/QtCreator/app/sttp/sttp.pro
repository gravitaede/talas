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
#   File: sttp.pro
#
# Author: $author$
#   Date: 9/19/2022
#
# os specific QtCreator project .pro file for framework tatalas executable sttp
########################################################################
#
# Debug: tatalas/build/os/QtCreator/Debug/bin/sttp
# Release: tatalas/build/os/QtCreator/Release/bin/sttp
# Profile: tatalas/build/os/QtCreator/Profile/bin/sttp
#
include(../../../../../build/QtCreator/tatalas.pri)
include(../../../../QtCreator/tatalas.pri)
include(../../tatalas.pri)
include(../../../../QtCreator/app/sttp/sttp.pri)

TARGET = $${sttp_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${sttp_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${sttp_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${sttp_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${sttp_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${sttp_HEADERS} \
$${sttp_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${sttp_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${sttp_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${sttp_LIBS} \
$${FRAMEWORKS} \

########################################################################

