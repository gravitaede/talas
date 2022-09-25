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
#   File: sttpnetd.pro
#
# Author: $author$
#   Date: 9/24/2022
#
# os specific QtCreator project .pro file for framework tatalas executable sttpnetd
########################################################################
#
# Debug: tatalas/build/os/QtCreator/Debug/bin/sttpnetd
# Release: tatalas/build/os/QtCreator/Release/bin/sttpnetd
# Profile: tatalas/build/os/QtCreator/Profile/bin/sttpnetd
#
include(../../../../../build/QtCreator/tatalas.pri)
include(../../../../QtCreator/tatalas.pri)
include(../../tatalas.pri)
include(../../../../QtCreator/app/sttpnetd/sttpnetd.pri)

TARGET = $${sttpnetd_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${sttpnetd_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${sttpnetd_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${sttpnetd_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${sttpnetd_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${sttpnetd_HEADERS} \
$${sttpnetd_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${sttpnetd_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${sttpnetd_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${sttpnetd_LIBS} \
$${FRAMEWORKS} \

########################################################################

