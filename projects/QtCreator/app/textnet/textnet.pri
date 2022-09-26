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
#   File: textnet.pri
#
# Author: $author$
#   Date: 9/25/2022
#
# generic QtCreator project .pri file for framework tatalas executable textnet
########################################################################

########################################################################
# textnet

# textnet TARGET
#
textnet_TARGET = textnet

# textnet INCLUDEPATH
#
textnet_INCLUDEPATH += \
$${tatalas_INCLUDEPATH} \

# textnet DEFINES
#
textnet_DEFINES += \
$${tatalas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# textnet OBJECTIVE_HEADERS
#
#textnet_OBJECTIVE_HEADERS += \
#$${TATALAS_SRC}/xos/app/console/textnet/main.hh \

# textnet OBJECTIVE_SOURCES
#
#textnet_OBJECTIVE_SOURCES += \
#$${TATALAS_SRC}/xos/app/console/textnet/main.mm \

########################################################################
# textnet HEADERS
#
textnet_HEADERS += \
$${RETE_SRC}/xos/network/sockets/interfaces.hpp \
$${RETE_SRC}/xos/network/sockets/os/interfaces.hpp \
\
$${RETE_SRC}/xos/app/console/network/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/client/main.hpp \
\
$${RETE_SRC}/xos/app/console/network/sockets/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/client/main.hpp \
\
$${RETE_SRC}/xos/app/console/protocol/text/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/protocol/text/base/main.hpp \
$${RETE_SRC}/xos/app/console/protocol/text/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/protocol/text/client/main.hpp \
\
$${RETE_SRC}/xos/app/console/network/sockets/protocol/text/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/text/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/text/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/text/client/main.hpp \

# textnet SOURCES
#
textnet_SOURCES += \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/text/client/main_opt.cpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/text/client/main.cpp \

########################################################################
# textnet FRAMEWORKS
#
textnet_FRAMEWORKS += \
$${tatalas_FRAMEWORKS} \

# textnet LIBS
#
textnet_LIBS += \
$${tatalas_LIBS} \

########################################################################
# NO Qt
QT -= gui core

