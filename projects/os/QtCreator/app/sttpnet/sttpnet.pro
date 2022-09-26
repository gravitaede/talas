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
#   File: sttpnet.pro
#
# Author: $author$
#   Date: 9/26/2022
#
# os specific QtCreator project .pro file for framework tatalas executable sttpnet
########################################################################
#
# Debug: tatalas/build/os/QtCreator/Debug/bin/sttpnet
# Release: tatalas/build/os/QtCreator/Release/bin/sttpnet
# Profile: tatalas/build/os/QtCreator/Profile/bin/sttpnet
#
include(../../../../../build/QtCreator/tatalas.pri)
include(../../../../QtCreator/tatalas.pri)
include(../../tatalas.pri)
include(../../../../QtCreator/app/sttpnet/sttpnet.pri)

TARGET = $${sttpnet_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${sttpnet_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${sttpnet_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${sttpnet_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${sttpnet_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${sttpnet_HEADERS} \
$${sttpnet_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${sttpnet_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${sttpnet_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${sttpnet_LIBS} \
$${FRAMEWORKS} \

########################################################################

