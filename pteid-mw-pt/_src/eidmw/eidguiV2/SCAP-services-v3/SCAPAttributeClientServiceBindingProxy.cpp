/* SCAPAttributeClientServiceBindingProxy.cpp
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

#include "SCAPAttributeClientServiceBindingProxy.h"

AttributeClientServiceBindingProxy::AttributeClientServiceBindingProxy()
{	this->soap = soap_new();
	this->soap_own = true;
	AttributeClientServiceBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

AttributeClientServiceBindingProxy::AttributeClientServiceBindingProxy(const AttributeClientServiceBindingProxy& rhs)
{	this->soap = rhs.soap;
	this->soap_own = false;
	this->soap_endpoint = rhs.soap_endpoint;
}

AttributeClientServiceBindingProxy::AttributeClientServiceBindingProxy(struct soap *_soap)
{	this->soap = _soap;
	this->soap_own = false;
	AttributeClientServiceBindingProxy_init(_soap->imode, _soap->omode);
}

AttributeClientServiceBindingProxy::AttributeClientServiceBindingProxy(struct soap *_soap, const char *soap_endpoint_url)
{	this->soap = _soap;
	this->soap_own = false;
	AttributeClientServiceBindingProxy_init(_soap->imode, _soap->omode);
	soap_endpoint = soap_endpoint_url;
}

AttributeClientServiceBindingProxy::AttributeClientServiceBindingProxy(const char *soap_endpoint_url)
{	this->soap = soap_new();
	this->soap_own = true;
	AttributeClientServiceBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = soap_endpoint_url;
}

AttributeClientServiceBindingProxy::AttributeClientServiceBindingProxy(soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	AttributeClientServiceBindingProxy_init(iomode, iomode);
}

AttributeClientServiceBindingProxy::AttributeClientServiceBindingProxy(const char *soap_endpoint_url, soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	AttributeClientServiceBindingProxy_init(iomode, iomode);
	soap_endpoint = soap_endpoint_url;
}

AttributeClientServiceBindingProxy::AttributeClientServiceBindingProxy(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->soap_own = true;
	AttributeClientServiceBindingProxy_init(imode, omode);
}

AttributeClientServiceBindingProxy::~AttributeClientServiceBindingProxy()
{	if (this->soap_own)
	{	this->destroy();
		soap_free(this->soap);
	}
}

void AttributeClientServiceBindingProxy::AttributeClientServiceBindingProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] = {
        { "SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://www.w3.org/*/soap-envelope", NULL },
        { "SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://www.w3.org/*/soap-encoding", NULL },
        { "xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL },
        { "xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL },
        { "ns4", "http://www.cartaodecidadao.pt/ccc/commons/messages/Types", NULL, NULL },
        { "ns11", "http://www.cartaodecidadao.pt/ccc/commons/messages/TypesAttributeManagment", NULL, NULL },
        { "ns5", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL },
        { "ns3", "http://www.cartaodecidadao.pt/ccc/commons/messages/Attribute", NULL, NULL },
        { "ns6", "http://uri.etsi.org/01903/v1.3.2#", NULL, NULL },
        { "ns7", "http://www.cartaodecidadao.pt/ccc/commons/messages/SVG", NULL, NULL },
        { "wsa", "http://schemas.xmlsoap.org/ws/2004/08/addressing", "http://www.w3.org/2005/08/addressing", NULL },
        { "ns10", "http://www.cartaodecidadao.pt/ccc/sccc/services/AttributeClientService", NULL, NULL },
        { "ns2", "http://www.cartaodecidadao.pt/ccc/sccc/messages/AttributeClientService", NULL, NULL },
        { "ns1", "http://www.cartaodecidadao.pt/ccc/tipos/SCAPSignature", NULL, NULL },
        { "ns9", "http://www.cartaodecidadao.pt/ccc/sccc/messages/AttributeSupplierService", NULL, NULL },
        { "ns8", "http://www.cartaodecidadao.pt/ccc/sccc/services/AttributeSupplierService", NULL, NULL },
        { NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this->soap, namespaces);
}

AttributeClientServiceBindingProxy *AttributeClientServiceBindingProxy::copy()
{	AttributeClientServiceBindingProxy *dup = SOAP_NEW_UNMANAGED(AttributeClientServiceBindingProxy);
	if (dup)
	{	soap_done(dup->soap);
		soap_copy_context(dup->soap, this->soap);
	}
	return dup;
}

AttributeClientServiceBindingProxy& AttributeClientServiceBindingProxy::operator=(const AttributeClientServiceBindingProxy& rhs)
{	if (this->soap != rhs.soap)
	{	if (this->soap_own)
			soap_free(this->soap);
		this->soap = rhs.soap;
		this->soap_own = false;
		this->soap_endpoint = rhs.soap_endpoint;
	}
	return *this;
}

void AttributeClientServiceBindingProxy::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void AttributeClientServiceBindingProxy::reset()
{	this->destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	AttributeClientServiceBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void AttributeClientServiceBindingProxy::soap_noheader()
{	this->soap->header = NULL;
}

void AttributeClientServiceBindingProxy::soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action)
{
	::soap_header(this->soap);
	this->soap->header->wsa__MessageID = wsa__MessageID;
	this->soap->header->wsa__RelatesTo = wsa__RelatesTo;
	this->soap->header->wsa__From = wsa__From;
	this->soap->header->wsa__ReplyTo = wsa__ReplyTo;
	this->soap->header->wsa__FaultTo = wsa__FaultTo;
	this->soap->header->wsa__To = wsa__To;
	this->soap->header->wsa__Action = wsa__Action;
}

::SOAP_ENV__Header *AttributeClientServiceBindingProxy::soap_header()
{	return this->soap->header;
}

::SOAP_ENV__Fault *AttributeClientServiceBindingProxy::soap_fault()
{	return this->soap->fault;
}

const char *AttributeClientServiceBindingProxy::soap_fault_subcode()
{	return ::soap_fault_subcode(this->soap);
}

const char *AttributeClientServiceBindingProxy::soap_fault_string()
{	return ::soap_fault_string(this->soap);
}

const char *AttributeClientServiceBindingProxy::soap_fault_detail()
{	return ::soap_fault_detail(this->soap);
}

int AttributeClientServiceBindingProxy::soap_close_socket()
{	return ::soap_closesock(this->soap);
}

int AttributeClientServiceBindingProxy::soap_force_close_socket()
{	return ::soap_force_closesock(this->soap);
}

void AttributeClientServiceBindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void AttributeClientServiceBindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *AttributeClientServiceBindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

int AttributeClientServiceBindingProxy::send_Attributes(const char *soap_endpoint_url, const char *soap_action, ns2__AttributeRequestType *ns2__AttributeRequest)
{
	struct __ns10__Attributes soap_tmp___ns10__Attributes;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://scap.autenticacao.gov.pt/DSS/ACService";
	if (soap_action == NULL)
		soap_action = "http://www.cartaodecidadao.pt/services/ccc/ACS/Operations/Attributes";
	soap_tmp___ns10__Attributes.ns2__AttributeRequest = ns2__AttributeRequest;
	soap_begin(soap);
	soap_set_version(soap, 1); /* use SOAP1.1 */
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns10__Attributes(soap, &soap_tmp___ns10__Attributes);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns10__Attributes(soap, &soap_tmp___ns10__Attributes, "-ns10:Attributes", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns10__Attributes(soap, &soap_tmp___ns10__Attributes, "-ns10:Attributes", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int AttributeClientServiceBindingProxy::recv_Attributes(ns2__AttributeResponseType &ns2__AttributeResponse)
{
	ns2__AttributeResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns2__AttributeResponse.soap_get(soap, "ns2:AttributeResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */