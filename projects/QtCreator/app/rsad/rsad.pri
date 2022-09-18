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
#   File: rsad.pri
#
# Author: $author$
#   Date: 9/18/2022
#
# generic QtCreator project .pri file for framework tatalas executable rsad
########################################################################

########################################################################
# rsad

# rsad TARGET
#
rsad_TARGET = rsad

# rsad INCLUDEPATH
#
rsad_INCLUDEPATH += \
$${tatalas_INCLUDEPATH} \

# rsad DEFINES
#
rsad_DEFINES += \
$${tatalas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# rsad OBJECTIVE_HEADERS
#
#rsad_OBJECTIVE_HEADERS += \
#$${TATALAS_SRC}/xos/app/console/crypto/rsa/server/main.hh \

# rsad OBJECTIVE_SOURCES
#
#rsad_OBJECTIVE_SOURCES += \
#$${TATALAS_SRC}/xos/app/console/crypto/rsa/server/main.mm \

########################################################################
# rsad HEADERS
#
rsad_HEADERS += \
$${CIFRA_SRC}/xos/crypto/random/prime/small_primes.hpp \
\
$${TALAS_CRD_SRC}/xos/app/console/crypto/rsa/server/key_pair.hpp \
$${TALAS_CRD_SRC}/xos/app/console/crypto/rsa/server/key_pair_const.hpp \
\
$${TATALAS_SRC}/xos/app/console/crypto/rsa/server/main_opt.hpp \
$${TATALAS_SRC}/xos/app/console/crypto/rsa/server/main.hpp \

# rsad SOURCES
#
rsad_SOURCES += \
$${CIFRA_SRC}/xos/crypto/random/prime/small_primes.cpp \
\
$${TALAS_CRD_SRC}/xos/app/console/crypto/rsa/server/key_pair.cpp \
\
$${TATALAS_SRC}/xos/app/console/crypto/rsa/server/main_opt.cpp \
$${TATALAS_SRC}/xos/app/console/crypto/rsa/server/main.cpp \

########################################################################
# rsad FRAMEWORKS
#
rsad_FRAMEWORKS += \
$${tatalas_rsa_FRAMEWORKS} \

# rsad LIBS
#
rsad_LIBS += \
$${tatalas_rsa_LIBS} \

########################################################################
# NO Qt
QT -= gui core

