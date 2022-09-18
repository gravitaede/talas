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
# os specific QtCreator project .pri file for framework tatalas
########################################################################
# Depends: bn;mp;rostra;nadir;fila;crono;cifra

UNAME = $$system(uname)

contains(UNAME,Darwin) {
DARWIN_VERSION = $$system(sw_vers -productVersion)
} else {
contains(UNAME,Linux) {
LINUX_VERSION = $$system(uname -r)
} else {
contains(UNAME,Windows) {
WINDOWS_VERSION = $$system(ver)
} else {
} # contains(UNAME,Windows)
} # contains(UNAME,Linux)
} # contains(UNAME,Darwin)

contains(UNAME,Darwin) {
contains(DARWIN_VERSION,11.5.1) {
DARWIN_VERSION_NAME = Bigsur
DARWIN_VERSION_NUMBER = 11+
} else {
contains(DARWIN_VERSION,10.12.6) {
DARWIN_VERSION_NAME = Sierra
DARWIN_VERSION_NUMBER = 10+
} else {
DARWIN_VERSION_NAME = Mavricks
DARWIN_VERSION_NUMBER = 9+
} # contains(DARWIN_VERSION,10.12.6)
} # contains(DARWIN_VERSION,11.5.1)
} # contains(UNAME,Darwin)

contains(UNAME,Darwin) {
TATALAS_OS = macosx
} else {
contains(UNAME,Linux) {
TATALAS_OS = linux
} else {
TATALAS_OS = windows
} # contains(UNAME,Linux)
} # contains(UNAME,Darwin)

contains(BUILD_OS,TATALAS_OS) {
TATALAS_BUILD = $${TATALAS_OS}
} else {
TATALAS_BUILD = $${BUILD_OS}
} # contains(BUILD_OS,TATALAS_OS)

contains(BUILD_CPP_VERSION,10) {
CONFIG += c++0x
} else {
contains(BUILD_CPP_VERSION,98|03|11|14|17) {
CONFIG += c++$${BUILD_CPP_VERSION}
} else {
} # contains(BUILD_CPP_VERSION,98|03|11|14|17)
} # contains(BUILD_CPP_VERSION,10)

contains(TATALAS_OS,macosx) {
contains(DARWIN_VERSION_NUMBER,11+) {
QMAKE_CFLAGS += -Wno-implicit-function-declaration
} # contains(DARWIN_VERSION_NUMBER,11+)
} else {
contains(TATALAS_OS,linux) {
QMAKE_CXXFLAGS += -fpermissive
} else {
contains(TATALAS_OS,windows) {
} else {
} # contains(TATALAS_OS,windows)
} # contains(TATALAS_OS,linux)
} # contains(TATALAS_OS,macosx)

########################################################################
# rostra
ROSTRA_THIRDPARTY_PKG_MAKE_BLD = $${ROSTRA_THIRDPARTY_PKG}/build/$${TATALAS_BUILD}/$${BUILD_CONFIG}
ROSTRA_THIRDPARTY_PRJ_MAKE_BLD = $${OTHER_BLD}/$${ROSTRA_THIRDPARTY_PRJ}/build/$${TATALAS_BUILD}/$${BUILD_CONFIG}
ROSTRA_THIRDPARTY_PKG_BLD = $${ROSTRA_THIRDPARTY_PKG}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
ROSTRA_THIRDPARTY_PRJ_BLD = $${OTHER_BLD}/$${ROSTRA_THIRDPARTY_PRJ}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
ROSTRA_PKG_BLD = $${OTHER_BLD}/$${ROSTRA_PKG}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
ROSTRA_PRJ_BLD = $${OTHER_BLD}/$${ROSTRA_PRJ}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
#ROSTRA_LIB = $${ROSTRA_THIRDPARTY_PKG_MAKE_BLD}/lib
#ROSTRA_LIB = $${ROSTRA_THIRDPARTY_PRJ_MAKE_BLD}/lib
#ROSTRA_LIB = $${ROSTRA_THIRDPARTY_PKG_BLD}/lib
#ROSTRA_LIB = $${ROSTRA_THIRDPARTY_PRJ_BLD}/lib
ROSTRA_LIB = $${ROSTRA_PKG_BLD}/lib
#ROSTRA_LIB = $${ROSTRA_PRJ_BLD}/lib
#ROSTRA_LIB = $${TATALAS_LIB}
ROSTRA_LIB_NAME = $${ROSTRA_NAME}

