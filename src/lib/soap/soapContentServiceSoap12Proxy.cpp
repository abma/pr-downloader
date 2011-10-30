/* soapContentServiceSoap12Proxy.cpp
   Generated by gSOAP 2.7.9l from plasma.h
   Copyright(C) 2000-2007, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#include "soapContentServiceSoap12Proxy.h"

ContentServiceSoap12Proxy::ContentServiceSoap12Proxy()
{	ContentServiceSoap12Proxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

ContentServiceSoap12Proxy::ContentServiceSoap12Proxy(soap_mode iomode)
{	ContentServiceSoap12Proxy_init(iomode, iomode);
}

ContentServiceSoap12Proxy::ContentServiceSoap12Proxy(soap_mode imode, soap_mode omode)
{	ContentServiceSoap12Proxy_init(imode, omode);
}

void ContentServiceSoap12Proxy::ContentServiceSoap12Proxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://www.w3.org/*/soap-envelope", NULL},
	{"SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://www.w3.org/*/soap-encoding", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"Plasma2", "http://tempuri.org/ContentServiceSoap", NULL, NULL},
	{"Plasma", "http://tempuri.org/", NULL, NULL},
	{"Plasma3", "http://tempuri.org/ContentServiceSoap12", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	if (!this->namespaces)
		this->namespaces = namespaces;
}

ContentServiceSoap12Proxy::~ContentServiceSoap12Proxy()
{ }

void ContentServiceSoap12Proxy::soap_noheader()
{	header = NULL;
}

const SOAP_ENV__Fault *ContentServiceSoap12Proxy::soap_fault()
{	return this->fault;
}

