struct _XILCORE_ENDPOINT_DATA// Size=0x10 (Id=917)
{
    void * EndpointHandle;// Offset=0x0 Size=0x8
    unsigned char IsProxyEndpoint;// Offset=0x8 Size=0x1
};

struct _XIL_PROXY_ENDPOINT_DATA// Size=0x18 (Id=813)
{
    void * RemoteEndpointHandle;// Offset=0x0 Size=0x8
    struct _XILCORE_ENDPOINT_DATA XilCoreEndpointData;// Offset=0x8 Size=0x10
};
