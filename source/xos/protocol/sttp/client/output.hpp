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
///   Date: 9/19/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_PROTOCOL_STTP_CLIENT_OUTPUT_HPP
#define XOS_PROTOCOL_STTP_CLIENT_OUTPUT_HPP

#include "xos/protocol/sttp/base/output.hpp"
#include "xos/protocol/sttp/plaintext/messages.hpp"

#include "xos/crypto/hash/implemented/sha256.hpp"
#include "xos/crypto/cipher/implemented/aes.hpp"

#include "xos/protocol/sttp/client/message/default_plain_text.hpp"

namespace xos {
namespace protocol {
namespace sttp {
namespace client {

/// class outputt
template 
<class TPlaintextMessages = xos::protocol::sttp::plaintext::messages,
 class TSecurityParameters = xos::protocol::tls::security::parameters, 
 class TExtendsOutput = xos::protocol::sttp::base::output, 
 class TExtends = TExtendsOutput, class TImplements = typename TExtends::implements>
class exported outputt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef outputt derives; 
    
    typedef typename extends::output_to_t output_to_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };

    typedef char_t what_t;
    typedef char_t sized_t;

    typedef typename extends::literal_string_t literal_string_t;
    typedef typename extends::byte_array_t byte_array_t;
    typedef TPlaintextMessages plaintext_messages_t;
    typedef TSecurityParameters security_parameters_t;

    enum { cipher_text_size = sttp::cipher_text_size };
    enum { record_iv_size = xos::crypto::cipher::aes::IVSIZE };

    /// constructors / destructor
    outputt()
    : generate_server_key_exchange_(true),
      expecting_server_key_exchange_(false),
      output_hello_message_(false),
      client_cipher_text_size_(cipher_text_size),
      client_decipher_text_size_(client_cipher_text_size_),
      server_decipher_text_size_(client_cipher_text_size_),
      default_plain_text_(message::default_plain_text),
      client_plain_text_(default_plain_text_) {
        construct();
    }
    virtual ~outputt() {
    }
private:
    outputt(const outputt& copy) {
        throw exception(exception_unexpected);
    }
    void construct() {
        client_cipher_text_.set_length(client_cipher_text_size_);
        client_decipher_text_.set_length(client_decipher_text_size_);
        server_decipher_text_.set_length(server_decipher_text_size_);
        client_hello_messages_.set_length(0);
        server_hello_messages_.set_length(0);
        security_parameters_.set_record_iv_length_value(record_iv_size);
    }
public:

    /// ...output_client_hello_message_default_plaintext
    virtual int output_client_hello_message_default_plaintext() {
        int err = 0;
        const bool verbose = this->verbose_output();
        literal_string_t& default_plain_text = this->default_plain_text();
        const char_t* chars = 0; size_t length = 0;

        if ((chars = default_plain_text.has_chars(length))) {
            if ((verbose)) {
                this->out("default_plain_text:\"");
            }
            this->out(chars, length);
            if ((verbose)) {
                this->outln("\"");
            }
        }
        return err;
    }

    /// default...
    virtual const char_t* default_plain_text_chars(size_t& length) const {
        const literal_string_t& default_plain_text = this->default_plain_text();
        return default_plain_text.has_chars(length);
    }
    virtual literal_string_t& default_plain_text() const {
        return (literal_string_t&)default_plain_text_;
    }

protected:
    bool generate_server_key_exchange_, expecting_server_key_exchange_, output_hello_message_;
    
    size_t client_cipher_text_size_, client_decipher_text_size_, server_decipher_text_size_;

    literal_string_t default_plain_text_, client_plain_text_, server_plain_text_, 
                     client_hello_messages_string_, server_hello_messages_string_, literal_string_;

    byte_array_t client_cipher_text_, client_decipher_text_, server_decipher_text_, literal_;

    plaintext_messages_t client_hello_messages_, server_hello_messages_;
    
    byte_array_t client_hello_protocol_version_, client_hello_random_, client_pre_master_secret_,
                 server_pre_master_secret_, write_MAC_key_, write_key_, write_IV_;
    
    security_parameters_t security_parameters_;
}; /// class outputt
typedef outputt<> output;

} /// namespace client
} /// namespace sttp
} /// namespace protocol
} /// namespace xos

#endif /// ndef XOS_PROTOCOL_STTP_CLIENT_OUTPUT_HPP
