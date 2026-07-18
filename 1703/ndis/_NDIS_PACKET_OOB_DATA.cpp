struct _NDIS_PACKET_OOB_DATA// Size=0x28 (Id=871)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long TimeToSend;// Offset=0x0 Size=0x8
        unsigned long long TimeSent;// Offset=0x0 Size=0x8
    };
    unsigned long long TimeReceived;// Offset=0x8 Size=0x8
    unsigned int HeaderSize;// Offset=0x10 Size=0x4
    unsigned int SizeMediaSpecificInfo;// Offset=0x14 Size=0x4
    void * MediaSpecificInformation;// Offset=0x18 Size=0x8
    int Status;// Offset=0x20 Size=0x4
};
