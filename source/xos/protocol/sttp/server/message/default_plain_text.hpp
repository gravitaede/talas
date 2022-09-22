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
///   File: default_plain_text.hpp
///
/// Author: $author$
///   Date: 9/19/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_PROTOCOL_STTP_SERVER_MESSAGE_DEFAULT_PLAIN_TEXT_HPP
#define XOS_PROTOCOL_STTP_SERVER_MESSAGE_DEFAULT_PLAIN_TEXT_HPP

#include "xos/base/base.hpp"

namespace xos {
namespace protocol {
namespace sttp {
namespace server {
namespace message {

static const char default_plain_text[] 
= "" \
  "libtatalas version = libtatalas-0.0.0-9/18/2022\n" \
  "\n" \
  "Usage: sttpd [options]\n" \
  "\n" \
  "Options:\n" \
  " -h --hello-message [string]  hello message\n" \
  " -c --client-hello [string]  client hello\n" \
  " -s --server-hello [string]  server hello\n" \
  " -y --client-key-exchange-only\n" \
  " -k --server-rsa-key-pair [string]  server rsa key pair\n" \
  " -r --client-rsa-key-pair [string]  client rsa key pair\n" \
  " -t --pseudo-random-secret [string]  pseudo random secret\n" \
  " -e --pseudo-random-seed [string]  pseudo random seed\n" \
  " -m --master-secret-seed [string]  master secret seed\n" \
  " -x --key-expansion-seed [string]  key expansion seed\n" \
  " -f --file-input  input from literal file\n" \
  " -i --string-input  input from literal string\n" \
  " -v --verbose  verbose output\n" \
  " -q --quiet  quiet output\n" \
  " -l --logging-level { (a)all | (n)none | (f)fatal | (e)error | (w)waring | (i)info | (d)debug | (t)trace }\n" \
  " -u --usage  Usage options\n" \
  "";

} /// namespace message
} /// namespace server
} /// namespace sttp
} /// namespace protocol
} /// namespace xos

#endif /// ndef XOS_PROTOCOL_STTP_SERVER_MESSAGE_DEFAULT_PLAIN_TEXT_HPP
