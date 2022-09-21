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
///   Date: 9/19/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_CRYPTO_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_CRYPTO_MAIN_HPP

#include "xos/app/console/protocol/crypto/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace crypto {

/// class maint
template 
<class TOutput = xos::io::protocol::crypto::output, 
 class TExtends = xos::app::console::protocol::crypto::main_opt, 
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
    maint(): run_(0), verbose_output_(false) {
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

    typedef TOutput output_t;
    typedef typename output_t::literal_string_t literal_string_t;
    typedef typename output_t::byte_array_t byte_array_t;
    typedef typename output_t::byte_arrays_t byte_arrays_t;
    typedef typename output_t::hex_read_to_byte_array_t hex_read_to_byte_array_t;
    typedef typename output_t::hex_read_to_byte_arrays_t hex_read_to_byte_arrays_t;

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

    /// ...output_hex_run
    virtual int output_hex_run(const byte_array_t &array, int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.output_hex(array);
        return err;
    }
    virtual int before_output_hex_run(byte_array_t &array, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_hex_run(byte_array_t &array, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_hex_run(byte_array_t &array, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_hex_run(array, argc, argv, env))) {
            int err2 = 0;
            err = output_hex_run(array, argc, argv, env);
            if ((err2 = after_output_hex_run(array, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set...text_literal
    virtual int on_set_text_literal(byte_array_t &array, literal_string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.on_set_text_literal(array, literal);
        return err;
    }
    virtual int set_string_on_set_text_literal(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.set_string_on_set_text_literal();
        return err;
    }
    virtual int set_file_on_set_text_literal(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.set_file_on_set_text_literal();
        return err;
    }

    /// ...set...hex_literal
    virtual int on_set_hex_literal(byte_array_t &array, literal_string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.on_set_hex_literal(array, literal);
        return err;
    }
    virtual int set_string_on_set_hex_literal(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.set_string_on_set_hex_literal();
        return err;
    }
    virtual int set_file_on_set_hex_literal(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.set_file_on_set_hex_literal();
        return err;
    }

    /// ...set...hex_literal_arrays
    virtual int on_set_hex_literal_arrays(byte_arrays_t &arrays, literal_string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.on_set_hex_literal_arrays(arrays, literal);
        return err;
    }
    virtual int set_string_on_set_hex_literal_arrays(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.set_string_on_set_hex_literal_arrays();
        return err;
    }
    virtual int set_file_on_set_hex_literal_arrays(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.set_file_on_set_hex_literal_arrays();
        return err;
    }

    /// ...set...hex_literals
    virtual int on_set_hex_literals
    (hex_read_to_byte_arrays_t &to_arrays, literal_string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.on_set_hex_literals(to_arrays, literal);
        return err;
    }
    virtual int set_string_on_set_hex_literals(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.set_string_on_set_hex_literals();
        return err;
    }
    virtual int set_file_on_set_hex_literals(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.set_file_on_set_hex_literals();
        return err;
    }

    /// set...on_set_hex_literals
    virtual int set_file_on_set_literals() {
        int err = 0;
        output_t& output = this->output();
        output.set_file_on_set_literals();
        return err;
    }
    virtual int set_string_on_set_literals() {
        int err = 0;
        output_t& output = this->output();
        output.set_string_on_set_literals();
        return err;
    }

    /// on_set_hex_literals
    virtual int on_set_hex_literals
    (byte_array_t &a1, byte_array_t &a2, 
     literal_string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.on_set_hex_literals(a1, a2, literal);
        return err;
    }
    virtual int on_set_hex_literals
    (byte_array_t &a1, byte_array_t &a2, byte_array_t &a3, 
     literal_string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.on_set_hex_literals(a1, a2, a3, literal);
        return err;
    }
    virtual int on_set_hex_literals
    (byte_array_t &a1, byte_array_t &a2, 
     byte_array_t &a3, byte_array_t &a4, 
     literal_string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.on_set_hex_literals(a1, a2, a3, a4, literal);
        return err;
    }
    virtual int on_set_hex_literals
    (byte_array_t &a1, byte_array_t &a2, 
     byte_array_t &a3, byte_array_t &a4, byte_array_t &a5, 
     literal_string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.on_set_hex_literals(a1, a2, a3, a4, a5, literal);
        return err;
    }
    virtual int on_set_hex_literals
    (byte_array_t &a1, byte_array_t &a2, 
     byte_array_t &a3, byte_array_t &a4, 
     byte_array_t &a5, byte_array_t &a6, 
     literal_string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.on_set_hex_literals(a1, a2, a3, a4, a5, a6, literal);
        return err;
    }
    virtual int on_set_hex_literals
    (byte_array_t &a1, byte_array_t &a2, 
     byte_array_t &a3, byte_array_t &a4, 
     byte_array_t &a5, byte_array_t &a6, byte_array_t &a7, 
     literal_string_t &literal, int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output();
        output.on_set_hex_literals(a1, a2, a3, a4, a5, a6, a7, literal);
        return err;
    }

    /// ...file_input_option...
    virtual int on_set_file_input_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        set_file_on_set_literals();
        return err;
    }

    /// ...string_input_option...
    virtual int on_set_string_input_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        set_string_on_set_literals();
        return err;
    }

    /// ...verbose_option...
    virtual int on_set_verbose_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        set_verbose_output(true);
        return err;
    }

    /// ...quiet_option...
    virtual int on_set_quiet_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        set_verbose_output(false);
        return err;
    }

    /// ...output
    virtual bool& set_verbose_output(const bool& to) {
        output_t& output = this->output();
        bool& verbose_output = this->verbose_output();
        verbose_output = output.set_verbose_output(to);
        return verbose_output;
    }
    virtual bool& verbose_output() const {
        output_t& output = this->output();
        bool& verbose_output = output.verbose_output();
        return (bool&)verbose_output;
    }
    virtual output_t& output() const {
        return (output_t&)output_;
    }

protected:
    bool verbose_output_;
    output_t output_;
}; /// class maint
typedef maint<> main;

} /// namespace crypto
} /// namespace protocol
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_CRYPTO_MAIN_HPP
