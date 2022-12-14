/* SCAPSignatureServiceSoapBindingProxy.h
   Generated by gSOAP 2.8.105 for SCAP-Services.h

gSOAP XML Web services tools
Copyright (C) 2000-2020, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef SCAPSignatureServiceSoapBindingProxy_H
#define SCAPSignatureServiceSoapBindingProxy_H
#include "SCAPH.h"

    class SOAP_CMAC SignatureServiceSoapBindingProxy {
      public:
        /// Context to manage proxy IO and data
        struct soap *soap;
        /// flag indicating that this context is owned by this proxy and should be deleted by the destructor
        bool soap_own;
        /// Endpoint URL of service 'SignatureServiceSoapBindingProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in SCAP-Services.h, if any
        /// Construct a proxy with new managing context
        SignatureServiceSoapBindingProxy();
        /// Copy constructor
        SignatureServiceSoapBindingProxy(const SignatureServiceSoapBindingProxy& rhs);
        /// Construct proxy given a shared managing context
        SignatureServiceSoapBindingProxy(struct soap*);
        /// Construct proxy given a shared managing context and endpoint URL
        SignatureServiceSoapBindingProxy(struct soap*, const char *soap_endpoint_url);
        /// Constructor taking an endpoint URL
        SignatureServiceSoapBindingProxy(const char *soap_endpoint_url);
        /// Constructor taking input and output mode flags for the new managing context
        SignatureServiceSoapBindingProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        SignatureServiceSoapBindingProxy(const char *soap_endpoint_url, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        SignatureServiceSoapBindingProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and its managing context, when the context was allocated by the constructor
        virtual ~SignatureServiceSoapBindingProxy();
        /// Initializer used by constructors
        virtual void SignatureServiceSoapBindingProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual SignatureServiceSoapBindingProxy *copy();
        /// Copy assignment
        SignatureServiceSoapBindingProxy& operator=(const SignatureServiceSoapBindingProxy&);
        /// Delete all deserialized data (uses soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to default
        virtual void reset();
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Add SOAP Header to message
        virtual void soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action);
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
        /// Web service synchronous operation 'Signature' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int Signature(_ns1__SignatureRequest *ns1__SignatureRequest, _ns1__SignatureResponse &ns1__SignatureResponse) { return this->Signature(NULL, NULL, ns1__SignatureRequest, ns1__SignatureResponse); }
        /// Web service synchronous operation 'Signature' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int Signature(const char *soap_endpoint_url, const char *soap_action, _ns1__SignatureRequest *ns1__SignatureRequest, _ns1__SignatureResponse &ns1__SignatureResponse) { return this->send_Signature(soap_endpoint_url, soap_action, ns1__SignatureRequest) || this->recv_Signature(ns1__SignatureResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_Signature' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_Signature(const char *soap_endpoint_url, const char *soap_action, _ns1__SignatureRequest *ns1__SignatureRequest);
        /// Web service asynchronous operation 'recv_Signature' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_Signature(_ns1__SignatureResponse &ns1__SignatureResponse);
    };
#endif