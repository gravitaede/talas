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
#   File: sttpnetd.pri
#
# Author: $author$
#   Date: 9/24/2022
#
# generic QtCreator project .pri file for framework tatalas executable sttpnetd
########################################################################

########################################################################
# sttpnetd

# sttpnetd TARGET
#
sttpnetd_TARGET = sttpnetd

# sttpnetd INCLUDEPATH
#
sttpnetd_INCLUDEPATH += \
$${tatalas_INCLUDEPATH} \

# sttpnetd DEFINES
#
sttpnetd_DEFINES += \
$${tatalas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# sttpnetd OBJECTIVE_HEADERS
#
#sttpnetd_OBJECTIVE_HEADERS += \
#$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/main.hh \

# sttpnetd OBJECTIVE_SOURCES
#
#sttpnetd_OBJECTIVE_SOURCES += \
#$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/main.mm \

########################################################################
# sttpnetd HEADERS
#
sttpnetd_HEADERS += \
$${RETE_SRC}/xos/network/sockets/interfaces.hpp \
$${RETE_SRC}/xos/network/sockets/os/interfaces.hpp \
\
$${RETE_SRC}/xos/app/console/network/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/server/main.hpp \
\
$${RETE_SRC}/xos/app/console/network/sockets/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/server/main.hpp \
\
$${RETE_SRC}/xos/app/console/protocol/text/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/protocol/text/base/main.hpp \
$${RETE_SRC}/xos/app/console/protocol/text/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/protocol/text/server/main.hpp \
\
$${RETE_SRC}/xos/app/console/network/sockets/protocol/text/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/text/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/text/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/protocol/text/server/main.hpp \
\
$${TATALAS_SRC}/xos/io/protocol/crypto/output.hpp \
\
$${TATALAS_SRC}/xos/protocol/sttp/plaintext/messages.hpp \
$${TATALAS_SRC}/xos/protocol/sttp/base/output.hpp \
$${TATALAS_SRC}/xos/protocol/sttp/server/message/default_plain_text.hpp \
$${TATALAS_SRC}/xos/protocol/sttp/server/output.hpp \
\
$${TATALAS_SRC}/xos/app/console/protocol/crypto/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/crypto/main.hpp \
\
$${TATALAS_SRC}/xos/app/console/protocol/sttp/base/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/sttp/base/main.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/sttp/server/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/sttp/server/main.hpp \
\
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/base/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/base/main.hpp \
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/server/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/server/main.hpp \

# sttpnetd SOURCES
#
sttpnetd_SOURCES += \
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/server/main_opt.cpp \
$${TATALAS_SRC}/xos/app/console/network/sockets/protocol/sttpnet/server/main.cpp \

########################################################################
# sttpnetd FRAMEWORKS
#
sttpnetd_FRAMEWORKS += \
$${tatalas_rsa_FRAMEWORKS} \

# sttpnetd LIBS
#
sttpnetd_LIBS += \
$${tatalas_rsa_LIBS} \

########################################################################
# NO Qt
QT -= gui core

