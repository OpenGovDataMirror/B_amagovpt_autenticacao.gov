/* soapBasicHttpBinding_USCORECCMovelSignatureProxy.h
   Generated by gSOAP 2.8.96 for CCMovelDigitalSignature.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef soapBasicHttpBinding_USCORECCMovelSignatureProxy_H
#define soapBasicHttpBinding_USCORECCMovelSignatureProxy_H
#include "soapH.h"

    class SOAP_CMAC BasicHttpBinding_USCORECCMovelSignatureProxy {
      public:
        /// Context to manage proxy IO and data
        struct soap *soap;
        /// flag indicating that this context is owned by this proxy and should be deleted by the destructor
        bool soap_own;
        /// Endpoint URL of service 'BasicHttpBinding_USCORECCMovelSignatureProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in CCMovelDigitalSignature.h, if any
        /// Construct a proxy with new managing context
        BasicHttpBinding_USCORECCMovelSignatureProxy();
        /// Copy constructor
        BasicHttpBinding_USCORECCMovelSignatureProxy(const BasicHttpBinding_USCORECCMovelSignatureProxy& rhs);
        /// Construct proxy given a shared managing context
        BasicHttpBinding_USCORECCMovelSignatureProxy(struct soap*);
        /// Construct proxy given a shared managing context and endpoint URL
        BasicHttpBinding_USCORECCMovelSignatureProxy(struct soap*, const char *soap_endpoint_url);
        /// Constructor taking an endpoint URL
        BasicHttpBinding_USCORECCMovelSignatureProxy(const char *soap_endpoint_url);
        /// Constructor taking input and output mode flags for the new managing context
        BasicHttpBinding_USCORECCMovelSignatureProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        BasicHttpBinding_USCORECCMovelSignatureProxy(const char *soap_endpoint_url, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        BasicHttpBinding_USCORECCMovelSignatureProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and its managing context, when the context was allocated by the constructor
        virtual ~BasicHttpBinding_USCORECCMovelSignatureProxy();
        /// Initializer used by constructors
        virtual void BasicHttpBinding_USCORECCMovelSignatureProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual BasicHttpBinding_USCORECCMovelSignatureProxy *copy();
        /// Copy assignment
        BasicHttpBinding_USCORECCMovelSignatureProxy& operator=(const BasicHttpBinding_USCORECCMovelSignatureProxy&);
        /// Delete all deserialized data (uses soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to default
        virtual void reset();
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Add SOAP Header to message
        virtual void soap_header(struct _wsse__Security *wsse__Security);
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
        /// Get SOAP Fault structure (i.e. soap->fault, which is NULL when absent)
        virtual ::SOAP_ENV__Fault *soap_fault();
        /// Get SOAP Fault subcode QName string (NULL when absent)
        virtual const char *soap_fault_subcode();
        /// Get SOAP Fault string/reason (NULL when absent)
        virtual const char *soap_fault_string();
        /// Get SOAP Fault detail XML string (NULL when absent)
        virtual const char *soap_fault_detail();
        /// Close connection (normally automatic, except for send_X ops)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Print fault
        virtual void soap_print_fault(FILE*);
    #ifndef WITH_LEAN
    #ifndef WITH_COMPAT
        /// Print fault to stream
        virtual void soap_stream_fault(std::ostream&);
    #endif
        /// Write fault to buffer
        virtual char *soap_sprint_fault(char *buf, size_t len);
    #endif
        //
        /// Web service synchronous operation 'CCMovelSign' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int CCMovelSign(_ns2__CCMovelSign *ns2__CCMovelSign, _ns2__CCMovelSignResponse &ns2__CCMovelSignResponse) { return this->CCMovelSign(NULL, NULL, ns2__CCMovelSign, ns2__CCMovelSignResponse); }
        /// Web service synchronous operation 'CCMovelSign' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int CCMovelSign(const char *soap_endpoint_url, const char *soap_action, _ns2__CCMovelSign *ns2__CCMovelSign, _ns2__CCMovelSignResponse &ns2__CCMovelSignResponse) { return this->send_CCMovelSign(soap_endpoint_url, soap_action, ns2__CCMovelSign) || this->recv_CCMovelSign(ns2__CCMovelSignResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_CCMovelSign' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_CCMovelSign(const char *soap_endpoint_url, const char *soap_action, _ns2__CCMovelSign *ns2__CCMovelSign);
        /// Web service asynchronous operation 'recv_CCMovelSign' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_CCMovelSign(_ns2__CCMovelSignResponse &ns2__CCMovelSignResponse);
        //
        /// Web service synchronous operation 'GetCertificate' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int GetCertificate(_ns2__GetCertificate *ns2__GetCertificate, _ns2__GetCertificateResponse &ns2__GetCertificateResponse) { return this->GetCertificate(NULL, NULL, ns2__GetCertificate, ns2__GetCertificateResponse); }
        /// Web service synchronous operation 'GetCertificate' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int GetCertificate(const char *soap_endpoint_url, const char *soap_action, _ns2__GetCertificate *ns2__GetCertificate, _ns2__GetCertificateResponse &ns2__GetCertificateResponse) { return this->send_GetCertificate(soap_endpoint_url, soap_action, ns2__GetCertificate) || this->recv_GetCertificate(ns2__GetCertificateResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_GetCertificate' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_GetCertificate(const char *soap_endpoint_url, const char *soap_action, _ns2__GetCertificate *ns2__GetCertificate);
        /// Web service asynchronous operation 'recv_GetCertificate' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_GetCertificate(_ns2__GetCertificateResponse &ns2__GetCertificateResponse);
        //
        /// Web service synchronous operation 'ValidateOtp' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int ValidateOtp(_ns2__ValidateOtp *ns2__ValidateOtp, _ns2__ValidateOtpResponse &ns2__ValidateOtpResponse) { return this->ValidateOtp(NULL, NULL, ns2__ValidateOtp, ns2__ValidateOtpResponse); }
        /// Web service synchronous operation 'ValidateOtp' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int ValidateOtp(const char *soap_endpoint_url, const char *soap_action, _ns2__ValidateOtp *ns2__ValidateOtp, _ns2__ValidateOtpResponse &ns2__ValidateOtpResponse) { return this->send_ValidateOtp(soap_endpoint_url, soap_action, ns2__ValidateOtp) || this->recv_ValidateOtp(ns2__ValidateOtpResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_ValidateOtp' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_ValidateOtp(const char *soap_endpoint_url, const char *soap_action, _ns2__ValidateOtp *ns2__ValidateOtp);
        /// Web service asynchronous operation 'recv_ValidateOtp' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_ValidateOtp(_ns2__ValidateOtpResponse &ns2__ValidateOtpResponse);
        //
        /// Web service synchronous operation 'CCMovelMultipleSign' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int CCMovelMultipleSign(_ns2__CCMovelMultipleSign *ns2__CCMovelMultipleSign, _ns2__CCMovelMultipleSignResponse &ns2__CCMovelMultipleSignResponse) { return this->CCMovelMultipleSign(NULL, NULL, ns2__CCMovelMultipleSign, ns2__CCMovelMultipleSignResponse); }
        /// Web service synchronous operation 'CCMovelMultipleSign' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int CCMovelMultipleSign(const char *soap_endpoint_url, const char *soap_action, _ns2__CCMovelMultipleSign *ns2__CCMovelMultipleSign, _ns2__CCMovelMultipleSignResponse &ns2__CCMovelMultipleSignResponse) { return this->send_CCMovelMultipleSign(soap_endpoint_url, soap_action, ns2__CCMovelMultipleSign) || this->recv_CCMovelMultipleSign(ns2__CCMovelMultipleSignResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_CCMovelMultipleSign' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_CCMovelMultipleSign(const char *soap_endpoint_url, const char *soap_action, _ns2__CCMovelMultipleSign *ns2__CCMovelMultipleSign);
        /// Web service asynchronous operation 'recv_CCMovelMultipleSign' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_CCMovelMultipleSign(_ns2__CCMovelMultipleSignResponse &ns2__CCMovelMultipleSignResponse);
        //
        /// Web service synchronous operation 'ForceSMS' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int ForceSMS(_ns2__ForceSMS *ns2__ForceSMS, _ns2__ForceSMSResponse &ns2__ForceSMSResponse) { return this->ForceSMS(NULL, NULL, ns2__ForceSMS, ns2__ForceSMSResponse); }
        /// Web service synchronous operation 'ForceSMS' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int ForceSMS(const char *soap_endpoint_url, const char *soap_action, _ns2__ForceSMS *ns2__ForceSMS, _ns2__ForceSMSResponse &ns2__ForceSMSResponse) { return this->send_ForceSMS(soap_endpoint_url, soap_action, ns2__ForceSMS) || this->recv_ForceSMS(ns2__ForceSMSResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_ForceSMS' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_ForceSMS(const char *soap_endpoint_url, const char *soap_action, _ns2__ForceSMS *ns2__ForceSMS);
        /// Web service asynchronous operation 'recv_ForceSMS' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_ForceSMS(_ns2__ForceSMSResponse &ns2__ForceSMSResponse);
        //
        /// Web service synchronous operation 'GetCertificateWithPin' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int GetCertificateWithPin(_ns2__GetCertificateWithPin *ns2__GetCertificateWithPin, _ns2__GetCertificateWithPinResponse &ns2__GetCertificateWithPinResponse) { return this->GetCertificateWithPin(NULL, NULL, ns2__GetCertificateWithPin, ns2__GetCertificateWithPinResponse); }
        /// Web service synchronous operation 'GetCertificateWithPin' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int GetCertificateWithPin(const char *soap_endpoint_url, const char *soap_action, _ns2__GetCertificateWithPin *ns2__GetCertificateWithPin, _ns2__GetCertificateWithPinResponse &ns2__GetCertificateWithPinResponse) { return this->send_GetCertificateWithPin(soap_endpoint_url, soap_action, ns2__GetCertificateWithPin) || this->recv_GetCertificateWithPin(ns2__GetCertificateWithPinResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_GetCertificateWithPin' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_GetCertificateWithPin(const char *soap_endpoint_url, const char *soap_action, _ns2__GetCertificateWithPin *ns2__GetCertificateWithPin);
        /// Web service asynchronous operation 'recv_GetCertificateWithPin' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_GetCertificateWithPin(_ns2__GetCertificateWithPinResponse &ns2__GetCertificateWithPinResponse);
    };
#endif