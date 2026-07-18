struct _NDK_LISTENER_DISPATCH// Size=0x28 (Id=1941)
{
    long  ( * NdkCloseListener)(struct _NDK_OBJECT_HEADER * ,void  ( * )(void * ),void * );// Offset=0x0 Size=0x8
    long  ( * NdkQueryExtension)(struct _NDK_OBJECT_HEADER * ,struct _GUID * ,struct NDK_VERSION ,struct _NDK_EXTENSION_INTERFACE * );// Offset=0x8 Size=0x8
    long  ( * NdkListen)(struct _NDK_LISTENER * ,const struct sockaddr * ,unsigned long ,void  ( * )(void * ,long ),void * );// Offset=0x10 Size=0x8
    long  ( * NdkGetLocalAddress)(struct _NDK_LISTENER * ,struct sockaddr * ,unsigned long * );// Offset=0x18 Size=0x8
    void  ( * NdkControlConnectEvents)(struct _NDK_LISTENER * ,unsigned char );// Offset=0x20 Size=0x8
};
