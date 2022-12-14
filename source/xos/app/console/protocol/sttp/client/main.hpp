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
///   File: main.hpp
///
/// Author: $author$
///   Date: 9/21/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_STTP_CLIENT_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_STTP_CLIENT_MAIN_HPP

#include "xos/app/console/protocol/sttp/client/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace sttp {
namespace client {

/// class maint
template 
<class TOutput = xos::protocol::sttp::client::output,
 class TExtends = xos::app::console::protocol::sttp::client::main_optt<TOutput>, 
 class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint(): run_(0) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;
    typedef typename extends::output_t output_t;

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

    /// ...generate_client_hello_run
    virtual int generate_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        output.output_generate_client_hello();
        return err;
    }

    /// ...output_client_hello_message_run
    virtual int output_client_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        output.output_client_hello_messages();
        return err;
    }

    /// ...output_server_hello_message_run
    virtual int output_server_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        output.output_server_hello_messages();
        return err;
    }

    /// ...output_client_hello_message_plaintext_run
    virtual int output_client_hello_message_plaintext_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        output.output_client_hello_message_plaintext();
        return err;
    }

    /// ...output_client_hello_message_default_plaintext_run
    virtual int output_client_hello_message_default_plaintext_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        output.output_client_hello_message_default_plaintext();
        return err;
    }

    /// ...client_hello_option...
    virtual int on_set_client_hello_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            output_t& output = this->output(); 
            output.on_set_client_hello_message_option(optarg);
        } else {
        }
        return err;
    }

    /// ...client_hello_message_option...
    virtual int on_set_client_hello_message_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            output_t& output = this->output(); 
            output.on_set_client_hello_messages_option(optarg);
        } else {
        }
        return err;
    }

    /// ...server_hello_message_option...
    virtual int on_set_server_hello_message_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            output_t& output = this->output(); 
            output.on_set_server_hello_messages_option(optarg);
        } else {
        }
        return err;
    }

protected:
}; /// class maint
typedef maint<> main;

} /// namespace client
} /// namespace sttp
} /// namespace protocol
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_STTP_CLIENT_MAIN_HPP