# rostra LIBS
#
rostra_LIBS += \
-L$${ROSTRA_LIB}/lib$${ROSTRA_LIB_NAME} \
-l$${ROSTRA_LIB_NAME} \


########################################################################
# nadir
NADIR_THIRDPARTY_PKG_MAKE_BLD = $${NADIR_THIRDPARTY_PKG}/build/$${TATALAS_BUILD}/$${BUILD_CONFIG}
NADIR_THIRDPARTY_PRJ_MAKE_BLD = $${OTHER_BLD}/$${NADIR_THIRDPARTY_PRJ}/build/$${TATALAS_BUILD}/$${BUILD_CONFIG}
NADIR_THIRDPARTY_PKG_BLD = $${NADIR_THIRDPARTY_PKG}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
NADIR_THIRDPARTY_PRJ_BLD = $${OTHER_BLD}/$${NADIR_THIRDPARTY_PRJ}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
NADIR_PKG_BLD = $${OTHER_BLD}/$${NADIR_PKG}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
NADIR_PRJ_BLD = $${OTHER_BLD}/$${NADIR_PRJ}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
#NADIR_LIB = $${NADIR_THIRDPARTY_PKG_MAKE_BLD}/lib
#NADIR_LIB = $${NADIR_THIRDPARTY_PRJ_MAKE_BLD}/lib
#NADIR_LIB = $${NADIR_THIRDPARTY_PKG_BLD}/lib
#NADIR_LIB = $${NADIR_THIRDPARTY_PRJ_BLD}/lib
NADIR_LIB = $${NADIR_PKG_BLD}/lib
#NADIR_LIB = $${NADIR_PRJ_BLD}/lib
#NADIR_LIB = $${TATALAS_LIB}
NADIR_LIB_NAME = $${NADIR_NAME}

# nadir LIBS
#
nadir_LIBS += \
-L$${NADIR_LIB}/lib$${NADIR_LIB_NAME} \
-l$${NADIR_LIB_NAME} \


########################################################################
# fila
FILA_THIRDPARTY_PKG_MAKE_BLD = $${FILA_THIRDPARTY_PKG}/build/$${TATALAS_BUILD}/$${BUILD_CONFIG}
FILA_THIRDPARTY_PRJ_MAKE_BLD = $${OTHER_BLD}/$${FILA_THIRDPARTY_PRJ}/build/$${TATALAS_BUILD}/$${BUILD_CONFIG}
FILA_THIRDPARTY_PKG_BLD = $${FILA_THIRDPARTY_PKG}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
FILA_THIRDPARTY_PRJ_BLD = $${OTHER_BLD}/$${FILA_THIRDPARTY_PRJ}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
FILA_PKG_BLD = $${OTHER_BLD}/$${FILA_PKG}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
FILA_PRJ_BLD = $${OTHER_BLD}/$${FILA_PRJ}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
#FILA_LIB = $${FILA_THIRDPARTY_PKG_MAKE_BLD}/lib
#FILA_LIB = $${FILA_THIRDPARTY_PRJ_MAKE_BLD}/lib
#FILA_LIB = $${FILA_THIRDPARTY_PKG_BLD}/lib
#FILA_LIB = $${FILA_THIRDPARTY_PRJ_BLD}/lib
FILA_LIB = $${FILA_PKG_BLD}/lib
#FILA_LIB = $${FILA_PRJ_BLD}/lib
#FILA_LIB = $${TATALAS_LIB}
FILA_LIB_NAME = $${FILA_NAME}

# fila LIBS
#
fila_LIBS += \
-L$${FILA_LIB}/lib$${FILA_LIB_NAME} \
-l$${FILA_LIB_NAME} \


