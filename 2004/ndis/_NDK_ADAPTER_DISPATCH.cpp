struct _NDK_ADAPTER_DISPATCH// Size=0x48 (Id=1160)
{
    long  ( * NdkQueryExtension)(struct _NDK_OBJECT_HEADER * ,struct _GUID * ,struct NDK_VERSION ,struct _NDK_EXTENSION_INTERFACE * );// Offset=0x0 Size=0x8
    long  ( * NdkQueryAdapterInfo)(struct _NDK_ADAPTER * ,struct _NDK_ADAPTER_INFO * ,unsigned long * );// Offset=0x8 Size=0x8
    long  ( * NdkCreateCq)(struct _NDK_ADAPTER * ,unsigned long ,void  ( * )(void * ,long ),void * ,struct _GROUP_AFFINITY * ,void  ( * )(void * ,long ,struct _NDK_OBJECT_HEADER * ),void * ,struct _NDK_CQ ** );// Offset=0x10 Size=0x8
    long  ( * NdkCreatePd)(struct _NDK_ADAPTER * ,void  ( * )(void * ,long ,struct _NDK_OBJECT_HEADER * ),void * ,struct _NDK_PD ** );// Offset=0x18 Size=0x8
    long  ( * NdkCreateSharedEndpoint)(struct _NDK_ADAPTER * ,const struct sockaddr * ,unsigned long ,void  ( * )(void * ,long ,struct _NDK_OBJECT_HEADER * ),void * ,struct _NDK_SHARED_ENDPOINT ** );// Offset=0x20 Size=0x8
    long  ( * NdkCreateConnector)(struct _NDK_ADAPTER * ,void  ( * )(void * ,long ,struct _NDK_OBJECT_HEADER * ),void * ,struct _NDK_CONNECTOR ** );// Offset=0x28 Size=0x8
    long  ( * NdkCreateListener)(struct _NDK_ADAPTER * ,void  ( * )(void * ,struct _NDK_CONNECTOR * ),void * ,void  ( * )(void * ,long ,struct _NDK_OBJECT_HEADER * ),void * ,struct _NDK_LISTENER ** );// Offset=0x30 Size=0x8
    long  ( * NdkBuildLAM)(struct _NDK_ADAPTER * ,struct _MDL * ,unsigned long long ,void  ( * )(void * ,long ),void * ,struct _NDK_LOGICAL_ADDRESS_MAPPING * ,unsigned long * ,unsigned long * );// Offset=0x38 Size=0x8
    void  ( * NdkReleaseLAM)(struct _NDK_ADAPTER * ,struct _NDK_LOGICAL_ADDRESS_MAPPING * );// Offset=0x40 Size=0x8
};
