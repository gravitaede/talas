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
#   File: sttpnet.pri
#
# Author: $author$
#   Date: 9/26/2022
#
# generic QtCreator project .pri file for framework tatalas executable sttpnet
########################################################################

########################################################################
# sttpnet

# sttpnet TARGET
#
sttpnet_TARGET = sttpnet

# sttpnet INCLUDEPATH
#
sttpnet_INCLUDEPATH += \
$${tatalas_INCLUDEPATH} \

# sttpnet DEFINES
#
sttpnet_DEFINES += \
$${tatalas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# sttpnet OBJECTIVE_HEADERS
#
#sttpnet_OBJECTIVE_HEADERS += \
#$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/main.hh \

# sttpnet OBJECTIVE_SOURCES
#
#sttpnet_OBJECTIVE_SOURCES += \
#$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/main.mm \

########################################################################
# sttpnet HEADERS
#
sttpnet_HEADERS += \
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
\
$${TATALAS_SRC}/xos/io/protocol/crypto/output.hpp \
\
$${TATALAS_SRC}/xos/protocol/sttp/plaintext/messages.hpp \
$${TATALAS_SRC}/xos/protocol/sttp/base/output.hpp \
$${TATALAS_SRC}/xos/protocol/sttp/client/message/default_plain_text.hpp \
$${TATALAS_SRC}/xos/protocol/sttp/client/output.hpp \
\
$${TATALAS_SRC}/xos/app/console/protocol/crypto/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/crypto/main.hpp \
\
$${TATALAS_SRC}/xos/app/console/protocol/sttp/base/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/sttp/base/main.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/sttp/client/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/sttp/client/main.hpp \
\
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/base/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/base/main.hpp \
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/client/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/client/main.hpp \

# sttpnet SOURCES
#
sttpnet_SOURCES += \
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/client/main_opt.cpp \
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/client/main.cpp \

########################################################################
# sttpnet FRAMEWORKS
#
sttpnet_FRAMEWORKS += \
$${tatalas_rsa_FRAMEWORKS} \

# sttpnet LIBS
#
sttpnet_LIBS += \
$${tatalas_rsa_LIBS} \

########################################################################
# NO Qt
QT -= gui core