########################################################################
# crono
CRONO_THIRDPARTY_PKG_MAKE_BLD = $${CRONO_THIRDPARTY_PKG}/build/$${TATALAS_BUILD}/$${BUILD_CONFIG}
CRONO_THIRDPARTY_PRJ_MAKE_BLD = $${OTHER_BLD}/$${CRONO_THIRDPARTY_PRJ}/build/$${TATALAS_BUILD}/$${BUILD_CONFIG}
CRONO_THIRDPARTY_PKG_BLD = $${CRONO_THIRDPARTY_PKG}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
CRONO_THIRDPARTY_PRJ_BLD = $${OTHER_BLD}/$${CRONO_THIRDPARTY_PRJ}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
CRONO_PKG_BLD = $${OTHER_BLD}/$${CRONO_PKG}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
CRONO_PRJ_BLD = $${OTHER_BLD}/$${CRONO_PRJ}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
#CRONO_LIB = $${CRONO_THIRDPARTY_PKG_MAKE_BLD}/lib
#CRONO_LIB = $${CRONO_THIRDPARTY_PRJ_MAKE_BLD}/lib
#CRONO_LIB = $${CRONO_THIRDPARTY_PKG_BLD}/lib
#CRONO_LIB = $${CRONO_THIRDPARTY_PRJ_BLD}/lib
CRONO_LIB = $${CRONO_PKG_BLD}/lib
#CRONO_LIB = $${CRONO_PRJ_BLD}/lib
#CRONO_LIB = $${TATALAS_LIB}
CRONO_LIB_NAME = $${CRONO_NAME}

# crono LIBS
#
crono_LIBS += \
-L$${CRONO_LIB}/lib$${CRONO_LIB_NAME} \
-l$${CRONO_LIB_NAME} \


########################################################################
# cifra
CIFRA_THIRDPARTY_PKG_MAKE_BLD = $${CIFRA_THIRDPARTY_PKG}/build/$${TATALAS_BUILD}/$${BUILD_CONFIG}
CIFRA_THIRDPARTY_PRJ_MAKE_BLD = $${OTHER_BLD}/$${CIFRA_THIRDPARTY_PRJ}/build/$${TATALAS_BUILD}/$${BUILD_CONFIG}
CIFRA_THIRDPARTY_PKG_BLD = $${CIFRA_THIRDPARTY_PKG}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
CIFRA_THIRDPARTY_PRJ_BLD = $${OTHER_BLD}/$${CIFRA_THIRDPARTY_PRJ}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
CIFRA_PKG_BLD = $${OTHER_BLD}/$${CIFRA_PKG}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
CIFRA_PRJ_BLD = $${OTHER_BLD}/$${CIFRA_PRJ}/build/$${TATALAS_BUILD}/QtCreator/$${BUILD_CONFIG}
#CIFRA_LIB = $${CIFRA_THIRDPARTY_PKG_MAKE_BLD}/lib
#CIFRA_LIB = $${CIFRA_THIRDPARTY_PRJ_MAKE_BLD}/lib
#CIFRA_LIB = $${CIFRA_THIRDPARTY_PKG_BLD}/lib
#CIFRA_LIB = $${CIFRA_THIRDPARTY_PRJ_BLD}/lib
CIFRA_LIB = $${CIFRA_PKG_BLD}/lib
#CIFRA_LIB = $${CIFRA_PRJ_BLD}/lib
#CIFRA_LIB = $${TATALAS_LIB}
CIFRA_LIB_NAME = $${CIFRA_NAME}

# cifra LIBS
#
cifra_LIBS += \
-L$${CIFRA_LIB}/lib$${CIFRA_LIB_NAME} \
-l$${CIFRA_LIB_NAME} \

########################################################################
# bn
BN_THIRDPARTY_PKG_MAKE_BLD = $${BN_THIRDPARTY_PKG}/build/$${RETE_BUILD}/$${BUILD_CONFIG}
BN_THIRDPARTY_PRJ_MAKE_BLD = $${OTHER_BLD}/$${BN_THIRDPARTY_PRJ}/build/$${RETE_BUILD}/$${BUILD_CONFIG}
BN_THIRDPARTY_PKG_BLD = $${BN_THIRDPARTY_PKG}/build/$${RETE_BUILD}/QtCreator/$${BUILD_CONFIG}
BN_THIRDPARTY_PRJ_BLD = $${OTHER_BLD}/$${BN_THIRDPARTY_PRJ}/build/$${RETE_BUILD}/QtCreator/$${BUILD_CONFIG}
BN_PKG_BLD = $${OTHER_BLD}/$${BN_PKG}/build/$${RETE_BUILD}/QtCreator/$${BUILD_CONFIG}
BN_PRJ_BLD = $${OTHER_BLD}/$${BN_PRJ}/build/$${RETE_BUILD}/QtCreator/$${BUILD_CONFIG}
#BN_LIB = $${BN_THIRDPARTY_PKG_MAKE_BLD}/lib
#BN_LIB = $${BN_THIRDPARTY_PRJ_MAKE_BLD}/lib
#BN_LIB = $${BN_THIRDPARTY_PKG_BLD}/lib
#BN_LIB = $${BN_THIRDPARTY_PRJ_BLD}/lib
#BN_LIB = $${BN_PKG_BLD}/lib
#BN_LIB = $${BN_PRJ_BLD}/lib
#BN_LIB = $${RETE_LIB}
BN_LIB_NAME = $${BN_NAME}
BN_LIB = $${CIFRA_LIB}

