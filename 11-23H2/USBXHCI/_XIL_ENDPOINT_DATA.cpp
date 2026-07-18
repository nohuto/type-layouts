struct _XILCORE_ENDPOINT_DATA// Size=0x10 (Id=940)
{
    void * EndpointHandle;// Offset=0x0 Size=0x8
    unsigned char IsProxyEndpoint;// Offset=0x8 Size=0x1
};

struct _XIL_DIRECT_ENDPOINT_DATA// Size=0x10 (Id=811)
{
    struct _XILCORE_ENDPOINT_DATA XilCoreEndpointData;// Offset=0x0 Size=0x10
};

struct _XIL_PROXY_ENDPOINT_DATA// Size=0x18 (Id=840)
{
    void * RemoteEndpointHandle;// Offset=0x0 Size=0x8
    struct _XILCORE_ENDPOINT_DATA XilCoreEndpointData;// Offset=0x8 Size=0x10
};

struct _XIL_ENDPOINT_DATA// Size=0x28 (Id=763)
{
    union // Size=0x10 (Id=0)
    {
        struct _XIL_DIRECT_ENDPOINT_DATA XilDirectEndpointData;// Offset=0x0 Size=0x10
        struct _XIL_PROXY_ENDPOINT_DATA XilProxyEndpointData;// Offset=0x0 Size=0x18
    };
    unsigned char IsProxyEndpoint;// Offset=0x18 Size=0x1
    void * EndpointHandle;// Offset=0x20 Size=0x8
};
