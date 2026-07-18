struct _NDK_SHARED_ENDPOINT_DISPATCH// Size=0x18 (Id=1457)
{
    long  ( * NdkCloseSharedEndpoint)(struct _NDK_OBJECT_HEADER * ,void  ( * )(void * ),void * );// Offset=0x0 Size=0x8
    long  ( * NdkQueryExtension)(struct _NDK_OBJECT_HEADER * ,struct _GUID * ,struct NDK_VERSION ,struct _NDK_EXTENSION_INTERFACE * );// Offset=0x8 Size=0x8
    long  ( * NdkGetLocalAddress)(struct _NDK_SHARED_ENDPOINT * ,struct sockaddr * ,unsigned long * );// Offset=0x10 Size=0x8
};
