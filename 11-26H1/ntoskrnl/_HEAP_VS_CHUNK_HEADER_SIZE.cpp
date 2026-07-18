union _HEAP_VS_CHUNK_HEADER_SIZE// Size=0x8 (Id=953)
{
    unsigned short MemoryCost;// Offset=0x0 Size=0x2
    unsigned short UnsafeSize;// Offset=0x2 Size=0x2
    unsigned short UnsafePrevSize;// Offset=0x4 Size=0x2
    unsigned char Allocated;// Offset=0x6 Size=0x1
    unsigned char Spare0;// Offset=0x7 Size=0x1
    unsigned short KeyUShort;// Offset=0x0 Size=0x2
    unsigned long KeyULong;// Offset=0x0 Size=0x4
    unsigned long long HeaderBits;// Offset=0x0 Size=0x8
};
