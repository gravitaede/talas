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
///   File: output.hpp
///
/// Author: $author$
///   Date: 9/21/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_PROTOCOL_TLS_CRYPTO_OUTPUT_HPP
#define XOS_PROTOCOL_TLS_CRYPTO_OUTPUT_HPP

#include "xos/io/protocol/crypto/output.hpp"
#include "xos/protocol/tls/array.hpp"

namespace xos {
namespace protocol {
namespace tls {
namespace crypto {

/// class outputt
template 
<class TLiteralString = xos::base::string, 
 class TByteArray = xos::protocol::tls::byte_array_t, 
 class TByteArrays = xos::protocol::tls::byte_arrays_t,
 class TExtendsOutput = xos::io::protocol::crypto::outputt<TLiteralString, TByteArray, TByteArrays>, 
 class TExtends = TExtendsOutput, class TImplements = typename TExtends::implements>

class exported outputt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef outputt derives; 
    
    /// constructors / destructor
    outputt() {
    }
    virtual ~outputt() {
    }
private:
    outputt(const outputt& copy) {
    }
public:

protected:
}; /// class outputt
typedef outputt<> output;

} /// namespace crypto
} /// namespace tls
} /// namespace protocol
} /// namespace xos

#endif /// ndef XOS_PROTOCOL_TLS_CRYPTO_OUTPUT_HPP
