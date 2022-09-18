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
#   File: rsa.pri
#
# Author: $author$
#   Date: 9/18/2022
#
# generic QtCreator project .pri file for framework tatalas executable rsa
########################################################################

########################################################################
# rsa

# rsa TARGET
#
rsa_TARGET = rsa

# rsa INCLUDEPATH
#
rsa_INCLUDEPATH += \
$${tatalas_INCLUDEPATH} \

# rsa DEFINES
#
rsa_DEFINES += \
$${tatalas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# rsa OBJECTIVE_HEADERS
#
#rsa_OBJECTIVE_HEADERS += \
#$${TATALAS_SRC}/xos/app/console/crypto/rsa/test/main.hh \

# rsa OBJECTIVE_SOURCES
#
#rsa_OBJECTIVE_SOURCES += \
#$${TATALAS_SRC}/xos/app/console/crypto/rsa/test/main.mm \

########################################################################
# rsa HEADERS
#
rsa_HEADERS += \
$${CIFRA_SRC}/xos/crypto/random/prime/small_primes.hpp \
\
$${TALAS_CRD_SRC}/xos/app/console/crypto/rsa/key_pair.hpp \
$${TALAS_CRD_SRC}/xos/app/console/crypto/rsa/key_pair_const.hpp \
$${TALAS_CRD_SRC}/xos/app/console/crypto/rsa/private_key.hpp \
$${TALAS_CRD_SRC}/xos/app/console/crypto/rsa/private_key_const.hpp \
$${TALAS_CRD_SRC}/xos/app/console/crypto/rsa/public_key.hpp \
$${TALAS_CRD_SRC}/xos/app/console/crypto/rsa/public_key_const.hpp \
$${TALAS_CRD_SRC}/xos/app/console/crypto/rsa/public_exponent_const.hpp \
\
$${TALAS_SRC}/xos/app/console/crypto/rsa/main_opt.hpp \
$${TALAS_SRC}/xos/app/console/crypto/rsa/main.hpp \

# rsa SOURCES
#
rsa_SOURCES += \
$${CIFRA_SRC}/xos/crypto/random/prime/small_primes.cpp \
\
$${TALAS_CRD_SRC}/xos/app/console/crypto/rsa/key_pair.cpp \
$${TALAS_CRD_SRC}/xos/app/console/crypto/rsa/private_key.cpp \
$${TALAS_CRD_SRC}/xos/app/console/crypto/rsa/public_key.cpp \
$${TALAS_CRD_SRC}/xos/app/console/crypto/rsa/public_exponent_const.cpp \
\
$${TALAS_SRC}/xos/app/console/crypto/rsa/main_opt.cpp \
$${TALAS_SRC}/xos/app/console/crypto/rsa/main.cpp \

########################################################################
# rsa FRAMEWORKS
#
rsa_FRAMEWORKS += \
$${tatalas_rsa_FRAMEWORKS} \

# rsa LIBS
#
rsa_LIBS += \
$${tatalas_rsa_LIBS} \

########################################################################
# NO Qt
QT -= gui core

