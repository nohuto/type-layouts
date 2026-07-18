struct _DRIVER_PROXY_ENDPOINT_INFORMATION// Size=0x18 (Id=2701)
{
    unsigned long Id;// Offset=0x0 Size=0x4
    void  ( * EndpointFunction)();// Offset=0x8 Size=0x8
    unsigned long ParameterCount;// Offset=0x10 Size=0x4
};
