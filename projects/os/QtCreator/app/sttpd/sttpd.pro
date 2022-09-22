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
#   File: sttpd.pro
#
# Author: $author$
#   Date: 9/22/2022
#
# os specific QtCreator project .pro file for framework tatalas executable sttpd
########################################################################
#
# Debug: tatalas/build/os/QtCreator/Debug/bin/sttpd
# Release: tatalas/build/os/QtCreator/Release/bin/sttpd
# Profile: tatalas/build/os/QtCreator/Profile/bin/sttpd
#
include(../../../../../build/QtCreator/tatalas.pri)
include(../../../../QtCreator/tatalas.pri)
include(../../tatalas.pri)
include(../../../../QtCreator/app/sttpd/sttpd.pri)

TARGET = $${sttpd_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${sttpd_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${sttpd_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${sttpd_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${sttpd_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${sttpd_HEADERS} \
$${sttpd_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${sttpd_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${sttpd_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${sttpd_LIBS} \
$${FRAMEWORKS} \

########################################################################

