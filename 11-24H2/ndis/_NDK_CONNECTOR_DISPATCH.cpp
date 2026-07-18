struct _NDK_CONNECTOR_DISPATCH// Size=0x68 (Id=1363)
{
    long  ( * NdkCloseConnector)(struct _NDK_OBJECT_HEADER * ,void  ( * )(void * ),void * );// Offset=0x0 Size=0x8
    long  ( * NdkQueryExtension)(struct _NDK_OBJECT_HEADER * ,struct _GUID * ,struct NDK_VERSION ,struct _NDK_EXTENSION_INTERFACE * );// Offset=0x8 Size=0x8
    long  ( * NdkConnect)(struct _NDK_CONNECTOR * ,struct _NDK_QP * ,const struct sockaddr * ,unsigned long ,const struct sockaddr * ,unsigned long ,unsigned long ,unsigned long ,const void * ,unsigned long ,void  ( * )(void * ,long ),void * );// Offset=0x10 Size=0x8
    long  ( * NdkConnectWithSharedEndpoint)(struct _NDK_CONNECTOR * ,struct _NDK_QP * ,struct _NDK_SHARED_ENDPOINT * ,const struct sockaddr * ,unsigned long ,unsigned long ,unsigned long ,const void * ,unsigned long ,void  ( * )(void * ,long ),void * );// Offset=0x18 Size=0x8
    long  ( * NdkCompleteConnect)(struct _NDK_CONNECTOR * ,void  ( * )(void * ),void * ,void  ( * )(void * ,long ),void * );// Offset=0x20 Size=0x8
    long  ( * NdkAccept)(struct _NDK_CONNECTOR * ,struct _NDK_QP * ,unsigned long ,unsigned long ,const void * ,unsigned long ,void  ( * )(void * ),void * ,void  ( * )(void * ,long ),void * );// Offset=0x28 Size=0x8
    long  ( * NdkReject)(struct _NDK_CONNECTOR * ,const void * ,unsigned long );// Offset=0x30 Size=0x8
    long  ( * NdkGetConnectionData)(struct _NDK_CONNECTOR * ,unsigned long * ,unsigned long * ,void * ,unsigned long * );// Offset=0x38 Size=0x8
    long  ( * NdkGetLocalAddress)(struct _NDK_CONNECTOR * ,struct sockaddr * ,unsigned long * );// Offset=0x40 Size=0x8
    long  ( * NdkGetPeerAddress)(struct _NDK_CONNECTOR * ,struct sockaddr * ,unsigned long * );// Offset=0x48 Size=0x8
    long  ( * NdkDisconnect)(struct _NDK_CONNECTOR * ,void  ( * )(void * ,long ),void * );// Offset=0x50 Size=0x8
    long  ( * NdkCompleteConnectEx)(struct _NDK_CONNECTOR * ,void  ( * )(void * ,unsigned long ),void * ,void  ( * )(void * ,long ),void * );// Offset=0x58 Size=0x8
    long  ( * NdkAcceptEx)(struct _NDK_CONNECTOR * ,struct _NDK_QP * ,unsigned long ,unsigned long ,const void * ,unsigned long ,void  ( * )(void * ,unsigned long ),void * ,void  ( * )(void * ,long ),void * );// Offset=0x60 Size=0x8
};
