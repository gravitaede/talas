///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2022 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 4/14/2022, 8/7/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_OPT_HPP

#include "xos/app/console/crypto/output/main.hpp"

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PLAIN_TEXT_OPT "plain-text"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PLAIN_TEXT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PLAIN_TEXT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PLAIN_TEXT_OPTARG "[string]"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PLAIN_TEXT_OPTUSE "plain text to encrypt"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PLAIN_TEXT_OPTVAL_S "p::"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PLAIN_TEXT_OPTVAL_C 'p'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PLAIN_TEXT_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PLAIN_TEXT_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PLAIN_TEXT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PLAIN_TEXT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PLAIN_TEXT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_CIPHER_TEXT_OPT "cipher-text"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_CIPHER_TEXT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_CIPHER_TEXT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_CIPHER_TEXT_OPTARG "[string]"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_CIPHER_TEXT_OPTUSE "cipher text to decrypt"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_CIPHER_TEXT_OPTVAL_S "c::"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_CIPHER_TEXT_OPTVAL_C 'c'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_CIPHER_TEXT_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_CIPHER_TEXT_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_CIPHER_TEXT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_CIPHER_TEXT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_CIPHER_TEXT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ENCRYPT_OPT "encrypt"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ENCRYPT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ENCRYPT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ENCRYPT_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ENCRYPT_OPTUSE "RSA public encrypt/decrypt"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ENCRYPT_OPTVAL_S "e"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ENCRYPT_OPTVAL_C 'e'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ENCRYPT_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ENCRYPT_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ENCRYPT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ENCRYPT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ENCRYPT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_DECRYPT_OPT "decrypt"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_DECRYPT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_DECRYPT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_DECRYPT_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_DECRYPT_OPTUSE "RSA private decrypt/encrypt"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_DECRYPT_OPTVAL_S "d"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_DECRYPT_OPTVAL_C 'd'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_DECRYPT_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_DECRYPT_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_DECRYPT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_DECRYPT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_DECRYPT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_TEST_OPT "test"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_TEST_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_TEST_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_TEST_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_TEST_OPTUSE "Test RSA key pair"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_TEST_OPTVAL_S "t"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_TEST_OPTVAL_C 't'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_TEST_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_TEST_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_TEST_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_TEST_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_TEST_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_KEY_OPT "generate-key"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_KEY_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_KEY_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_KEY_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_KEY_OPTUSE "generate RSA key pair"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_KEY_OPTVAL_S "n"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_KEY_OPTVAL_C 'n'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_KEY_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_KEY_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_KEY_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_KEY_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_KEY_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PUBLIC_KEY_OPT "public-key"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PUBLIC_KEY_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PUBLIC_KEY_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PUBLIC_KEY_OPTARG "[string]"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PUBLIC_KEY_OPTUSE "RSA public key"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PUBLIC_KEY_OPTVAL_S "u::"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PUBLIC_KEY_OPTVAL_C 'u'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PUBLIC_KEY_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PUBLIC_KEY_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PUBLIC_KEY_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PUBLIC_KEY_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PUBLIC_KEY_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PRIVATE_KEY_OPT "private-key"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PRIVATE_KEY_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PRIVATE_KEY_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PRIVATE_KEY_OPTARG "[string]"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PRIVATE_KEY_OPTUSE "RSA private key"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PRIVATE_KEY_OPTVAL_S "r::"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PRIVATE_KEY_OPTVAL_C 'r'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PRIVATE_KEY_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PRIVATE_KEY_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PRIVATE_KEY_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PRIVATE_KEY_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PRIVATE_KEY_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_KEY_PAIR_OPT "key-pair"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_KEY_PAIR_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_KEY_PAIR_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_KEY_PAIR_OPTARG "[string]"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_KEY_PAIR_OPTUSE "RSA key pair"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_KEY_PAIR_OPTVAL_S "k::"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_KEY_PAIR_OPTVAL_C 'k'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_KEY_PAIR_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_KEY_PAIR_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_KEY_PAIR_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_KEY_PAIR_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_KEY_PAIR_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_PRIME_OPT "random-prime"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_PRIME_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_PRIME_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_PRIME_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_PRIME_OPTUSE "random prime"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_PRIME_OPTVAL_S "a"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_PRIME_OPTVAL_C 'a'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_PRIME_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_PRIME_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_PRIME_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_PRIME_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_PRIME_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PSEUDO_RANDOM_OPT "pseudo-random"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PSEUDO_RANDOM_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PSEUDO_RANDOM_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PSEUDO_RANDOM_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PSEUDO_RANDOM_OPTUSE "pseudo random"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PSEUDO_RANDOM_OPTVAL_S "s"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PSEUDO_RANDOM_OPTVAL_C 's'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PSEUDO_RANDOM_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PSEUDO_RANDOM_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PSEUDO_RANDOM_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PSEUDO_RANDOM_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PSEUDO_RANDOM_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MILLER_RABIN_OPT "miller-rabin"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MILLER_RABIN_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MILLER_RABIN_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MILLER_RABIN_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MILLER_RABIN_OPTUSE "do miller rabin primality test"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MILLER_RABIN_OPTVAL_S "m"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MILLER_RABIN_OPTVAL_C 'm'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MILLER_RABIN_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MILLER_RABIN_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MILLER_RABIN_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MILLER_RABIN_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MILLER_RABIN_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_FERMAT_WITNESS_OPT "fermat-witness"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_FERMAT_WITNESS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_FERMAT_WITNESS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_FERMAT_WITNESS_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_FERMAT_WITNESS_OPTUSE "do fermat witness primality test"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_FERMAT_WITNESS_OPTVAL_S "w"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_FERMAT_WITNESS_OPTVAL_C 'w'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_FERMAT_WITNESS_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_FERMAT_WITNESS_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_FERMAT_WITNESS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_FERMAT_WITNESS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_FERMAT_WITNESS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BITS_OPT "modulus-bits"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BITS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BITS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BITS_OPTARG "[number]"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BITS_OPTUSE "RSA modulus size in bits"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BITS_OPTVAL_S "i::"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BITS_OPTVAL_C 'i'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BITS_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BITS_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BITS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BITS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BITS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BYTES_OPT "modulus-bytes"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BYTES_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BYTES_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BYTES_OPTARG "[number]"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BYTES_OPTUSE "RSA modulus size in bytes"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BYTES_OPTVAL_S "y::"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BYTES_OPTVAL_C 'y'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BYTES_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BYTES_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BYTES_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BYTES_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BYTES_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_BN_INTEGER_OPT "bn-integer"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_BN_INTEGER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_BN_INTEGER_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_BN_INTEGER_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_BN_INTEGER_OPTUSE "use bn integer library"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_BN_INTEGER_OPTVAL_S "b"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_BN_INTEGER_OPTVAL_C 'b'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_BN_INTEGER_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_BN_INTEGER_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_BN_INTEGER_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_BN_INTEGER_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_BN_INTEGER_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GMP_INTEGER_OPT "gmp-integer"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GMP_INTEGER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GMP_INTEGER_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GMP_INTEGER_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GMP_INTEGER_OPTUSE "use gmp integer library"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GMP_INTEGER_OPTVAL_S "g"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GMP_INTEGER_OPTVAL_C 'g'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GMP_INTEGER_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GMP_INTEGER_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GMP_INTEGER_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GMP_INTEGER_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GMP_INTEGER_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_VERBOSE_OPT "verbose"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_VERBOSE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_VERBOSE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_VERBOSE_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_VERBOSE_OPTUSE "verbose output"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_VERBOSE_OPTVAL_S "o"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_VERBOSE_OPTVAL_C 'o'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_VERBOSE_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_VERBOSE_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_VERBOSE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_VERBOSE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_VERBOSE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_QUIET_OPT "quiet"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_QUIET_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_QUIET_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_QUIET_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_QUIET_OPTUSE "quiet output"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_QUIET_OPTVAL_S "q"
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_QUIET_OPTVAL_C 'q'
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_QUIET_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_QUIET_OPT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_QUIET_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_QUIET_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_QUIET_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PLAIN_TEXT_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_CIPHER_TEXT_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ENCRYPT_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_DECRYPT_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_TEST_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_KEY_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PUBLIC_KEY_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PRIVATE_KEY_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_KEY_PAIR_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_PRIME_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PSEUDO_RANDOM_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MILLER_RABIN_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_FERMAT_WITNESS_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BITS_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BYTES_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_BN_INTEGER_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GMP_INTEGER_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_VERBOSE_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_QUIET_OPTVAL_S \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PLAIN_TEXT_OPTION \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_CIPHER_TEXT_OPTION \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ENCRYPT_OPTION \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_DECRYPT_OPTION \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_TEST_OPTION \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_KEY_OPTION \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PUBLIC_KEY_OPTION \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PRIVATE_KEY_OPTION \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_KEY_PAIR_OPTION \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_PRIME_OPTION \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PSEUDO_RANDOM_OPTION \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MILLER_RABIN_OPTION \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_FERMAT_WITNESS_OPTION \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BITS_OPTION \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BYTES_OPTION \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_BN_INTEGER_OPTION \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GMP_INTEGER_OPTION \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_OPTION \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OPTION \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_OPTION \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_OPTION \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_VERBOSE_OPTION \
    XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_QUIET_OPTION \

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_CIFRA_HELP_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_CIFRA_HELP_MAIN_OPTIONS_OPTIONS