const char *ContentServiceSoap12Proxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *ContentServiceSoap12Proxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int ContentServiceSoap12Proxy::AutohostPlayerJoined(_Plasma__AutohostPlayerJoined *Plasma__AutohostPlayerJoined, _Plasma__AutohostPlayerJoinedResponse *Plasma__AutohostPlayerJoinedResponse)
{	struct soap *soap = this;
	struct __Plasma3__AutohostPlayerJoined soap_tmp___Plasma3__AutohostPlayerJoined;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://zero-k.info/ContentService.asmx";
	soap_action = "http://tempuri.org/AutohostPlayerJoined";
	soap->encodingStyle = NULL;
	soap_tmp___Plasma3__AutohostPlayerJoined.Plasma__AutohostPlayerJoined = Plasma__AutohostPlayerJoined;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___Plasma3__AutohostPlayerJoined(soap, &soap_tmp___Plasma3__AutohostPlayerJoined);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Plasma3__AutohostPlayerJoined(soap, &soap_tmp___Plasma3__AutohostPlayerJoined, "-Plasma3:AutohostPlayerJoined", "")
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
	 || soap_put___Plasma3__AutohostPlayerJoined(soap, &soap_tmp___Plasma3__AutohostPlayerJoined, "-Plasma3:AutohostPlayerJoined", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!Plasma__AutohostPlayerJoinedResponse)
		return soap_closesock(soap);
	Plasma__AutohostPlayerJoinedResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Plasma__AutohostPlayerJoinedResponse->soap_get(soap, "Plasma:AutohostPlayerJoinedResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ContentServiceSoap12Proxy::BalanceTeams(_Plasma__BalanceTeams *Plasma__BalanceTeams, _Plasma__BalanceTeamsResponse *Plasma__BalanceTeamsResponse)
{	struct soap *soap = this;
	struct __Plasma3__BalanceTeams soap_tmp___Plasma3__BalanceTeams;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://zero-k.info/ContentService.asmx";
	soap_action = "http://tempuri.org/BalanceTeams";
	soap->encodingStyle = NULL;
	soap_tmp___Plasma3__BalanceTeams.Plasma__BalanceTeams = Plasma__BalanceTeams;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___Plasma3__BalanceTeams(soap, &soap_tmp___Plasma3__BalanceTeams);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Plasma3__BalanceTeams(soap, &soap_tmp___Plasma3__BalanceTeams, "-Plasma3:BalanceTeams", "")
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
	 || soap_put___Plasma3__BalanceTeams(soap, &soap_tmp___Plasma3__BalanceTeams, "-Plasma3:BalanceTeams", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!Plasma__BalanceTeamsResponse)
		return soap_closesock(soap);
	Plasma__BalanceTeamsResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Plasma__BalanceTeamsResponse->soap_get(soap, "Plasma:BalanceTeamsResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ContentServiceSoap12Proxy::DownloadFile(_Plasma__DownloadFile *Plasma__DownloadFile, _Plasma__DownloadFileResponse *Plasma__DownloadFileResponse)
{	struct soap *soap = this;
	struct __Plasma3__DownloadFile soap_tmp___Plasma3__DownloadFile;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://zero-k.info/ContentService.asmx";
	soap_action = "http://tempuri.org/DownloadFile";
	soap->encodingStyle = NULL;
	soap_tmp___Plasma3__DownloadFile.Plasma__DownloadFile = Plasma__DownloadFile;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___Plasma3__DownloadFile(soap, &soap_tmp___Plasma3__DownloadFile);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Plasma3__DownloadFile(soap, &soap_tmp___Plasma3__DownloadFile, "-Plasma3:DownloadFile", "")
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
	 || soap_put___Plasma3__DownloadFile(soap, &soap_tmp___Plasma3__DownloadFile, "-Plasma3:DownloadFile", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!Plasma__DownloadFileResponse)
		return soap_closesock(soap);
	Plasma__DownloadFileResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Plasma__DownloadFileResponse->soap_get(soap, "Plasma:DownloadFileResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ContentServiceSoap12Proxy::GetEloByAccountID(_Plasma__GetEloByAccountID *Plasma__GetEloByAccountID, _Plasma__GetEloByAccountIDResponse *Plasma__GetEloByAccountIDResponse)
{	struct soap *soap = this;
	struct __Plasma3__GetEloByAccountID soap_tmp___Plasma3__GetEloByAccountID;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://zero-k.info/ContentService.asmx";
	soap_action = "http://tempuri.org/GetEloByAccountID";
	soap->encodingStyle = NULL;
	soap_tmp___Plasma3__GetEloByAccountID.Plasma__GetEloByAccountID = Plasma__GetEloByAccountID;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___Plasma3__GetEloByAccountID(soap, &soap_tmp___Plasma3__GetEloByAccountID);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Plasma3__GetEloByAccountID(soap, &soap_tmp___Plasma3__GetEloByAccountID, "-Plasma3:GetEloByAccountID", "")
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
	 || soap_put___Plasma3__GetEloByAccountID(soap, &soap_tmp___Plasma3__GetEloByAccountID, "-Plasma3:GetEloByAccountID", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!Plasma__GetEloByAccountIDResponse)
		return soap_closesock(soap);
	Plasma__GetEloByAccountIDResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Plasma__GetEloByAccountIDResponse->soap_get(soap, "Plasma:GetEloByAccountIDResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ContentServiceSoap12Proxy::GetEloByName(_Plasma__GetEloByName *Plasma__GetEloByName, _Plasma__GetEloByNameResponse *Plasma__GetEloByNameResponse)
{	struct soap *soap = this;
	struct __Plasma3__GetEloByName soap_tmp___Plasma3__GetEloByName;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://zero-k.info/ContentService.asmx";
	soap_action = "http://tempuri.org/GetEloByName";
	soap->encodingStyle = NULL;
	soap_tmp___Plasma3__GetEloByName.Plasma__GetEloByName = Plasma__GetEloByName;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___Plasma3__GetEloByName(soap, &soap_tmp___Plasma3__GetEloByName);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Plasma3__GetEloByName(soap, &soap_tmp___Plasma3__GetEloByName, "-Plasma3:GetEloByName", "")
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
	 || soap_put___Plasma3__GetEloByName(soap, &soap_tmp___Plasma3__GetEloByName, "-Plasma3:GetEloByName", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!Plasma__GetEloByNameResponse)
		return soap_closesock(soap);
	Plasma__GetEloByNameResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Plasma__GetEloByNameResponse->soap_get(soap, "Plasma:GetEloByNameResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ContentServiceSoap12Proxy::GetEloTop10(_Plasma__GetEloTop10 *Plasma__GetEloTop10, _Plasma__GetEloTop10Response *Plasma__GetEloTop10Response)
{	struct soap *soap = this;
	struct __Plasma3__GetEloTop10 soap_tmp___Plasma3__GetEloTop10;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://zero-k.info/ContentService.asmx";
	soap_action = "http://tempuri.org/GetEloTop10";
	soap->encodingStyle = NULL;
	soap_tmp___Plasma3__GetEloTop10.Plasma__GetEloTop10 = Plasma__GetEloTop10;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___Plasma3__GetEloTop10(soap, &soap_tmp___Plasma3__GetEloTop10);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Plasma3__GetEloTop10(soap, &soap_tmp___Plasma3__GetEloTop10, "-Plasma3:GetEloTop10", "")
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
	 || soap_put___Plasma3__GetEloTop10(soap, &soap_tmp___Plasma3__GetEloTop10, "-Plasma3:GetEloTop10", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!Plasma__GetEloTop10Response)
		return soap_closesock(soap);
	Plasma__GetEloTop10Response->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Plasma__GetEloTop10Response->soap_get(soap, "Plasma:GetEloTop10Response", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ContentServiceSoap12Proxy::GetRecommendedMap(_Plasma__GetRecommendedMap *Plasma__GetRecommendedMap, _Plasma__GetRecommendedMapResponse *Plasma__GetRecommendedMapResponse)
{	struct soap *soap = this;
	struct __Plasma3__GetRecommendedMap soap_tmp___Plasma3__GetRecommendedMap;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://zero-k.info/ContentService.asmx";
	soap_action = "http://tempuri.org/GetRecommendedMap";
	soap->encodingStyle = NULL;
	soap_tmp___Plasma3__GetRecommendedMap.Plasma__GetRecommendedMap = Plasma__GetRecommendedMap;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___Plasma3__GetRecommendedMap(soap, &soap_tmp___Plasma3__GetRecommendedMap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Plasma3__GetRecommendedMap(soap, &soap_tmp___Plasma3__GetRecommendedMap, "-Plasma3:GetRecommendedMap", "")
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
	 || soap_put___Plasma3__GetRecommendedMap(soap, &soap_tmp___Plasma3__GetRecommendedMap, "-Plasma3:GetRecommendedMap", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!Plasma__GetRecommendedMapResponse)
		return soap_closesock(soap);
	Plasma__GetRecommendedMapResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Plasma__GetRecommendedMapResponse->soap_get(soap, "Plasma:GetRecommendedMapResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ContentServiceSoap12Proxy::GetResourceData(_Plasma__GetResourceData *Plasma__GetResourceData, _Plasma__GetResourceDataResponse *Plasma__GetResourceDataResponse)
{	struct soap *soap = this;
	struct __Plasma3__GetResourceData soap_tmp___Plasma3__GetResourceData;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://zero-k.info/ContentService.asmx";
	soap_action = "http://tempuri.org/GetResourceData";
	soap->encodingStyle = NULL;
	soap_tmp___Plasma3__GetResourceData.Plasma__GetResourceData = Plasma__GetResourceData;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___Plasma3__GetResourceData(soap, &soap_tmp___Plasma3__GetResourceData);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Plasma3__GetResourceData(soap, &soap_tmp___Plasma3__GetResourceData, "-Plasma3:GetResourceData", "")
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
	 || soap_put___Plasma3__GetResourceData(soap, &soap_tmp___Plasma3__GetResourceData, "-Plasma3:GetResourceData", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!Plasma__GetResourceDataResponse)
		return soap_closesock(soap);
	Plasma__GetResourceDataResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Plasma__GetResourceDataResponse->soap_get(soap, "Plasma:GetResourceDataResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ContentServiceSoap12Proxy::GetResourceList(_Plasma__GetResourceList *Plasma__GetResourceList, _Plasma__GetResourceListResponse *Plasma__GetResourceListResponse)
{	struct soap *soap = this;
	struct __Plasma3__GetResourceList soap_tmp___Plasma3__GetResourceList;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://zero-k.info/ContentService.asmx";
	soap_action = "http://tempuri.org/GetResourceList";
	soap->encodingStyle = NULL;
	soap_tmp___Plasma3__GetResourceList.Plasma__GetResourceList = Plasma__GetResourceList;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___Plasma3__GetResourceList(soap, &soap_tmp___Plasma3__GetResourceList);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Plasma3__GetResourceList(soap, &soap_tmp___Plasma3__GetResourceList, "-Plasma3:GetResourceList", "")
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
	 || soap_put___Plasma3__GetResourceList(soap, &soap_tmp___Plasma3__GetResourceList, "-Plasma3:GetResourceList", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!Plasma__GetResourceListResponse)
		return soap_closesock(soap);
	Plasma__GetResourceListResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Plasma__GetResourceListResponse->soap_get(soap, "Plasma:GetResourceListResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ContentServiceSoap12Proxy::GetScriptMissionData(_Plasma__GetScriptMissionData *Plasma__GetScriptMissionData, _Plasma__GetScriptMissionDataResponse *Plasma__GetScriptMissionDataResponse)
{	struct soap *soap = this;
	struct __Plasma3__GetScriptMissionData soap_tmp___Plasma3__GetScriptMissionData;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://zero-k.info/ContentService.asmx";
	soap_action = "http://tempuri.org/GetScriptMissionData";
	soap->encodingStyle = NULL;
	soap_tmp___Plasma3__GetScriptMissionData.Plasma__GetScriptMissionData = Plasma__GetScriptMissionData;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___Plasma3__GetScriptMissionData(soap, &soap_tmp___Plasma3__GetScriptMissionData);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Plasma3__GetScriptMissionData(soap, &soap_tmp___Plasma3__GetScriptMissionData, "-Plasma3:GetScriptMissionData", "")
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
	 || soap_put___Plasma3__GetScriptMissionData(soap, &soap_tmp___Plasma3__GetScriptMissionData, "-Plasma3:GetScriptMissionData", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!Plasma__GetScriptMissionDataResponse)
		return soap_closesock(soap);
	Plasma__GetScriptMissionDataResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Plasma__GetScriptMissionDataResponse->soap_get(soap, "Plasma:GetScriptMissionDataResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ContentServiceSoap12Proxy::GetSpringBattleStartSetup(_Plasma__GetSpringBattleStartSetup *Plasma__GetSpringBattleStartSetup, _Plasma__GetSpringBattleStartSetupResponse *Plasma__GetSpringBattleStartSetupResponse)
{	struct soap *soap = this;
	struct __Plasma3__GetSpringBattleStartSetup soap_tmp___Plasma3__GetSpringBattleStartSetup;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://zero-k.info/ContentService.asmx";
	soap_action = "http://tempuri.org/GetSpringBattleStartSetup";
	soap->encodingStyle = NULL;
	soap_tmp___Plasma3__GetSpringBattleStartSetup.Plasma__GetSpringBattleStartSetup = Plasma__GetSpringBattleStartSetup;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___Plasma3__GetSpringBattleStartSetup(soap, &soap_tmp___Plasma3__GetSpringBattleStartSetup);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Plasma3__GetSpringBattleStartSetup(soap, &soap_tmp___Plasma3__GetSpringBattleStartSetup, "-Plasma3:GetSpringBattleStartSetup", "")
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
	 || soap_put___Plasma3__GetSpringBattleStartSetup(soap, &soap_tmp___Plasma3__GetSpringBattleStartSetup, "-Plasma3:GetSpringBattleStartSetup", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!Plasma__GetSpringBattleStartSetupResponse)
		return soap_closesock(soap);
	Plasma__GetSpringBattleStartSetupResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Plasma__GetSpringBattleStartSetupResponse->soap_get(soap, "Plasma:GetSpringBattleStartSetupResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ContentServiceSoap12Proxy::NotifyMissionRun(_Plasma__NotifyMissionRun *Plasma__NotifyMissionRun, _Plasma__NotifyMissionRunResponse *Plasma__NotifyMissionRunResponse)
{	struct soap *soap = this;
	struct __Plasma3__NotifyMissionRun soap_tmp___Plasma3__NotifyMissionRun;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://zero-k.info/ContentService.asmx";
	soap_action = "http://tempuri.org/NotifyMissionRun";
	soap->encodingStyle = NULL;
	soap_tmp___Plasma3__NotifyMissionRun.Plasma__NotifyMissionRun = Plasma__NotifyMissionRun;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___Plasma3__NotifyMissionRun(soap, &soap_tmp___Plasma3__NotifyMissionRun);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Plasma3__NotifyMissionRun(soap, &soap_tmp___Plasma3__NotifyMissionRun, "-Plasma3:NotifyMissionRun", "")
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
	 || soap_put___Plasma3__NotifyMissionRun(soap, &soap_tmp___Plasma3__NotifyMissionRun, "-Plasma3:NotifyMissionRun", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!Plasma__NotifyMissionRunResponse)
		return soap_closesock(soap);
	Plasma__NotifyMissionRunResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Plasma__NotifyMissionRunResponse->soap_get(soap, "Plasma:NotifyMissionRunResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ContentServiceSoap12Proxy::RegisterResource(_Plasma__RegisterResource *Plasma__RegisterResource, _Plasma__RegisterResourceResponse *Plasma__RegisterResourceResponse)
{	struct soap *soap = this;
	struct __Plasma3__RegisterResource soap_tmp___Plasma3__RegisterResource;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://zero-k.info/ContentService.asmx";
	soap_action = "http://tempuri.org/RegisterResource";
	soap->encodingStyle = NULL;
	soap_tmp___Plasma3__RegisterResource.Plasma__RegisterResource = Plasma__RegisterResource;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___Plasma3__RegisterResource(soap, &soap_tmp___Plasma3__RegisterResource);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Plasma3__RegisterResource(soap, &soap_tmp___Plasma3__RegisterResource, "-Plasma3:RegisterResource", "")
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
	 || soap_put___Plasma3__RegisterResource(soap, &soap_tmp___Plasma3__RegisterResource, "-Plasma3:RegisterResource", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!Plasma__RegisterResourceResponse)
		return soap_closesock(soap);
	Plasma__RegisterResourceResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Plasma__RegisterResourceResponse->soap_get(soap, "Plasma:RegisterResourceResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ContentServiceSoap12Proxy::SubmitMissionScore(_Plasma__SubmitMissionScore *Plasma__SubmitMissionScore, _Plasma__SubmitMissionScoreResponse *Plasma__SubmitMissionScoreResponse)
{	struct soap *soap = this;
	struct __Plasma3__SubmitMissionScore soap_tmp___Plasma3__SubmitMissionScore;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://zero-k.info/ContentService.asmx";
	soap_action = "http://tempuri.org/SubmitMissionScore";
	soap->encodingStyle = NULL;
	soap_tmp___Plasma3__SubmitMissionScore.Plasma__SubmitMissionScore = Plasma__SubmitMissionScore;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___Plasma3__SubmitMissionScore(soap, &soap_tmp___Plasma3__SubmitMissionScore);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Plasma3__SubmitMissionScore(soap, &soap_tmp___Plasma3__SubmitMissionScore, "-Plasma3:SubmitMissionScore", "")
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
	 || soap_put___Plasma3__SubmitMissionScore(soap, &soap_tmp___Plasma3__SubmitMissionScore, "-Plasma3:SubmitMissionScore", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!Plasma__SubmitMissionScoreResponse)
		return soap_closesock(soap);
	Plasma__SubmitMissionScoreResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Plasma__SubmitMissionScoreResponse->soap_get(soap, "Plasma:SubmitMissionScoreResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ContentServiceSoap12Proxy::SubmitSpringBattleResult(_Plasma__SubmitSpringBattleResult *Plasma__SubmitSpringBattleResult, _Plasma__SubmitSpringBattleResultResponse *Plasma__SubmitSpringBattleResultResponse)
{	struct soap *soap = this;
	struct __Plasma3__SubmitSpringBattleResult soap_tmp___Plasma3__SubmitSpringBattleResult;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://zero-k.info/ContentService.asmx";
	soap_action = "http://tempuri.org/SubmitSpringBattleResult";
	soap->encodingStyle = NULL;
	soap_tmp___Plasma3__SubmitSpringBattleResult.Plasma__SubmitSpringBattleResult = Plasma__SubmitSpringBattleResult;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___Plasma3__SubmitSpringBattleResult(soap, &soap_tmp___Plasma3__SubmitSpringBattleResult);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Plasma3__SubmitSpringBattleResult(soap, &soap_tmp___Plasma3__SubmitSpringBattleResult, "-Plasma3:SubmitSpringBattleResult", "")
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
	 || soap_put___Plasma3__SubmitSpringBattleResult(soap, &soap_tmp___Plasma3__SubmitSpringBattleResult, "-Plasma3:SubmitSpringBattleResult", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!Plasma__SubmitSpringBattleResultResponse)
		return soap_closesock(soap);
	Plasma__SubmitSpringBattleResultResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Plasma__SubmitSpringBattleResultResponse->soap_get(soap, "Plasma:SubmitSpringBattleResultResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ContentServiceSoap12Proxy::SubmitStackTrace(_Plasma__SubmitStackTrace *Plasma__SubmitStackTrace, _Plasma__SubmitStackTraceResponse *Plasma__SubmitStackTraceResponse)
{	struct soap *soap = this;
	struct __Plasma3__SubmitStackTrace soap_tmp___Plasma3__SubmitStackTrace;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://zero-k.info/ContentService.asmx";
	soap_action = "http://tempuri.org/SubmitStackTrace";
	soap->encodingStyle = NULL;
	soap_tmp___Plasma3__SubmitStackTrace.Plasma__SubmitStackTrace = Plasma__SubmitStackTrace;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___Plasma3__SubmitStackTrace(soap, &soap_tmp___Plasma3__SubmitStackTrace);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Plasma3__SubmitStackTrace(soap, &soap_tmp___Plasma3__SubmitStackTrace, "-Plasma3:SubmitStackTrace", "")
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
	 || soap_put___Plasma3__SubmitStackTrace(soap, &soap_tmp___Plasma3__SubmitStackTrace, "-Plasma3:SubmitStackTrace", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!Plasma__SubmitStackTraceResponse)
		return soap_closesock(soap);
	Plasma__SubmitStackTraceResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Plasma__SubmitStackTraceResponse->soap_get(soap, "Plasma:SubmitStackTraceResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ContentServiceSoap12Proxy::VerifyAccountData(_Plasma__VerifyAccountData *Plasma__VerifyAccountData, _Plasma__VerifyAccountDataResponse *Plasma__VerifyAccountDataResponse)
{	struct soap *soap = this;
	struct __Plasma3__VerifyAccountData soap_tmp___Plasma3__VerifyAccountData;
	const char *soap_action = NULL;
	if (!soap_endpoint)
		soap_endpoint = "http://zero-k.info/ContentService.asmx";
	soap_action = "http://tempuri.org/VerifyAccountData";
	soap->encodingStyle = NULL;
	soap_tmp___Plasma3__VerifyAccountData.Plasma__VerifyAccountData = Plasma__VerifyAccountData;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___Plasma3__VerifyAccountData(soap, &soap_tmp___Plasma3__VerifyAccountData);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___Plasma3__VerifyAccountData(soap, &soap_tmp___Plasma3__VerifyAccountData, "-Plasma3:VerifyAccountData", "")
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
	 || soap_put___Plasma3__VerifyAccountData(soap, &soap_tmp___Plasma3__VerifyAccountData, "-Plasma3:VerifyAccountData", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!Plasma__VerifyAccountDataResponse)
		return soap_closesock(soap);
	Plasma__VerifyAccountDataResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	Plasma__VerifyAccountDataResponse->soap_get(soap, "Plasma:VerifyAccountDataResponse", "");
	if (soap->error)
	{	if (soap->error == SOAP_TAG_MISMATCH && soap->level == 2)
			return soap_recv_fault(soap);
		return soap_closesock(soap);
	}
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
