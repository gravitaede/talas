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
#   File: sttpd.pri
#
# Author: $author$
#   Date: 9/22/2022
#
# generic QtCreator project .pri file for framework tatalas executable sttpd
########################################################################

########################################################################
# sttpd

# sttpd TARGET
#
sttpd_TARGET = sttpd

# sttpd INCLUDEPATH
#
sttpd_INCLUDEPATH += \
$${tatalas_INCLUDEPATH} \

# sttpd DEFINES
#
sttpd_DEFINES += \
$${tatalas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# sttpd OBJECTIVE_HEADERS
#
#sttpd_OBJECTIVE_HEADERS += \
#$${TATALAS_SRC}/xos/app/console/protocol/sttp/server/main.hh \

# sttpd OBJECTIVE_SOURCES
#
#sttpd_OBJECTIVE_SOURCES += \
#$${TATALAS_SRC}/xos/app/console/protocol/sttp/server/main.mm \

########################################################################
# sttpd HEADERS
#
sttpd_HEADERS += \
$${TATALAS_SRC}/xos/io/protocol/crypto/output.hpp \
\
$${TATALAS_SRC}/xos/protocol/sttp/plaintext/messages.hpp \
$${TATALAS_SRC}/xos/protocol/sttp/base/output.hpp \
$${TATALAS_SRC}/xos/protocol/sttp/client/message/default_plain_text.hpp \
$${TATALAS_SRC}/xos/protocol/sttp/client/output.hpp \
$${TATALAS_SRC}/xos/protocol/sttp/server/message/default_plain_text.hpp \
$${TATALAS_SRC}/xos/protocol/sttp/server/output.hpp \
\
$${TATALAS_SRC}/xos/app/console/protocol/crypto/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/crypto/main.hpp \
\
$${TATALAS_SRC}/xos/app/console/protocol/sttp/base/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/sttp/base/main.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/sttp/client/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/sttp/client/main.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/sttp/server/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/protocol/sttp/server/main.hpp \

# sttpd SOURCES
#
sttpd_SOURCES += \
$${TATALAS_SRC}/xos/protocol/sttp/plaintext/messages.cpp \
$${TATALAS_SRC}/xos/protocol/sttp/server/message/default_plain_text.cpp \
$${TATALAS_SRC}/xos/protocol/sttp/server/output.cpp \
\
$${TATALAS_SRC}/xos/app/console/protocol/sttp/server/main_opt.cpp \
$${TATALAS_SRC}/xos/app/console/protocol/sttp/server/main.cpp \

########################################################################
# sttpd FRAMEWORKS
#
sttpd_FRAMEWORKS += \
$${tatalas_rsa_FRAMEWORKS} \

# sttpd LIBS
#
sttpd_LIBS += \
$${tatalas_rsa_LIBS} \

########################################################################
# NO Qt
QT -= gui core