#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ARGS 0 
#define XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace crypto {
namespace rsa {

/// class main_optt
template 
<class TExtends = xos::app::console::crypto::output::main, 
 class TImplements = typename TExtends::implements>

class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    main_optt()
    : run_(0), 
      generate_key_pair_run_(0), 
      pseudo_random_number_run_(0), pseudo_random_prime_run_(0), test_key_pair_run_(0),
      output_public_key_run_(0), output_get_public_key_run_(0), output_test_public_key_run_(0),
      output_private_key_run_(0), output_get_private_key_run_(0), output_test_private_key_run_(0),
      output_key_pair_run_(0), output_get_key_pair_run_(0), output_test_key_pair_run_(0),
      no_miller_rabin_test_(false), 
      key_pair_define_("XOS_APP_CONSOLE_CRYPTO_RSA_KEY_PAIR_CONST_HPP"), 
      public_key_define_("XOS_APP_CONSOLE_CRYPTO_RSA_PUBLIC_KEY_CONST_HPP"), 
      private_key_define_("XOS_APP_CONSOLE_CRYPTO_RSA_PRIVATE_KEY_CONST_HPP") {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;
    
    typedef xos::byte_array byte_array_t;
    typedef xos::crypto::array crypto_array_t;

    /// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::run(argc, argv, env);
        }
        return err;
    }

    ///
    /// ...generate_key_pair_run
    /// ...
    int (derives::*generate_key_pair_run_)(int argc, char_t** argv, char_t** env);
    virtual int generate_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (generate_key_pair_run_) {
            err = (this->*generate_key_pair_run_)(argc, argv, env);
        } else {
            err = default_generate_key_pair_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_generate_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_bn_generate_key_pair_run(argc, argv, env);
        return err;
    }
    virtual int set_default_generate_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        generate_key_pair_run_ = 0;
        return err;
    }
    virtual int before_generate_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const char_t* arg = 0;
        if ((optind < (argc)) && ((arg = argv[optind])) && (arg[0])) {
            key_pair_define_.assign(arg);
        }
        return err;
    }
    virtual int after_generate_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_generate_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_generate_key_pair_run(argc, argv, env))) {
            int err2 = 0;
            err = generate_key_pair_run(argc, argv, env);
            if ((err2 = after_generate_key_pair_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_generate_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_generate_key_pair_run;
        return err;
    }
    /// ...bn_generate_key_pair_run
    virtual int bn_generate_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_bn_generate_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_bn_generate_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_bn_generate_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_bn_generate_key_pair_run(argc, argv, env))) {
            int err2 = 0;
            err = bn_generate_key_pair_run(argc, argv, env);
            if ((err2 = after_bn_generate_key_pair_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_bn_generate_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        generate_key_pair_run_ = &derives::all_bn_generate_key_pair_run;
        return err;
    }
    /// ...gmp_generate_key_pair_run
    virtual int gmp_generate_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_gmp_generate_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_gmp_generate_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_gmp_generate_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_gmp_generate_key_pair_run(argc, argv, env))) {
            int err2 = 0;
            err = gmp_generate_key_pair_run(argc, argv, env);
            if ((err2 = after_gmp_generate_key_pair_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_gmp_generate_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        generate_key_pair_run_ = &derives::all_gmp_generate_key_pair_run;
        return err;
    }
    /// ...
    /// ...generate_key_pair_run
    /// 

    ///
    /// ...pseudo_random_number_run
    /// ...
    int (derives::*pseudo_random_number_run_)(int argc, char_t** argv, char_t** env);
    virtual int pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (pseudo_random_number_run_) {
            err = (this->*pseudo_random_number_run_)(argc, argv, env);
        } else {
            err = default_pseudo_random_number_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_default_pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        pseudo_random_number_run_ = 0;
        return err;
    }
    virtual int bn_pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_bn_pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        pseudo_random_number_run_ = &derives::bn_pseudo_random_number_run;
        return err;
    }
    virtual int gmp_pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_gmp_pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        pseudo_random_number_run_ = &derives::gmp_pseudo_random_number_run;
        return err;
    }
    virtual int before_pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_pseudo_random_number_run(argc, argv, env))) {
            int err2 = 0;
            err = pseudo_random_number_run(argc, argv, env);
            if ((err2 = after_pseudo_random_number_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_pseudo_random_number_run;
        return err;
    }
    /// ...
    /// ...pseudo_random_number_run
    /// 

    /// ...pseudo_random_prime_run
    int (derives::*pseudo_random_prime_run_)(int argc, char_t** argv, char_t** env);
    virtual int pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (pseudo_random_prime_run_) {
            err = (this->*pseudo_random_prime_run_)(argc, argv, env);
        } else {
            err = default_pseudo_random_prime_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = generate_pseudo_random_prime_run(argc, argv, env);
        return err;
    }
    virtual int set_default_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        pseudo_random_prime_run_ = 0;
        return err;
    }
    virtual int before_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_pseudo_random_prime_run(argc, argv, env))) {
            int err2 = 0;
            err = pseudo_random_prime_run(argc, argv, env);
            if ((err2 = after_pseudo_random_prime_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        pseudo_random_number_run_ = &derives::all_pseudo_random_prime_run;
        return err;
    }

    ///
    /// ...generate_pseudo_random_prime_run
    /// ...
    int (derives::*generate_pseudo_random_prime_run_)(int argc, char_t** argv, char_t** env);
    virtual int generate_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (generate_pseudo_random_prime_run_) {
            err = (this->*generate_pseudo_random_prime_run_)(argc, argv, env);
        } else {
            err = default_generate_pseudo_random_prime_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_generate_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = bn_generate_pseudo_random_prime_run(argc, argv, env);
        return err;
    }
    virtual int set_default_generate_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        generate_pseudo_random_prime_run_ = 0;
        return err;
    }
    virtual int bn_generate_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_bn_generate_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        generate_pseudo_random_prime_run_ = &derives::bn_generate_pseudo_random_prime_run;
        return err;
    }
    virtual int gmp_generate_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_gmp_generate_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        generate_pseudo_random_prime_run_ = &derives::gmp_generate_pseudo_random_prime_run;
        return err;
    }
    virtual int before_generate_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_generate_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_generate_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_generate_pseudo_random_prime_run(argc, argv, env))) {
            int err2 = 0;
            err = generate_pseudo_random_prime_run(argc, argv, env);
            if ((err2 = after_generate_pseudo_random_prime_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_generate_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        pseudo_random_prime_run_ = &derives::all_generate_pseudo_random_prime_run;
        return err;
    }
    /// ...
    /// ...generate_pseudo_random_prime_run
    /// 

    /// 
    /// ...miller_rabin_pseudo_random_prime_run
    /// ...
    int (derives::*miller_rabin_pseudo_random_prime_run_)(int argc, char_t** argv, char_t** env);
    virtual int miller_rabin_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (miller_rabin_pseudo_random_prime_run_) {
            err = (this->*miller_rabin_pseudo_random_prime_run_)(argc, argv, env);
        } else {
            err = default_miller_rabin_pseudo_random_prime_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_miller_rabin_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = bn_miller_rabin_pseudo_random_prime_run(argc, argv, env);
        return err;
    }
    virtual int set_default_miller_rabin_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        miller_rabin_pseudo_random_prime_run_ = 0;
        return err;
    }
    virtual int bn_miller_rabin_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_bn_miller_rabin_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        miller_rabin_pseudo_random_prime_run_ = &derives::bn_miller_rabin_pseudo_random_prime_run;
        return err;
    }
    virtual int gmp_miller_rabin_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_gmp_miller_rabin_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        miller_rabin_pseudo_random_prime_run_ = &derives::gmp_miller_rabin_pseudo_random_prime_run;
        return err;
    }
    virtual int before_miller_rabin_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_miller_rabin_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_miller_rabin_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_miller_rabin_pseudo_random_prime_run(argc, argv, env))) {
            int err2 = 0;
            err = miller_rabin_pseudo_random_prime_run(argc, argv, env);
            if ((err2 = after_miller_rabin_pseudo_random_prime_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_miller_rabin_pseudo_random_prime_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        pseudo_random_prime_run_ = &derives::all_miller_rabin_pseudo_random_prime_run;
        return err;
    }
    /// ...
    /// ...miller_rabin_pseudo_random_prime_run
    /// 

    ///
    /// ...rsa_public...crypt_run
    /// ...
    /// ...rsa_public_encrypt_run
    int (derives::*rsa_public_encrypt_run_)(int argc, char_t** argv, char_t** env);
    virtual int rsa_public_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (rsa_public_encrypt_run_) {
            err = (this->*rsa_public_encrypt_run_)(argc, argv, env);
        } else {
            err = bn_rsa_public_encrypt_run(argc, argv, env);
        }
        return err;
    }
    virtual int bn_rsa_public_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_bn_rsa_public_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        rsa_public_encrypt_run_ = &derives::bn_rsa_public_encrypt_run;
        return err;
    }
    virtual int gmp_rsa_public_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_gmp_rsa_public_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        rsa_public_encrypt_run_ = &derives::gmp_rsa_public_encrypt_run;
        return err;
    }
    virtual int before_rsa_public_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_rsa_public_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_rsa_public_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_rsa_public_encrypt_run(argc, argv, env))) {
            int err2 = 0;
            err = rsa_public_encrypt_run(argc, argv, env);
            if ((err2 = after_rsa_public_encrypt_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_rsa_public_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_rsa_public_encrypt_run;
        return err;
    }
    /// ...rsa_public_decrypt_run
    int (derives::*rsa_public_decrypt_run_)(int argc, char_t** argv, char_t** env);
    virtual int rsa_public_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (rsa_public_decrypt_run_) {
            err = (this->*rsa_public_decrypt_run_)(argc, argv, env);
        } else {
            err = bn_rsa_public_decrypt_run(argc, argv, env);
        }
        return err;
    }
    virtual int bn_rsa_public_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_bn_rsa_public_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        rsa_public_decrypt_run_ = &derives::bn_rsa_public_decrypt_run;
        return err;
    }
    virtual int gmp_rsa_public_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_gmp_rsa_public_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        rsa_public_decrypt_run_ = &derives::gmp_rsa_public_decrypt_run;
        return err;
    }
    virtual int before_rsa_public_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_rsa_public_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_rsa_public_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_rsa_public_decrypt_run(argc, argv, env))) {
            int err2 = 0;
            err = rsa_public_decrypt_run(argc, argv, env);
            if ((err2 = after_rsa_public_decrypt_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_rsa_public_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_rsa_public_decrypt_run;
        return err;
    }
    /// ...
    /// ...rsa_public...crypt_run
    /// 

    ///
    /// ...rsa_private...crypt_run
    /// ...
    /// ...rsa_private_encrypt_run
    int (derives::*rsa_private_encrypt_run_)(int argc, char_t** argv, char_t** env);
    virtual int rsa_private_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (rsa_private_encrypt_run_) {
            err = (this->*rsa_private_encrypt_run_)(argc, argv, env);
        } else {
            err = bn_rsa_private_encrypt_run(argc, argv, env);
        }
        return err;
    }
    virtual int bn_rsa_private_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_bn_rsa_private_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        rsa_private_encrypt_run_ = &derives::bn_rsa_private_encrypt_run;
        return err;
    }
    virtual int gmp_rsa_private_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_gmp_rsa_private_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        rsa_private_encrypt_run_ = &derives::gmp_rsa_private_encrypt_run;
        return err;
    }
    virtual int before_rsa_private_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_rsa_private_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_rsa_private_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_rsa_private_encrypt_run(argc, argv, env))) {
            int err2 = 0;
            err = rsa_private_encrypt_run(argc, argv, env);
            if ((err2 = after_rsa_private_encrypt_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_rsa_private_encrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_rsa_private_encrypt_run;
        return err;
    }
    /// ...rsa_private_decrypt_run
    int (derives::*rsa_private_decrypt_run_)(int argc, char_t** argv, char_t** env);
    virtual int rsa_private_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (rsa_private_decrypt_run_) {
            err = (this->*rsa_private_decrypt_run_)(argc, argv, env);
        } else {
            err = bn_rsa_private_decrypt_run(argc, argv, env);
        }
        return err;
    }
    virtual int bn_rsa_private_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_bn_rsa_private_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        rsa_private_decrypt_run_ = &derives::bn_rsa_private_decrypt_run;
        return err;
    }
    virtual int gmp_rsa_private_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_gmp_rsa_private_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        rsa_private_decrypt_run_ = &derives::gmp_rsa_private_decrypt_run;
        return err;
    }
    virtual int before_rsa_private_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_rsa_private_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_rsa_private_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_rsa_private_decrypt_run(argc, argv, env))) {
            int err2 = 0;
            err = rsa_private_decrypt_run(argc, argv, env);
            if ((err2 = after_rsa_private_decrypt_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_rsa_private_decrypt_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_rsa_private_decrypt_run;
        return err;
    }
    /// ...
    /// ...rsa_private...crypt_run
    /// 

    ///
    /// ...test_key_pair_run
    /// ...
    /// test_key_pair_run
    int (derives::*test_key_pair_run_)(int argc, char_t** argv, char_t** env);
    virtual int test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (test_key_pair_run_) {
            err = (this->*test_key_pair_run_)(argc, argv, env);
        } else {
            err = default_test_key_pair_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_bn_test_key_pair_run(argc, argv, env);
        return err;
    }
    virtual int before_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_test_key_pair_run(argc, argv, env))) {
            int err2 = 0;
            err = test_key_pair_run(argc, argv, env);
            if ((err2 = after_test_key_pair_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_test_key_pair_run;
        return err;
    }
    /// ...bn_test_key_pair_run
    virtual int bn_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_bn_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_bn_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_bn_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_bn_test_key_pair_run(argc, argv, env))) {
            int err2 = 0;
            err = bn_test_key_pair_run(argc, argv, env);
            if ((err2 = after_bn_test_key_pair_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_bn_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        test_key_pair_run_ = &derives::all_bn_test_key_pair_run;
        return err;
    }
    /// ...gmp_test_key_pair_run
    virtual int gmp_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_gmp_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_gmp_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_gmp_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_gmp_test_key_pair_run(argc, argv, env))) {
            int err2 = 0;
            err = gmp_test_key_pair_run(argc, argv, env);
            if ((err2 = after_gmp_test_key_pair_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_gmp_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        test_key_pair_run_ = &derives::all_gmp_test_key_pair_run;
        return err;
    }
    /// ...
    /// ...test_key_pair_run
    /// 

    ///
    /// ...output...rsa_plain_run
    /// ...
    /// ...output_rsa_plain_run
    int (derives::*output_rsa_plain_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_rsa_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_rsa_plain_run_) {
            err = (this->*output_rsa_plain_run_)(argc, argv, env);
        } else {
            err = default_output_rsa_plain_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_rsa_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_output_test_rsa_plain_run(argc, argv, env);
        return err;
    }
    virtual int before_output_rsa_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_rsa_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_rsa_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_rsa_plain_run(argc, argv, env))) {
            int err2 = 0;
            err = output_rsa_plain_run(argc, argv, env);
            if ((err2 = after_output_rsa_plain_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_rsa_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_rsa_plain_run;
        return err;
    }
    /// ...output_get_rsa_plain_run
     int (derives::*output_get_rsa_plain_run_)(int argc, char_t** argv, char_t** env);
     virtual int output_get_rsa_plain_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         if (output_get_rsa_plain_run_) {
             err = (this->*output_get_rsa_plain_run_)(argc, argv, env);
         } else {
             err = default_output_get_rsa_plain_run(argc, argv, env);
         }
         return err;
     }
     virtual int default_output_get_rsa_plain_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         /// err = extends::run(argc, argv, env);
         return err;
     }
     virtual int before_output_get_rsa_plain_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         return err;
     }
     virtual int after_output_get_rsa_plain_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         return err;
     }
     virtual int all_output_get_rsa_plain_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         if (!(err = before_output_get_rsa_plain_run(argc, argv, env))) {
             int err2 = 0;
             err = output_get_rsa_plain_run(argc, argv, env);
             if ((err2 = after_output_get_rsa_plain_run(argc, argv, env))) {
                 if (!(err)) err = err2;
             }
         }
         return err;
     }
     virtual int set_output_get_rsa_plain_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         output_rsa_plain_run_ = &derives::all_output_get_rsa_plain_run;
         return err;
     }
    /// ...output_test_rsa_plain_run
    int (derives::*output_test_rsa_plain_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_test_rsa_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_test_rsa_plain_run_) {
            err = (this->*output_test_rsa_plain_run_)(argc, argv, env);
        } else {
            err = default_output_test_rsa_plain_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_test_rsa_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_test_rsa_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_test_rsa_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_test_rsa_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_test_rsa_plain_run(argc, argv, env))) {
            int err2 = 0;
            err = output_test_rsa_plain_run(argc, argv, env);
            if ((err2 = after_output_test_rsa_plain_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_test_rsa_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_rsa_plain_run_ = &derives::all_output_test_rsa_plain_run;
        return err;
    }
    /// ...
    /// ...output...rsa_plain_run
    /// 

    ///
    /// ...output...rsa_cipher_run
    /// ...
    /// ...output_rsa_cipher_run
    int (derives::*output_rsa_cipher_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_rsa_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_rsa_cipher_run_) {
            err = (this->*output_rsa_cipher_run_)(argc, argv, env);
        } else {
            err = default_output_rsa_cipher_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_rsa_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_output_test_rsa_cipher_run(argc, argv, env);
        return err;
    }
    virtual int before_output_rsa_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_rsa_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_rsa_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_rsa_cipher_run(argc, argv, env))) {
            int err2 = 0;
            err = output_rsa_cipher_run(argc, argv, env);
            if ((err2 = after_output_rsa_cipher_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_rsa_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_rsa_cipher_run;
        return err;
    }
    /// ...output_get_rsa_cipher_run
     int (derives::*output_get_rsa_cipher_run_)(int argc, char_t** argv, char_t** env);
     virtual int output_get_rsa_cipher_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         if (output_get_rsa_cipher_run_) {
             err = (this->*output_get_rsa_cipher_run_)(argc, argv, env);
         } else {
             err = default_output_get_rsa_cipher_run(argc, argv, env);
         }
         return err;
     }
     virtual int default_output_get_rsa_cipher_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         /// err = extends::run(argc, argv, env);
         return err;
     }
     virtual int before_output_get_rsa_cipher_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         return err;
     }
     virtual int after_output_get_rsa_cipher_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         return err;
     }
     virtual int all_output_get_rsa_cipher_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         if (!(err = before_output_get_rsa_cipher_run(argc, argv, env))) {
             int err2 = 0;
             err = output_get_rsa_cipher_run(argc, argv, env);
             if ((err2 = after_output_get_rsa_cipher_run(argc, argv, env))) {
                 if (!(err)) err = err2;
             }
         }
         return err;
     }
     virtual int set_output_get_rsa_cipher_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         output_rsa_cipher_run_ = &derives::all_output_get_rsa_cipher_run;
         return err;
     }
    /// ...output_get_rsa_public_cipher_run
    int (derives::*output_get_rsa_public_cipher_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_get_rsa_public_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_get_rsa_public_cipher_run_) {
            err = (this->*output_get_rsa_public_cipher_run_)(argc, argv, env);
        } else {
            err = bn_output_get_rsa_public_cipher_run(argc, argv, env);
        }
        return err;
    }
    virtual int bn_output_get_rsa_public_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int set_bn_output_get_rsa_public_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_get_rsa_cipher_run_ = &derives::bn_output_get_rsa_public_cipher_run;
        return err;
    }
    virtual int gmp_output_get_rsa_public_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int set_gmp_output_get_rsa_public_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_get_rsa_cipher_run_ = &derives::gmp_output_get_rsa_public_cipher_run;
        return err;
    }
    virtual int set_output_get_rsa_public_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_rsa_cipher_run_ = &derives::output_get_rsa_public_cipher_run;
        return err;
    }
    /// ...output_get_rsa_private_cipher_run
    int (derives::*output_get_rsa_private_cipher_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_get_rsa_private_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_get_rsa_private_cipher_run_) {
            err = (this->*output_get_rsa_private_cipher_run_)(argc, argv, env);
        } else {
            err = bn_output_get_rsa_private_cipher_run(argc, argv, env);
        }
        return err;
    }
    virtual int bn_output_get_rsa_private_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int set_bn_output_get_rsa_private_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_get_rsa_cipher_run_ = &derives::bn_output_get_rsa_private_cipher_run;
        return err;
    }
    virtual int gmp_output_get_rsa_private_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int set_gmp_output_get_rsa_private_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_get_rsa_cipher_run_ = &derives::gmp_output_get_rsa_private_cipher_run;
        return err;
    }
    virtual int set_output_get_rsa_private_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_rsa_plain_run_ = &derives::output_get_rsa_private_cipher_run;
        return err;
    }
    /// ...output_test_rsa_cipher_run
    int (derives::*output_test_rsa_cipher_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_test_rsa_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_test_rsa_cipher_run_) {
            err = (this->*output_test_rsa_cipher_run_)(argc, argv, env);
        } else {
            err = bn_output_test_rsa_public_cipher_run(argc, argv, env);
        }
        return err;
    }
    virtual int bn_output_test_rsa_public_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int set_bn_output_test_rsa_public_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_test_rsa_cipher_run_ = &derives::bn_output_test_rsa_public_cipher_run;
        return err;
    }
    virtual int gmp_output_test_rsa_public_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int set_gmp_output_test_rsa_public_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_test_rsa_cipher_run_ = &derives::gmp_output_test_rsa_public_cipher_run;
        return err;
    }
    virtual int before_output_test_rsa_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_test_rsa_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_test_rsa_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_test_rsa_cipher_run(argc, argv, env))) {
            int err2 = 0;
            err = output_test_rsa_cipher_run(argc, argv, env);
            if ((err2 = after_output_test_rsa_cipher_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_test_rsa_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_rsa_cipher_run_ = &derives::all_output_test_rsa_cipher_run;
        return err;
    }
    /// ...
    /// ...output...rsa_cipher_run
    /// 

    ///
    /// ...output...public_key_run
    /// ...
    /// ...output_public_key_run
    int (derives::*output_public_key_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_public_key_run_) {
            err = (this->*output_public_key_run_)(argc, argv, env);
        } else {
            err = all_output_get_public_key_run(argc, argv, env);
        }
        return err;
    }
    virtual int set_default_output_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_public_key_run_ = 0;
        return err;
    }
    virtual int before_output_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const char_t* arg = 0;
        if ((optind < (argc)) && ((arg = argv[optind])) && (arg[0])) {
            public_key_define_.assign(arg);
        }
        return err;
    }
    virtual int after_output_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_public_key_run(argc, argv, env))) {
            int err2 = 0;
            err = output_public_key_run(argc, argv, env);
            if ((err2 = after_output_public_key_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_public_key_run;
        return err;
    }
    /// ...output_get_public_key_run
     int (derives::*output_get_public_key_run_)(int argc, char_t** argv, char_t** env);
     virtual int output_get_public_key_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         if (output_get_public_key_run_) {
             err = (this->*output_get_public_key_run_)(argc, argv, env);
         } else {
             err = default_output_get_public_key_run(argc, argv, env);
         }
         return err;
     }
     virtual int default_output_get_public_key_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         /// err = extends::run(argc, argv, env);
         return err;
     }
     virtual int before_output_get_public_key_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         return err;
     }
     virtual int after_output_get_public_key_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         return err;
     }
     virtual int all_output_get_public_key_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         if (!(err = before_output_get_public_key_run(argc, argv, env))) {
             int err2 = 0;
             err = output_get_public_key_run(argc, argv, env);
             if ((err2 = after_output_get_public_key_run(argc, argv, env))) {
                 if (!(err)) err = err2;
             }
         }
         return err;
     }
     virtual int set_output_get_public_key_run(int argc, char_t** argv, char_t** env) {
         int err = 0;
         output_public_key_run_ = &derives::all_output_get_public_key_run;
         return err;
     }
    /// ...output_test_public_key_run
    int (derives::*output_test_public_key_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_test_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_test_public_key_run_) {
            err = (this->*output_test_public_key_run_)(argc, argv, env);
        } else {
            err = default_output_test_public_key_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_test_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_test_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_test_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_test_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_test_public_key_run(argc, argv, env))) {
            int err2 = 0;
            err = output_test_public_key_run(argc, argv, env);
            if ((err2 = after_output_test_public_key_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_test_public_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_public_key_run_ = &derives::all_output_test_public_key_run;
        return err;
    }
    /// ...
    /// ...output...public_key_run
    /// 

    ///
    /// ...output...private_key_run
    /// ...
    /// ...output_private_key_run
    int (derives::*output_private_key_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_private_key_run_) {
            err = (this->*output_private_key_run_)(argc, argv, env);
        } else {
            err = all_output_get_private_key_run(argc, argv, env);
        }
        return err;
    }
    virtual int set_default_output_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_private_key_run_ = 0;
        return err;
    }
    virtual int before_output_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const char_t* arg = 0;
        if ((optind < (argc)) && ((arg = argv[optind])) && (arg[0])) {
            private_key_define_.assign(arg);
        }
        return err;
    }
    virtual int after_output_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_private_key_run(argc, argv, env))) {
            int err2 = 0;
            err = output_private_key_run(argc, argv, env);
            if ((err2 = after_output_private_key_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_private_key_run;
        return err;
    }
    /// ...output_get_private_key_run
    int (derives::*output_get_private_key_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_get_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_get_private_key_run_) {
            err = (this->*output_get_private_key_run_)(argc, argv, env);
        } else {
            err = default_output_get_private_key_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_get_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_get_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_get_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_get_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_get_private_key_run(argc, argv, env))) {
            int err2 = 0;
            err = output_get_private_key_run(argc, argv, env);
            if ((err2 = after_output_get_private_key_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_get_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_private_key_run_ = &derives::all_output_get_private_key_run;
        return err;
    }
    /// ...output_test_private_key_run
    int (derives::*output_test_private_key_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_test_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_test_private_key_run_) {
            err = (this->*output_test_private_key_run_)(argc, argv, env);
        } else {
            err = default_output_test_private_key_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_test_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_test_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_test_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_test_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_test_private_key_run(argc, argv, env))) {
            int err2 = 0;
            err = output_test_private_key_run(argc, argv, env);
            if ((err2 = after_output_test_private_key_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_test_private_key_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_private_key_run_ = &derives::all_output_test_private_key_run;
        return err;
    }
    /// ...
    /// ...output...private_key_run
    /// 

    ///
    /// ...output...key_pair_run
    /// ...
    /// ...output_key_pair_run
    int (derives::*output_key_pair_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_key_pair_run_) {
            err = (this->*output_key_pair_run_)(argc, argv, env);
        } else {
            err = default_output_key_pair_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_output_get_key_pair_run(argc, argv, env);
        return err;
    }
    virtual int before_output_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const char_t* arg = 0;
        if ((optind < (argc)) && ((arg = argv[optind])) && (arg[0])) {
            key_pair_define_.assign(arg);
        }
        return err;
    }
    virtual int after_output_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_key_pair_run(argc, argv, env))) {
            int err2 = 0;
            err = output_key_pair_run(argc, argv, env);
            if ((err2 = after_output_key_pair_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_key_pair_run;
        return err;
    }
    /// ...output_get_key_pair_run
    int (derives::*output_get_key_pair_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_get_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_get_key_pair_run_) {
            err = (this->*output_get_key_pair_run_)(argc, argv, env);
        } else {
            err = default_output_get_key_pair_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_get_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_get_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_get_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_get_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_get_key_pair_run(argc, argv, env))) {
            int err2 = 0;
            err = output_get_key_pair_run(argc, argv, env);
            if ((err2 = after_output_get_key_pair_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_get_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_key_pair_run_ = &derives::all_output_get_key_pair_run;
        return err;
    }
    /// ...output_test_key_pair_run
    int (derives::*output_test_key_pair_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_test_key_pair_run_) {
            err = (this->*output_test_key_pair_run_)(argc, argv, env);
        } else {
            err = default_output_test_key_pair_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        /// err = extends::run(argc, argv, env);
        return err;
    }
    virtual int before_output_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_test_key_pair_run(argc, argv, env))) {
            int err2 = 0;
            err = output_test_key_pair_run(argc, argv, env);
            if ((err2 = after_output_test_key_pair_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_test_key_pair_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_key_pair_run_ = &derives::all_output_test_key_pair_run;
        return err;
    }
    /// ...
    /// ...output...key_pair_run
    /// 

    ///
    /// ...output_modulus...run
    /// ...
    /// ...output_modulus_bits_run
    virtual int output_modulus_bits_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_modulus_bits_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_modulus_bits_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_modulus_bits_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_modulus_bits_run(argc, argv, env))) {
            int err2 = 0;
            err = output_modulus_bits_run(argc, argv, env);
            if ((err2 = after_output_modulus_bits_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_modulus_bits_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_modulus_bits_run;
        return err;
    }
    /// ...output_modulus_bytes_run
    virtual int output_modulus_bytes_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_modulus_bytes_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_modulus_bytes_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_modulus_bytes_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_modulus_bytes_run(argc, argv, env))) {
            int err2 = 0;
            err = output_modulus_bytes_run(argc, argv, env);
            if ((err2 = after_output_modulus_bytes_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_modulus_bytes_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_modulus_bytes_run;
        return err;
    }
    /// ...
    /// ...output_modulus...run
    /// 

    /// ...on_set_hex_literals
    int (derives::*on_set_hex_literals_)(xos::io::hex::read_to_byte_arrays &to_arrays, string_t &literal);
    virtual int on_set_hex_literals(xos::io::hex::read_to_byte_arrays &to_arrays, string_t &literal) {
        int err = 0;
        if (on_set_hex_literals_) {
            err = (this->*on_set_hex_literals_)(to_arrays, literal);
        } else {
            err = default_on_set_hex_literals(to_arrays, literal);
        }
        return err;
    }
    virtual int default_on_set_hex_literals(xos::io::hex::read_to_byte_arrays &to_arrays, string_t &literal) {
        int err = 0;
        err = on_set_hex_file_literals(to_arrays, literal);
        return err;
    }
    virtual int on_set_hex_file_literals(xos::io::hex::read_to_byte_arrays &to_arrays, string_t &literal) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;

        if ((chars = literal.has_chars(length))) {
            xos::io::crt::file::char_reader file;

            this->errlln("file.open(\"", chars, "\")...", null);
            if ((file.open(chars))) {
                ssize_t count = 0;
                xos::io::hex::reader hex(to_arrays, file);
    
                if (0 >= (count = hex.read())) {
                    err = on_failed_set_hex_literals(to_arrays, literal);
                }
                this->errlln("...file.close(\"", chars, "\")...", null);
                file.close();
            }
        }
        return err;
    }
    virtual int on_failed_set_hex_literals(xos::io::hex::read_to_byte_arrays &to_arrays, string_t &literal) {
        int err = 0;
        size_t length = 0;
        xos::io::hex::read_to_byte_arrays::arrays_t &arrays = to_arrays.arrays();
        xos::io::hex::read_to_byte_arrays::array_pointer_t* array_pointers = 0;

        if ((array_pointers = arrays.elements(length))) {
            xos::io::hex::read_to_byte_arrays::array_pointer_t array_pointer = 0;

            for (array_pointer = *array_pointers; length; --length, ++array_pointers) {
                if ((array_pointer)) {
                    array_pointer->set_length(0);
                }
            }
        }
        return err;
    }
    
    /// on_set...key...hex_literal...
    virtual int on_set_rsa_plain_hex_literal(xos::byte_array &plain, string_t &literal) {
        int err = 0;
        xos::io::hex::read_to_byte_arrays to_arrays(&plain, null);
        err = on_set_hex_literals(to_arrays, literal);
        return err;
    }
    virtual int on_set_rsa_cipher_hex_literal(xos::byte_array &cipher, string_t &literal) {
        int err = 0;
        xos::io::hex::read_to_byte_arrays to_arrays(&cipher, null);
        err = on_set_hex_literals(to_arrays, literal);
        return err;
    }
    virtual int on_set_public_key_hex_literals
    (xos::byte_array &exponent, xos::byte_array &modulus, string_t &literal) {
        int err = 0;
        xos::io::hex::read_to_byte_arrays to_arrays(&exponent, &modulus, null);
        err = on_set_hex_literals(to_arrays, literal);
        return err;
    }
    virtual int on_set_private_key_hex_literals
    (xos::byte_array &p, xos::byte_array &q, xos::byte_array &dmp1, 
     xos::byte_array &dmq1, xos::byte_array &iqmp, string_t &literal) {
        int err = 0;
        xos::io::hex::read_to_byte_arrays to_arrays(&p, &q, &dmp1, &dmq1, &iqmp, null);
        err = on_set_hex_literals(to_arrays, literal);
        return err;
    }
    virtual int on_set_key_pair_hex_literals
    (xos::byte_array &exponent, xos::byte_array &modulus, 
     xos::byte_array &p, xos::byte_array &q, xos::byte_array &dmp1, 
     xos::byte_array &dmq1, xos::byte_array &iqmp, string_t &literal) {
        int err = 0;
        xos::io::hex::read_to_byte_arrays to_arrays(&exponent, &modulus, &p, &q, &dmp1, &dmq1, &iqmp, null);
        err = on_set_hex_literals(to_arrays, literal);
        return err;
    }

    /// ...miller_rabin_test
    virtual bool set_miller_rabin_test(const bool to = true) {
        no_miller_rabin_test_ = !to;
        return no_miller_rabin_test_;
    }
    virtual bool set_no_miller_rabin_test(const bool to = true) {
        no_miller_rabin_test_ = to;
        return no_miller_rabin_test_;
    }
    virtual bool no_miller_rabin_test() const {
        return no_miller_rabin_test_;
    }

    /// ...on...text_option...
    virtual int on_set_rsa_plain_literal(const char_t* literal, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_plain_text_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_rsa_plain_literal(optarg, argc, argv, env))) {
                if (!(err = set_output_rsa_plain_run(argc, argv, env))) {
                }
            }
        } else {
            if (!(err = set_output_rsa_plain_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* plain_text_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PLAIN_TEXT_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PLAIN_TEXT_OPTARG;
        return chars;
    }
    virtual int on_set_rsa_cipher_literal(const char_t* literal, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_cipher_text_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_rsa_cipher_literal(optarg, argc, argv, env))) {
                if (!(err = set_output_rsa_cipher_run(argc, argv, env))) {
                }
            }
        } else {
            if (!(err = set_output_rsa_cipher_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* cipher_text_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_CIPHER_TEXT_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_CIPHER_TEXT_OPTARG;
        return chars;
    }

    /// ...on...option...
    virtual int on_encrypt_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_rsa_public_encrypt_run(argc, argv, env))) {
        }
        return err;
    }
    virtual const char_t* encrypt_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ENCRYPT_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ENCRYPT_OPTARG;
        return chars;
    }
    virtual int on_decrypt_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_rsa_private_decrypt_run(argc, argv, env))) {
        }
        return err;
    }
    virtual const char_t* decrypt_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_DECRYPT_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_DECRYPT_OPTARG;
        return chars;
    }
    virtual int on_test_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_test_key_pair_run(argc, argv, env))) {
        }
        return err;
    }
    virtual const char_t* test_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_TEST_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_TEST_OPTARG;
        return chars;
    }

    /// ...on...key_option...
    virtual int on_generate_key_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_generate_key_pair_run(argc, argv, env))) {
        }
        return err;
    }
    virtual const char_t* generate_key_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_KEY_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_KEY_OPTARG;
        return chars;
    }
    virtual int on_set_public_key_literal(const char_t* literal, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_set_public_key_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_public_key_literal(optarg, argc, argv, env))) {
                if (!(err = set_output_get_public_key_run(argc, argv, env))) {
                }
            }
        }
        return err;
    }
    virtual int on_public_key_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_public_key_option(optarg, optind, argc, argv, env))) {
                if (!(err = set_output_public_key_run(argc, argv, env))) {
                }
            }
        } else {
            if (!(err = set_output_public_key_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* public_key_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PUBLIC_KEY_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PUBLIC_KEY_OPTARG;
        return chars;
    }
    virtual int on_set_private_key_literal(const char_t* literal, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_set_private_key_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_private_key_literal(optarg, argc, argv, env))) {
                if (!(err = set_output_get_private_key_run(argc, argv, env))) {
                }
            }
        }
        return err;
    }
    virtual int on_private_key_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_private_key_option(optarg, optind, argc, argv, env))) {
                if (!(err = set_output_private_key_run(argc, argv, env))) {
                }
            }
        } else {
            if (!(err = set_output_private_key_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* private_key_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PRIVATE_KEY_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PRIVATE_KEY_OPTARG;
        return chars;
    }
    virtual int on_set_key_pair_literal(const char_t* literal, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_set_key_pair_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_key_pair_literal(optarg, argc, argv, env))) {
                if (!(err = set_output_get_key_pair_run(argc, argv, env))) {
                }
            }
        }
        return err;
    }
    virtual int on_key_pair_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_key_pair_option(optarg, optind, argc, argv, env))) {
                if (!(err = set_output_key_pair_run(argc, argv, env))) {
                }
            }
        } else {
            if (!(err = set_output_key_pair_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* key_pair_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_KEY_PAIR_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_KEY_PAIR_OPTARG;
        return chars;
    }

    /// ...on...option...
    virtual int on_generate_prime_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_pseudo_random_number_run(argc, argv, env))) {
            if (!(err = set_pseudo_random_prime_run(argc, argv, env))) {
                if (!(err = set_generate_pseudo_random_prime_run(argc, argv, env))) {
                }
            }
        }
        return err;
    }
    virtual const char_t* generate_prime_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_PRIME_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_PRIME_OPTARG;
        return chars;
    }
    virtual int on_pseudo_random_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_pseudo_random_number_run(argc, argv, env))) {
        }
        return err;
    }
    virtual const char_t* pseudo_random_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PSEUDO_RANDOM_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PSEUDO_RANDOM_OPTARG;
        return chars;
    }
    virtual int on_miller_rabin_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        set_miller_rabin_test();
        if (!(err = set_pseudo_random_prime_run(argc, argv, env))) {
            if (!(err = set_miller_rabin_pseudo_random_prime_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* miller_rabin_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MILLER_RABIN_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MILLER_RABIN_OPTARG;
        return chars;
    }
    virtual int on_fermat_witness_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        set_no_miller_rabin_test();
        if (!(err = set_pseudo_random_prime_run(argc, argv, env))) {
            if (!(err = set_default_pseudo_random_prime_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* fermat_witness_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_FERMAT_WITNESS_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_FERMAT_WITNESS_OPTARG;
        return chars;
    }

    /// ...on...option...
    virtual int on_set_modulus_bits_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_modulus_bits_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_modulus_bits_option(optarg, optind, argc, argv, env))) {
                if (!(err = set_output_modulus_bits_run(argc, argv, env))) {
                }
            }
        } else {
            if (!(err = set_output_modulus_bits_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* modulus_bits_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BITS_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BITS_OPTARG;
        return chars;
    }
    virtual int on_modulus_bytes_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
            if (!(err = set_output_modulus_bytes_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* modulus_bytes_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BYTES_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BYTES_OPTARG;
        return chars;
    }

    /// ...on...option...
    virtual int on_bn_integer_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_bn_generate_pseudo_random_prime_run(argc, argv, env))) {
            if (!(err = set_bn_miller_rabin_pseudo_random_prime_run(argc, argv, env))) {
                if (!(err = set_bn_pseudo_random_number_run(argc, argv, env))) {
                }
            }
        }
        if (!(err = set_bn_rsa_public_encrypt_run(argc, argv, env))) {
            if (!(err = set_bn_rsa_public_decrypt_run(argc, argv, env))) {
                if (!(err = set_bn_rsa_private_encrypt_run(argc, argv, env))) {
                    if (!(err = set_bn_rsa_private_decrypt_run(argc, argv, env))) {
                        if (!(err = set_bn_test_key_pair_run(argc, argv, env))) {
                            if (!(err = set_bn_output_test_rsa_public_cipher_run(argc, argv, env))) {
                                if (!(err = set_bn_output_get_rsa_public_cipher_run(argc, argv, env))) {
                                }
                            }
                        }
                    }
                }
            }
        }
        return err;
    }
    virtual const char_t* bn_integer_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_BN_INTEGER_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_BN_INTEGER_OPTARG;
        return chars;
    }
    virtual int on_gmp_integer_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_gmp_generate_pseudo_random_prime_run(argc, argv, env))) {
            if (!(err = set_gmp_miller_rabin_pseudo_random_prime_run(argc, argv, env))) {
                if (!(err = set_gmp_pseudo_random_number_run(argc, argv, env))) {
                }
            }
        }
        if (!(err = set_gmp_rsa_public_encrypt_run(argc, argv, env))) {
            if (!(err = set_gmp_rsa_public_decrypt_run(argc, argv, env))) {
                if (!(err = set_gmp_rsa_private_encrypt_run(argc, argv, env))) {
                    if (!(err = set_gmp_rsa_private_decrypt_run(argc, argv, env))) {
                        if (!(err = set_gmp_test_key_pair_run(argc, argv, env))) {
                            if (!(err = set_gmp_output_test_rsa_public_cipher_run(argc, argv, env))) {
                                if (!(err = set_gmp_output_get_rsa_public_cipher_run(argc, argv, env))) {
                                }
                            }
                        }
                    }
                }
            }
        }
        return err;
    }
    virtual const char_t* gmp_integer_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GMP_INTEGER_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GMP_INTEGER_OPTARG;
        return chars;
    }

    /// ...on...option...
    virtual int on_set_base64_option
    (int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_base64_output();
        return err;
    }
    virtual int on_set_Ox_hex_option
    (int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_const_0x_output();
        return err;
    }
    virtual int on_verbose_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_verbose(true);
        return err;
    }
    virtual const char_t* verbose_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_VERBOSE_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_VERBOSE_OPTARG;
        return chars;
    }
    virtual int on_quiet_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_verbose(false);
        return err;
    }
    virtual const char_t* quiet_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_QUIET_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_QUIET_OPTARG;
        return chars;
    }

    /// ...option...
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PLAIN_TEXT_OPTVAL_C:
            err = this->on_plain_text_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_CIPHER_TEXT_OPTVAL_C:
            err = this->on_cipher_text_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ENCRYPT_OPTVAL_C:
            err = this->on_encrypt_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_DECRYPT_OPTVAL_C:
            err = this->on_decrypt_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_TEST_OPTVAL_C:
            err = this->on_test_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_KEY_OPTVAL_C:
            err = this->on_generate_key_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PUBLIC_KEY_OPTVAL_C:
            err = this->on_public_key_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PRIVATE_KEY_OPTVAL_C:
            err = this->on_private_key_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_KEY_PAIR_OPTVAL_C:
            err = this->on_key_pair_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_PRIME_OPTVAL_C:
            err = this->on_generate_prime_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PSEUDO_RANDOM_OPTVAL_C:
            err = this->on_pseudo_random_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MILLER_RABIN_OPTVAL_C:
            err = this->on_miller_rabin_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_FERMAT_WITNESS_OPTVAL_C:
            err = this->on_fermat_witness_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BITS_OPTVAL_C:
            err = this->on_modulus_bits_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BYTES_OPTVAL_C:
            err = this->on_modulus_bytes_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_BN_INTEGER_OPTVAL_C:
            err = this->on_bn_integer_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GMP_INTEGER_OPTVAL_C:
            err = this->on_gmp_integer_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_VERBOSE_OPTVAL_C:
            err = this->on_verbose_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_QUIET_OPTVAL_C:
            err = this->on_quiet_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PLAIN_TEXT_OPTVAL_C:
            chars = this->plain_text_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_CIPHER_TEXT_OPTVAL_C:
            chars = this->cipher_text_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ENCRYPT_OPTVAL_C:
            chars = this->encrypt_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_DECRYPT_OPTVAL_C:
            chars = this->decrypt_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_TEST_OPTVAL_C:
            chars = this->test_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_KEY_OPTVAL_C:
            chars = this->generate_key_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PUBLIC_KEY_OPTVAL_C:
            chars = this->public_key_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PRIVATE_KEY_OPTVAL_C:
            chars = this->private_key_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_KEY_PAIR_OPTVAL_C:
            chars = this->key_pair_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GENERATE_PRIME_OPTVAL_C:
            chars = this->generate_prime_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_PSEUDO_RANDOM_OPTVAL_C:
            chars = this->pseudo_random_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MILLER_RABIN_OPTVAL_C:
            chars = this->miller_rabin_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_FERMAT_WITNESS_OPTVAL_C:
            chars = this->fermat_witness_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BITS_OPTVAL_C:
            chars = this->modulus_bits_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_MODULUS_BYTES_OPTVAL_C:
            chars = this->modulus_bytes_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_BN_INTEGER_OPTVAL_C:
            chars = this->bn_integer_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_GMP_INTEGER_OPTVAL_C:
            chars = this->gmp_integer_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_VERBOSE_OPTVAL_C:
            chars = this->verbose_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_QUIET_OPTVAL_C:
            chars = this->quiet_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

    /// ...key_..._define...
    virtual const char_t* key_pair_define_chars() const {
        string_t &key_pair_define = this->key_pair_define();
        return key_pair_define.chars();
    }
    virtual const char_t* public_key_define_chars() const {
        string_t &public_key_define = this->public_key_define();
        return public_key_define.chars();
    }
    virtual const char_t* private_key_define_chars() const {
        string_t &private_key_define = this->private_key_define();
        return private_key_define.chars();
    }
    virtual string_t &key_pair_define() const {
        return (string_t &)key_pair_define_;
    }
    virtual string_t &public_key_define() const {
        return (string_t &)public_key_define_;
    }
    virtual string_t &private_key_define() const {
        return (string_t &)private_key_define_;
    }

protected:
    bool no_miller_rabin_test_;
    string_t key_pair_define_, public_key_define_, private_key_define_; 
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace rsa
} /// namespace crypto
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_CRYPTO_RSA_MAIN_OPT_HPP
