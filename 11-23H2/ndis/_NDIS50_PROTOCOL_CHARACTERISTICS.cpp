struct _UNICODE_STRING// Size=0x10 (Id=89)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _NDIS40_PROTOCOL_CHARACTERISTICS// Size=0x90 (Id=1258)
{
    unsigned char MajorNdisVersion;// Offset=0x0 Size=0x1
    unsigned char MinorNdisVersion;// Offset=0x1 Size=0x1
    unsigned short Filler;// Offset=0x2 Size=0x2
    union // Size=0x4 (Id=0)
    {
        unsigned int Reserved;// Offset=0x4 Size=0x4
        unsigned int Flags;// Offset=0x4 Size=0x4
    };
    void  ( * OpenAdapterCompleteHandler)(void * ,int ,int );// Offset=0x8 Size=0x8
    void  ( * CloseAdapterCompleteHandler)(void * ,int );// Offset=0x10 Size=0x8
    union // Size=0x8 (Id=0)
    {
        void  ( * SendCompleteHandler)(void * ,struct _NDIS_PACKET * ,int );// Offset=0x18 Size=0x8
        void  ( * WanSendCompleteHandler)(void * ,struct _NDIS_WAN_PACKET * ,int );// Offset=0x18 Size=0x8
    };
    union // Size=0x8 (Id=0)
    {
        void  ( * TransferDataCompleteHandler)(void * ,struct _NDIS_PACKET * ,int ,unsigned int );// Offset=0x20 Size=0x8
        void  ( * WanTransferDataCompleteHandler)();// Offset=0x20 Size=0x8
    };
    void  ( * ResetCompleteHandler)(void * ,int );// Offset=0x28 Size=0x8
    void  ( * RequestCompleteHandler)(void * ,struct _NDIS_REQUEST * ,int );// Offset=0x30 Size=0x8
    union // Size=0x8 (Id=0)
    {
        int  ( * ReceiveHandler)(void * ,void * ,void * ,unsigned int ,void * ,unsigned int ,unsigned int );// Offset=0x38 Size=0x8
        int  ( * WanReceiveHandler)(void * ,unsigned char * ,unsigned long );// Offset=0x38 Size=0x8
    };
    void  ( * ReceiveCompleteHandler)(void * );// Offset=0x40 Size=0x8
    void  ( * StatusHandler)(void * ,int ,void * ,unsigned int );// Offset=0x48 Size=0x8
    void  ( * StatusCompleteHandler)(void * );// Offset=0x50 Size=0x8
    struct _UNICODE_STRING Name;// Offset=0x58 Size=0x10
    int  ( * ReceivePacketHandler)(void * ,struct _NDIS_PACKET * );// Offset=0x68 Size=0x8
    void  ( * BindAdapterHandler)(int * ,void * ,struct _UNICODE_STRING * ,void * ,void * );// Offset=0x70 Size=0x8
    void  ( * UnbindAdapterHandler)(int * ,void * ,void * );// Offset=0x78 Size=0x8
    int  ( * PnPEventHandler)(void * ,struct _NET_PNP_EVENT * );// Offset=0x80 Size=0x8
    void  ( * UnloadHandler)();// Offset=0x88 Size=0x8
};

struct _NDIS50_PROTOCOL_CHARACTERISTICS// Size=0xd0 (Id=703)
{
    union // Size=0x90 (Id=0)
    {
        struct _NDIS40_PROTOCOL_CHARACTERISTICS Ndis40Chars;// Offset=0x0 Size=0x90
        unsigned char MajorNdisVersion;// Offset=0x0 Size=0x1
        unsigned char MinorNdisVersion;// Offset=0x1 Size=0x1
        unsigned short Filler;// Offset=0x2 Size=0x2
        union // Size=0x4 (Id=0)
        {
            unsigned int Reserved;// Offset=0x4 Size=0x4
            unsigned int Flags;// Offset=0x4 Size=0x4
        };
        void  ( * OpenAdapterCompleteHandler)(void * ,int ,int );// Offset=0x8 Size=0x8
        void  ( * CloseAdapterCompleteHandler)(void * ,int );// Offset=0x10 Size=0x8
        union // Size=0x8 (Id=0)
        {
            void  ( * SendCompleteHandler)(void * ,struct _NDIS_PACKET * ,int );// Offset=0x18 Size=0x8
            void  ( * WanSendCompleteHandler)(void * ,struct _NDIS_WAN_PACKET * ,int );// Offset=0x18 Size=0x8
        };
        union // Size=0x8 (Id=0)
        {
            void  ( * TransferDataCompleteHandler)(void * ,struct _NDIS_PACKET * ,int ,unsigned int );// Offset=0x20 Size=0x8
            void  ( * WanTransferDataCompleteHandler)();// Offset=0x20 Size=0x8
        };
        void  ( * ResetCompleteHandler)(void * ,int );// Offset=0x28 Size=0x8
        void  ( * RequestCompleteHandler)(void * ,struct _NDIS_REQUEST * ,int );// Offset=0x30 Size=0x8
        union // Size=0x8 (Id=0)
        {
            int  ( * ReceiveHandler)(void * ,void * ,void * ,unsigned int ,void * ,unsigned int ,unsigned int );// Offset=0x38 Size=0x8
            int  ( * WanReceiveHandler)(void * ,unsigned char * ,unsigned long );// Offset=0x38 Size=0x8
        };
        void  ( * ReceiveCompleteHandler)(void * );// Offset=0x40 Size=0x8
        void  ( * StatusHandler)(void * ,int ,void * ,unsigned int );// Offset=0x48 Size=0x8
        void  ( * StatusCompleteHandler)(void * );// Offset=0x50 Size=0x8
        struct _UNICODE_STRING Name;// Offset=0x58 Size=0x10
        int  ( * ReceivePacketHandler)(void * ,struct _NDIS_PACKET * );// Offset=0x68 Size=0x8
        void  ( * BindAdapterHandler)(int * ,void * ,struct _UNICODE_STRING * ,void * ,void * );// Offset=0x70 Size=0x8
        void  ( * UnbindAdapterHandler)(int * ,void * ,void * );// Offset=0x78 Size=0x8
        int  ( * PnPEventHandler)(void * ,struct _NET_PNP_EVENT * );// Offset=0x80 Size=0x8
        void  ( * UnloadHandler)();// Offset=0x88 Size=0x8
    };
    void * ReservedHandlers[4];// Offset=0x90 Size=0x20
    void  ( * CoSendCompleteHandler)(int ,void * ,struct _NDIS_PACKET * );// Offset=0xb0 Size=0x8
    void  ( * CoStatusHandler)(void * ,void * ,int ,void * ,unsigned int );// Offset=0xb8 Size=0x8
    unsigned int  ( * CoReceivePacketHandler)(void * ,void * ,struct _NDIS_PACKET * );// Offset=0xc0 Size=0x8
    void  ( * CoAfRegisterNotifyHandler)(void * ,struct CO_ADDRESS_FAMILY * );// Offset=0xc8 Size=0x8
};
