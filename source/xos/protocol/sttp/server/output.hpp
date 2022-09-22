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
#ifndef XOS_PROTOCOL_STTP_SERVER_OUTPUT_HPP
#define XOS_PROTOCOL_STTP_SERVER_OUTPUT_HPP

#include "xos/protocol/sttp/base/output.hpp"
#include "xos/protocol/sttp/plaintext/messages.hpp"

#include "xos/crypto/hash/implemented/sha256.hpp"
#include "xos/crypto/cipher/implemented/aes.hpp"

#include "xos/protocol/sttp/server/message/default_plain_text.hpp"

namespace xos {
namespace protocol {
namespace sttp {
namespace server {

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
    : expect_server_key_exchange_(true),
      expecting_server_key_exchange_(false),
      output_hello_message_(false),
      client_hello_messages_size_(0),
      server_hello_messages_size_(0),
      client_decipher_text_size_(cipher_text_size),
      default_plain_text_(message::default_plain_text),
      server_plain_text_(default_plain_text_) {
        construct();
    }
    virtual ~outputt() {
    }
private:
    outputt(const outputt& copy) {
        throw exception(exception_unexpected);
    }
    void construct() {
        client_hello_messages_.set_length(client_hello_messages_size_);
        client_decipher_text_.set_length(client_decipher_text_size_);
        server_hello_messages_.set_length(server_hello_messages_size_);
        encipher_text_.set_length(client_decipher_text_size_);
        security_parameters_.set_record_iv_length_value(record_iv_size);
    }
public:

    /// 
    /// ...output_server_message...plaintext...
    /// ...
    /// ...output_server_hello_message_plaintext
    virtual int output_server_hello_message_plaintext() {
        int err = 0;
        const bool verbose = this->verbose_output();
        literal_string_t& server_plain_text = this->server_plain_text();
        const char_t* chars = 0; size_t length = 0;

        if ((chars = server_plain_text.has_chars(length))) {
            if ((verbose)) {
                this->out("server_plain_text:\"");
            }
            this->out(chars, length);
            if ((verbose)) {
                this->outln("\"");
            }
        }
        return err;
    }
    /// ...output_server_hello_message_default_plaintext
    virtual int output_server_hello_message_default_plaintext() {
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
    /// ...
    /// ...output_server_message...plaintext...
    /// 

    /// ...expect..._server_key_exchange
    virtual bool& set_expect_client_key_exchange_only(const bool to = true) {
        return set_expect_server_key_exchange(!to);
    }
    virtual bool& set_expect_server_key_exchange(const bool to = true) {
        bool& expect_server_key_exchange = this->expect_server_key_exchange();
        expect_server_key_exchange = to;
        return expect_server_key_exchange;
    }
    virtual bool& expect_server_key_exchange() const {
        return (bool&)expect_server_key_exchange_;
    }
    virtual bool& set_expecting_server_key_exchange(const bool to = true) {
        bool& expecting_server_key_exchange = this->expecting_server_key_exchange();
        expecting_server_key_exchange = to;
        return expecting_server_key_exchange;
    }
    virtual bool& expecting_server_key_exchange() const {
        return (bool&)expecting_server_key_exchange_;
    }

    /// ...hello_messages...
    virtual plaintext_messages_t& client_hello_messages() const {
        return (plaintext_messages_t&)client_hello_messages_;
    }
    virtual size_t& client_chello_messages_size() const {
        return (size_t&)client_hello_messages_size_;
    }
    virtual literal_string_t& client_chello_messages_string() const {
        return (literal_string_t&)client_hello_messages_string_;
    }
    virtual plaintext_messages_t& server_hello_messages() const {
        return (plaintext_messages_t&)server_hello_messages_;
    }
    virtual size_t& server_chello_messages_size() const {
        return (size_t&)server_hello_messages_size_;
    }
    virtual literal_string_t& server_chello_messages_string() const {
        return (literal_string_t&)server_hello_messages_string_;
    }

    /// ...cipher_text...
    virtual byte_t* client_decipher_text_bytes(size_t& length) const {
        return client_decipher_text_.has_elements(length);
    }
    virtual byte_array_t& client_decipher_text() const {
        return (byte_array_t&)client_decipher_text_;
    }
    virtual size_t& client_decipher_text_size() const {
        return (size_t&)client_decipher_text_size_;
    }

    /// ...plain_text...
    virtual const char_t* default_plain_text_chars(size_t& length) const {
        const literal_string_t& default_plain_text = this->default_plain_text();
        return default_plain_text.has_chars(length);
    }
    virtual literal_string_t& default_plain_text() const {
        return (literal_string_t&)default_plain_text_;
    }
    virtual const char_t* client_plain_text_chars(size_t& length) const {
        const literal_string_t& client_plain_text = this->client_plain_text();
        return client_plain_text.has_chars(length);
    }
    virtual literal_string_t& client_plain_text() const {
        return (literal_string_t&)client_plain_text_;
    }
    virtual const char_t* server_plain_text_chars(size_t& length) const {
        const literal_string_t& server_plain_text = this->server_plain_text();
        return server_plain_text.has_chars(length);
    }
    virtual literal_string_t& server_plain_text() const {
        return (literal_string_t&)server_plain_text_;
    }

    /// client...
    virtual byte_array_t& client_hello_protocol_version() const {
        return (byte_array_t&)client_hello_protocol_version_;
    }
    virtual byte_array_t& client_hello_random() const {
        return (byte_array_t&)client_hello_random_;
    }
    virtual byte_array_t& client_pre_master_secret() const {
        return (byte_array_t&)client_pre_master_secret_;
    }
    virtual byte_array_t& server_pre_master_secret() const {
        return (byte_array_t&)server_pre_master_secret_;
    }

    /// ...
    virtual byte_array_t& encipher_text() const {
        return (byte_array_t&)encipher_text_;
    }
    virtual byte_array_t& cipher_text() const {
        return (byte_array_t&)cipher_text_;
    }
    virtual byte_array_t& write_MAC_key() const {
        return (byte_array_t&)write_MAC_key_;
    }
    virtual byte_array_t& write_key() const {
        return (byte_array_t&)write_key_;
    }
    virtual byte_array_t& write_IV() const {
        return (byte_array_t&)write_IV_;
    }
    
    /// security_parameters
    virtual security_parameters_t& security_parameters() const {
        return (security_parameters_t&)security_parameters_;
    }

    /// ...output_hello_message
    virtual bool& set_output_hello_message(const bool to = true) {
        bool& output_hello_message = this->output_hello_message();
        output_hello_message = to;
        return output_hello_message;
    }
    virtual bool& output_hello_message() const {
        return (bool&)output_hello_message_;
    }

protected:
    bool expect_server_key_exchange_, expecting_server_key_exchange_, output_hello_message_;

    size_t client_hello_messages_size_, client_decipher_text_size_, server_hello_messages_size_;
    
    literal_string_t client_hello_messages_string_, server_hello_messages_string_;
    
    plaintext_messages_t client_hello_messages_, server_hello_messages_;
    
    byte_array_t client_hello_protocol_version_, client_hello_random_, 
                 client_pre_master_secret_, server_pre_master_secret_, client_decipher_text_;

    literal_string_t default_plain_text_, client_plain_text_, server_plain_text_, literal_string_;
    
    byte_array_t encipher_text_, cipher_text_, literal_, 
                 master_secret_, write_MAC_key_, write_key_, write_IV_;

    security_parameters_t security_parameters_;
}; /// class outputt
typedef outputt<> output;

} /// namespace server
} /// namespace sttp
} /// namespace protocol
} /// namespace xos

#endif /// ndef XOS_PROTOCOL_STTP_SERVER_OUTPUT_HPP
