struct _XILCORE_ENDPOINT_DATA// Size=0x10 (Id=964)
{
    void * EndpointHandle;// Offset=0x0 Size=0x8
    unsigned char IsProxyEndpoint;// Offset=0x8 Size=0x1
};

struct _XIL_DIRECT_ENDPOINT_DATA// Size=0x10 (Id=831)
{
    struct _XILCORE_ENDPOINT_DATA XilCoreEndpointData;// Offset=0x0 Size=0x10
};