# bn LIBS
#
bn_LIBS += \
-L$${BN_LIB}/lib$${BN_LIB_NAME} \
-l$${BN_LIB_NAME} \


########################################################################
# mp
MP_THIRDPARTY_PKG_MAKE_BLD = $${MP_THIRDPARTY_PKG}/build/$${RETE_BUILD}/$${BUILD_CONFIG}
MP_THIRDPARTY_PRJ_MAKE_BLD = $${OTHER_BLD}/$${MP_THIRDPARTY_PRJ}/build/$${RETE_BUILD}/$${BUILD_CONFIG}
MP_THIRDPARTY_PKG_BLD = $${MP_THIRDPARTY_PKG}/build/$${RETE_BUILD}/QtCreator/$${BUILD_CONFIG}
MP_THIRDPARTY_PRJ_BLD = $${OTHER_BLD}/$${MP_THIRDPARTY_PRJ}/build/$${RETE_BUILD}/QtCreator/$${BUILD_CONFIG}
MP_PKG_BLD = $${OTHER_BLD}/$${MP_PKG}/build/$${RETE_BUILD}/QtCreator/$${BUILD_CONFIG}
MP_PRJ_BLD = $${OTHER_BLD}/$${MP_PRJ}/build/$${RETE_BUILD}/QtCreator/$${BUILD_CONFIG}
#MP_LIB = $${MP_THIRDPARTY_PKG_MAKE_BLD}/lib
#MP_LIB = $${MP_THIRDPARTY_PRJ_MAKE_BLD}/lib
#MP_LIB = $${MP_THIRDPARTY_PKG_BLD}/lib
#MP_LIB = $${MP_THIRDPARTY_PRJ_BLD}/lib
#MP_LIB = $${MP_PKG_BLD}/lib
#MP_LIB = $${MP_PRJ_BLD}/lib
#MP_LIB = $${RETE_LIB}
MP_LIB_NAME = $${MP_NAME}
MP_LIB = $${CIFRA_LIB}

# mp LIBS
#
mp_LIBS += \
-L$${MP_LIB}/lib$${MP_LIB_NAME}z \
-l$${MP_LIB_NAME}z \
-L$${MP_LIB}/lib$${MP_LIB_NAME}n \
-l$${MP_LIB_NAME}n \
-L$${MP_LIB}/lib$${MP_LIB_NAME} \
-l$${MP_LIB_NAME} \


########################################################################
# tatalas

# tatalas INCLUDEPATH
#
tatalas_INCLUDEPATH += \

# tatalas DEFINES
#
tatalas_DEFINES += \

# tatalas os LIBS
#
contains(TATALAS_OS,macosx|linux) {
tatalas_os_LIBS += \
-lpthread \
-ldl
} else {
} # contains(TATALAS_OS,macosx|linux)

contains(TATALAS_OS,linux) {
tatalas_os_LIBS += \
-lrt
} else {
} # contains(TATALAS_OS,linux)


# tatalas base LIBS
#
tatalas_base_LIBS += \
$${cifra_LIBS} \
$${crono_LIBS} \
$${fila_LIBS} \
$${nadir_LIBS} \
$${rostra_LIBS} \


# tatalas LIBS
#
tatalas_LIBS += \
$${tatalas_base_LIBS} \
$${build_tatalas_LIBS} \
$${tatalas_os_LIBS} \

# tatalas rsa LIBS
#
tatalas_rsa_LIBS += \
$${tatalas_base_LIBS} \
$${mp_LIBS} \
$${bn_LIBS} \
$${build_tatalas_LIBS} \
$${tatalas_os_LIBS} \

