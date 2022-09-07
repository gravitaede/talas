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
#   File: talas.pri
#
# Author: $author$
#   Date: 9/7/2022
#
# build specific QtCreator project .pri file for framework talas
########################################################################
# Depends: openssl;libressl;bn;mp;xosnadir;xosrostra

contains(BUILD_OS,Uname) {
UNAME = $$system(uname)

contains(UNAME,Darwin) {
BUILD_OS = macosx
} else {
contains(UNAME,Linux) {
BUILD_OS = linux
} else {
contains(UNAME,Windows) {
BUILD_OS = windows
} else {
BUILD_OS = os
} # contains(UNAME,Windows)
} # contains(UNAME,Linux)
} # contains(UNAME,Darwin)
} else {
contains(BUILD_OS,TALAS_OS) {
} else {
BUILD_OS = os
} # contains(BUILD_OS,TALAS_OS)
} # contains(BUILD_OS,Uname)

#BUILD_CPP_VERSION = 11

########################################################################
# openssl
#
# pkg-config --cflags --libs openssl
#

# build openssl INCLUDEPATH
#
build_openssl_INCLUDEPATH += \

# build openssl DEFINES
#
build_openssl_DEFINES += \

# build openssl FRAMEWORKS
#
build_openssl_FRAMEWORKS += \

# build openssl LIBS
#
build_openssl_LIBS += \

########################################################################
# libressl
#
# pkg-config --cflags --libs libressl
#

# build libressl INCLUDEPATH
#
build_libressl_INCLUDEPATH += \

# build libressl DEFINES
#
build_libressl_DEFINES += \

# build libressl FRAMEWORKS
#
build_libressl_FRAMEWORKS += \

# build libressl LIBS
#
build_libressl_LIBS += \

########################################################################
# bn
#
# pkg-config --cflags --libs bn
#

# build bn INCLUDEPATH
#
build_bn_INCLUDEPATH += \

# build bn DEFINES
#
build_bn_DEFINES += \

# build bn FRAMEWORKS
#
build_bn_FRAMEWORKS += \

# build bn LIBS
#
build_bn_LIBS += \

########################################################################
# mp
#
# pkg-config --cflags --libs mp
#

# build mp INCLUDEPATH
#
build_mp_INCLUDEPATH += \

# build mp DEFINES
#
build_mp_DEFINES += \

# build mp FRAMEWORKS
#
build_mp_FRAMEWORKS += \

# build mp LIBS
#
build_mp_LIBS += \

########################################################################
# xosnadir
#
# pkg-config --cflags --libs xosnadir
#

# build xosnadir INCLUDEPATH
#
build_xosnadir_INCLUDEPATH += \

# build xosnadir DEFINES
#
build_xosnadir_DEFINES += \

# build xosnadir FRAMEWORKS
#
build_xosnadir_FRAMEWORKS += \

# build xosnadir LIBS
#
build_xosnadir_LIBS += \

########################################################################
# xosrostra
#
# pkg-config --cflags --libs xosrostra
#

# build xosrostra INCLUDEPATH
#
build_xosrostra_INCLUDEPATH += \

# build xosrostra DEFINES
#
build_xosrostra_DEFINES += \

# build xosrostra FRAMEWORKS
#
build_xosrostra_FRAMEWORKS += \

# build xosrostra LIBS
#
build_xosrostra_LIBS += \

########################################################################
# talas

# build talas INCLUDEPATH
#
build_talas_INCLUDEPATH += \
$${build_xosrostra_INCLUDEPATH} \
$${build_xosnadir_INCLUDEPATH} \
$${build_mp_INCLUDEPATH} \
$${build_bn_INCLUDEPATH} \
$${build_libressl_INCLUDEPATH} \
$${build_openssl_INCLUDEPATH} \


# build talas DEFINES
#
build_talas_DEFINES += \
$${build_openssl_DEFINES} \
$${build_libressl_DEFINES} \
$${build_bn_DEFINES} \
$${build_mp_DEFINES} \
$${build_xosnadir_DEFINES} \
$${build_xosrostra_DEFINES} \


# build talas FRAMEWORKS
#
build_talas_FRAMEWORKS += \
$${build_xosrostra_FRAMEWORKS} \
$${build_xosnadir_FRAMEWORKS} \
$${build_mp_FRAMEWORKS} \
$${build_bn_FRAMEWORKS} \
$${build_libressl_FRAMEWORKS} \
$${build_openssl_FRAMEWORKS} \


# build talas LIBS
#
build_talas_LIBS += \
$${build_xosrostra_LIBS} \
$${build_xosnadir_LIBS} \
$${build_mp_LIBS} \
$${build_bn_LIBS} \
$${build_libressl_LIBS} \
$${build_openssl_LIBS} \

########################################################################
