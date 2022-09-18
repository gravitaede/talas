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
#   File: rsad.pro
#
# Author: $author$
#   Date: 9/18/2022
#
# os specific QtCreator project .pro file for framework tatalas executable rsad
########################################################################
#
# Debug: tatalas/build/os/QtCreator/Debug/bin/rsad
# Release: tatalas/build/os/QtCreator/Release/bin/rsad
# Profile: tatalas/build/os/QtCreator/Profile/bin/rsad
#
include(../../../../../build/QtCreator/tatalas.pri)
include(../../../../QtCreator/tatalas.pri)
include(../../tatalas.pri)
include(../../../../QtCreator/app/rsad/rsad.pri)

TARGET = $${rsad_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${rsad_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${rsad_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${rsad_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${rsad_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${rsad_HEADERS} \
$${rsad_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${rsad_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${rsad_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${rsad_LIBS} \
$${FRAMEWORKS} \

########################################################################

