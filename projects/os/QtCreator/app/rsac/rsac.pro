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
#   File: rsac.pro
#
# Author: $author$
#   Date: 9/18/2022
#
# os specific QtCreator project .pro file for framework tatalas executable rsac
########################################################################
#
# Debug: tatalas/build/os/QtCreator/Debug/bin/rsac
# Release: tatalas/build/os/QtCreator/Release/bin/rsac
# Profile: tatalas/build/os/QtCreator/Profile/bin/rsac
#
include(../../../../../build/QtCreator/tatalas.pri)
include(../../../../QtCreator/tatalas.pri)
include(../../tatalas.pri)
include(../../../../QtCreator/app/rsac/rsac.pri)

TARGET = $${rsac_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${rsac_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${rsac_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${rsac_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${rsac_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${rsac_HEADERS} \
$${rsac_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${rsac_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${rsac_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${rsac_LIBS} \
$${FRAMEWORKS} \

########################################################################

