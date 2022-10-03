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
///   Date: 9/26/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HPP

#include "xos/app/console/network/sockets/protocol/sttpnet/client/main_opt.hpp"
#include "xos/io/string/output.hpp"

namespace xos {
namespace app {
namespace console {
namespace network {
namespace sockets {
namespace protocol {
namespace sttpnet {
namespace client {

/// class maint
template 
<class TStringOutput = xos::io::string::output,
 class TExtends = xos::app::console::network::sockets::protocol::sttpnet::client::main_opt, 
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
    typedef typename extends::output_to_t output_to_t;
    typedef TStringOutput string_output_t;

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

    /// ...this_sockets_run
    virtual int this_sockets_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::all_sockets_run(argc, argv, env))) {
        }
        return err;
    }
    virtual int set_this_sockets_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::this_sockets_run;
        return err;
    }
    virtual int on_set_sockets_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::on_set_sockets_run(argc, argv, env))) {
            if (!(err = set_this_sockets_run(argc, argv, env))) {
            }
        }
        return err;
    }

    ///
    /// ...prepare_request
    /// ...
    int (derives::*prepare_request_)(string_t& request, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env);
    virtual int prepare_request(string_t& request, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (prepare_request_) {
            err = (this->*prepare_request_)(request, cn, argc, argv, env);
        } else {
            err = extends::prepare_request(request, cn, argc, argv, env);
        }
        return err;
    }
    virtual int generate_client_hello_prepare_request(string_t& request, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        const bool verbose_output = this->verbose_output();
        output_t &output = this->output();
        const string_t& endof_content_string = this->endof_content_string();
        string_t& content_string = this->content_string();
        string_output_t string_output(content_string);
        const bool old_verbose_output = output.verbose_output();
        output_to_t* old_output = output.set_output_to(&string_output);

        content_string.clear();
        output.set_verbose_output(verbose_output);
        LOGGER_IS_LOGGED_INFO("output.output_generate_client_hello()...");
        if (!(err = output.output_generate_client_hello())) {
            const char_t* chars = 0; size_t length = 0;
            
            if ((chars = content_string.has_chars(length))) {
                LOGGER_IS_LOGGED_INFO("request.assign(chars = \"" << chars << "\", length = " << unsigned_to_string(length) << ")...");
                request.assign(chars, length);
                request.append(endof_content_string);
            }
        }
        output.set_verbose_output(old_verbose_output);
        output.set_output_to(old_output);
        return err;
    }
    virtual int set_generate_client_hello_prepare_request(int argc, char_t** argv, char_t** env) {
        int err = 0;
        prepare_request_ = &derives::generate_client_hello_prepare_request;
        return err;
    }
    /// ...
    /// ...prepare_request
    /// 

