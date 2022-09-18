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
#   File: tatalas.pri
#
# Author: $author$
#   Date: 9/18/2022
#
# generic QtCreator project .pri file for framework tatalas executable tatalas
########################################################################

########################################################################
# tatalas

# tatalas_exe TARGET
#
tatalas_exe_TARGET = tatalas

# tatalas_exe INCLUDEPATH
#
tatalas_exe_INCLUDEPATH += \
$${tatalas_INCLUDEPATH} \

# tatalas_exe DEFINES
#
tatalas_exe_DEFINES += \
$${tatalas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# tatalas_exe OBJECTIVE_HEADERS
#
#tatalas_exe_OBJECTIVE_HEADERS += \
#$${TATALAS_SRC}/xos/app/console/tatalas/main.hh \

# tatalas_exe OBJECTIVE_SOURCES
#
#tatalas_exe_OBJECTIVE_SOURCES += \
#$${TATALAS_SRC}/xos/app/console/tatalas/main.mm \

########################################################################
# tatalas_exe HEADERS
#
tatalas_exe_HEADERS += \
$${TATALAS_SRC}/xos/app/console/tatalas/version/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/tatalas/version/main.hpp \

# tatalas_exe SOURCES
#
tatalas_exe_SOURCES += \
$${TATALAS_SRC}/xos/app/console/tatalas/version/main_opt.cpp \
$${TATALAS_SRC}/xos/app/console/tatalas/version/main.cpp \

########################################################################
# tatalas_exe FRAMEWORKS
#
tatalas_exe_FRAMEWORKS += \
$${tatalas_FRAMEWORKS} \

# tatalas_exe LIBS
#
tatalas_exe_LIBS += \
$${tatalas_LIBS} \

########################################################################
# NO Qt
QT -= gui core

