struct _RTL_UMA_FUNCTIONS_V1// Size=0x150 (Id=4087)
{
    void  ( * CopyFromUser)(void * ,void * ,unsigned long long );// Offset=0x0 Size=0x8
    void  ( * CopyFromUserNonTemporal)(void * ,void * ,unsigned long long );// Offset=0x8 Size=0x8
    void  ( * CopyToUser)(void * ,void * ,unsigned long long );// Offset=0x10 Size=0x8
    void  ( * CopyToUserNonTemporal)(void * ,void * ,unsigned long long );// Offset=0x18 Size=0x8
    void  ( * CopyToUserFromUser)(void * ,void * ,unsigned long long );// Offset=0x20 Size=0x8
    void  ( * MoveToUserFromUser)(void * ,void * ,unsigned long long );// Offset=0x28 Size=0x8
    void  ( * SetUserMemory)(void * ,unsigned char ,unsigned long long );// Offset=0x30 Size=0x8
    unsigned char  ( * ReadUCharFromUser)(unsigned char * );// Offset=0x38 Size=0x8
    void  ( * WriteUCharToUser)(unsigned char * ,unsigned char );// Offset=0x40 Size=0x8
    unsigned short  ( * ReadUShortFromUser)(unsigned short * );// Offset=0x48 Size=0x8
    void  ( * WriteUShortToUser)(unsigned short * ,unsigned short );// Offset=0x50 Size=0x8
    unsigned long  ( * ReadULongFromUser)(unsigned long * );// Offset=0x58 Size=0x8
    void  ( * WriteULongToUser)(unsigned long * ,unsigned long );// Offset=0x60 Size=0x8
    unsigned long long  ( * ReadULong64FromUser)(unsigned long long * );// Offset=0x68 Size=0x8
    void  ( * WriteULong64ToUser)(unsigned long long * ,unsigned long long );// Offset=0x70 Size=0x8
    unsigned long long  ( * StringLengthFromUser)(char * );// Offset=0x78 Size=0x8
    unsigned long long  ( * WideStringLengthFromUser)(wchar_t * );// Offset=0x80 Size=0x8
    long long  ( * InterlockedCompareExchange64ToUser)(long long * ,long long ,long long );// Offset=0x88 Size=0x8
    long  ( * InterlockedOr32ToUser)(long * ,long );// Offset=0x90 Size=0x8
    long long  ( * InterlockedOr64ToUser)(long long * ,long long );// Offset=0x98 Size=0x8
    long  ( * InterlockedAnd32ToUser)(long * ,long );// Offset=0xa0 Size=0x8
    long long  ( * InterlockedAnd64ToUser)(long long * ,long long );// Offset=0xa8 Size=0x8
    long  ( * InterlockedCompareExchange32ToUser)(long * ,long ,long );// Offset=0xb0 Size=0x8
    void * Reserved[19];// Offset=0xb8 Size=0x98
};