    ///
    /// ...process_response
    /// ...
    int (derives::*process_response_)(string_t& response, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env);
    virtual int process_response(string_t& response, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (process_response_) {
            err = (this->*process_response_)(response, cn, argc, argv, env);
        } else {
            err = extends::process_response(response, cn, argc, argv, env);
        }
        return err;
    }
    virtual int generate_client_hello_process_response(string_t& response, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        const char_t* chars = 0; size_t length = 0;
        
        if ((chars = response.has_chars(length))) {
            const bool verbose_output = this->verbose_output();
            output_t &output = this->output();
            const bool old_verbose_output = output.verbose_output();
    
            output.set_verbose_output(verbose_output);
            output.set_string_on_set_literals();
            LOGGER_IS_LOGGED_INFO("output.on_set_server_hello_messages_option(chars = \"" << chars << "\", length = " << unsigned_to_string(length) << ")...");
            if (!(err = output.on_set_server_hello_messages_option(chars, length))) {

                if ((output.server_hello_messages_has_elements(length))) {
                    string_t& content_string = this->content_string();

                    LOGGER_IS_LOGGED_INFO("...output.server_hello_messages_has_elements(length = " << unsigned_to_string(length) << ")");
                    if ((chars = content_string.has_chars(length))) {

                        LOGGER_IS_LOGGED_INFO("output.on_set_client_hello_messages_option(chars = \"" << chars << "\", length = " << unsigned_to_string(length) << ")...");
                        if (!(err = output.on_set_client_hello_messages_option(chars, length))) {
                            
                            if ((output.client_hello_messages_has_elements(length))) {
                                string_output_t string_output(content_string);
                                output_to_t* old_output = output.set_output_to(&string_output);
        
                                LOGGER_IS_LOGGED_INFO("...output.client_hello_messages_has_elements(length = " << unsigned_to_string(length) << ")");
                                content_string.clear();
                                if (!(err = output.output_server_hello_messages())) {

                                    if ((chars = content_string.has_chars(length))) {
                                        this->out(chars, length);
                                    }
                                }
                                output.set_output_to(old_output);
                            }
                        }
                    }
                }
            }
            output.set_verbose_output(old_verbose_output);
        }
        return err;
    }
    virtual int set_generate_client_hello_process_response(int argc, char_t** argv, char_t** env) {
        int err = 0;
        process_response_ = &derives::generate_client_hello_process_response;
        return err;
    }
    /// ...
    /// ...process_response
    /// 

    /// on_set_output_generate_client_hello_run
    virtual int on_set_output_generate_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::on_set_output_generate_client_hello_run(argc, argv, env))) {
            if (!(err = set_generate_client_hello_prepare_request(argc, argv, env))) {
                if (!(err = set_generate_client_hello_process_response(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }

    /// 
    /// ...output...client_hello...run
    /// ...
    /// ...output_client_hello_message_run
    virtual int output_client_hello_message_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        output.output_client_hello_message_plaintext();
        return err;
    }
    /// ...output_generate_client_hello_run
    virtual int output_generate_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        output.output_generate_client_hello();
        return err;
    }
    /// ...output_client_hello_run
    virtual int output_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        output.output_client_hello_messages();
        return err;
    }
    /// ...output_server_hello_run
    virtual int output_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        output.output_server_hello_messages();
        return err;
    }
    /// ...
    /// ...output...client_hello...run
    /// 

    ///
    /// ...option...
    /// ...
    /// ...hello_message_option...
    virtual int on_set_hello_message_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            output_t& output = this->output(); 
            if (!(err = output.on_set_client_hello_message_option(optarg))) {
            }
        } else {
        }
        return err;
    }

    /// ...client_hello_option...
    virtual int on_set_client_hello_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            output_t& output = this->output(); 
            if (!(err = output.on_set_client_hello_messages_option(optarg))) {
            }
        } else {
        }
        return err;
    }

    /// ...server_hello_option...
    virtual int on_set_server_hello_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            output_t& output = this->output(); 
            if (!(err = output.on_set_server_hello_messages_option(optarg))) {
            }
        } else {
        }
        return err;
    }

    /// ...file_input_option...
    virtual int on_file_input_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = extends::on_file_input_option_set(optarg, optind, argc, argv, env))) {
            output_t& output = this->output(); 
            output.set_file_on_set_literals();
        }
        return err;
    }

    /// ...string_input_option...
    virtual int on_string_input_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = extends::on_string_input_option_set(optarg, optind, argc, argv, env))) {
            output_t& output = this->output(); 
            output.set_string_on_set_literals();
        }
        return err;
    }
    
    /// ...verbose_option...
    virtual int on_verbose_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = extends::on_verbose_option_set(optarg, optind, argc, argv, env))) {
            this->set_verbose_output(true);
        }
        return err;
    }
    /// ...
    /// ...option...
    /// 

protected:
}; /// class maint
typedef maint<> main;

} /// namespace client
} /// namespace sttpnet
} /// namespace protocol
} /// namespace sockets
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTPNET_CLIENT_MAIN_HPP
