struct _OPTICAL_MEDIA_RECORD// Size=0x48 (Id=2226)
{
    unsigned short DiskNumber;// Offset=0x0 Size=0x2
    unsigned short BusType;// Offset=0x2 Size=0x2
    unsigned short DeviceType;// Offset=0x4 Size=0x2
    unsigned short MediaType;// Offset=0x6 Size=0x2
    unsigned long long StartingOffset;// Offset=0x8 Size=0x8
    unsigned long long Size;// Offset=0x10 Size=0x8
    unsigned long long NumberOfFreeBlocks;// Offset=0x18 Size=0x8
    unsigned long long TotalNumberOfBlocks;// Offset=0x20 Size=0x8
    unsigned long long NextWritableAddress;// Offset=0x28 Size=0x8
    unsigned long NumberOfSessions;// Offset=0x30 Size=0x4
    unsigned long NumberOfTracks;// Offset=0x34 Size=0x4
    unsigned long BytesPerSector;// Offset=0x38 Size=0x4
    unsigned short DiscStatus;// Offset=0x3c Size=0x2
    unsigned short LastSessionStatus;// Offset=0x3e Size=0x2
    wchar_t Data[1];// Offset=0x40 Size=0x2
};
