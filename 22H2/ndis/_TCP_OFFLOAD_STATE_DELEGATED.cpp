struct _OFFLOAD_STATE_HEADER// Size=0x8 (Id=1252)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long RecognizedOptions;// Offset=0x4 Size=0x4
};

struct _TCP_OFFLOAD_STATE_DELEGATED// Size=0x80 (Id=1527)
{
    union // Size=0x58 (Id=0)
    {
        struct _OFFLOAD_STATE_HEADER Header;// Offset=0x0 Size=0x8
        enum TCP_OFFLOAD_CONNECTION_STATE State;// Offset=0x8 Size=0x4
        unsigned short Flags;// Offset=0xc Size=0x2
        unsigned long RcvNxt;// Offset=0x10 Size=0x4
        unsigned long RcvWnd;// Offset=0x14 Size=0x4
        unsigned long SndUna;// Offset=0x18 Size=0x4
        unsigned long SndNxt;// Offset=0x1c Size=0x4
        unsigned long SndMax;// Offset=0x20 Size=0x4
        unsigned long SndWnd;// Offset=0x24 Size=0x4
        unsigned long MaxSndWnd;// Offset=0x28 Size=0x4
        unsigned long SendWL1;// Offset=0x2c Size=0x4
        unsigned long CWnd;// Offset=0x30 Size=0x4
        unsigned long SsThresh;// Offset=0x34 Size=0x4
        unsigned short SRtt;// Offset=0x38 Size=0x2
        unsigned short RttVar;// Offset=0x3a Size=0x2
        unsigned long TsRecent;// Offset=0x3c Size=0x4
        unsigned long TsRecentAge;// Offset=0x40 Size=0x4
        unsigned long TsTime;// Offset=0x44 Size=0x4
        unsigned long TotalRT;// Offset=0x48 Size=0x4
        unsigned char DupAckCount;// Offset=0x4c Size=0x1
        unsigned char SndWndProbeCount;// Offset=0x4d Size=0x1
        struct <unnamed-type-KeepAlive>// Size=0x8 (Id=13378)
        {
            unsigned char ProbeCount;// Offset=0x0 Size=0x1
            unsigned long TimeoutDelta;// Offset=0x4 Size=0x4
        };
        struct _TCP_OFFLOAD_STATE_DELEGATED::<unnamed-type-KeepAlive> KeepAlive;// Offset=0x50 Size=0x8
        struct <unnamed-type-Retransmit>// Size=0x8 (Id=13382)
        {
            unsigned char Count;// Offset=0x0 Size=0x1
            unsigned long TimeoutDelta;// Offset=0x4 Size=0x4
        };
        struct _TCP_OFFLOAD_STATE_DELEGATED::<unnamed-type-Retransmit> Retransmit;// Offset=0x58 Size=0x8
    };
    union // Size=0x70 (Id=0)
    {
        struct _NET_BUFFER_LIST * SendDataHead;// Offset=0x60 Size=0x8
        struct _NET_BUFFER_LIST * SendDataTail;// Offset=0x68 Size=0x8
        unsigned long SendBacklogSize;// Offset=0x60 Size=0x4
        struct _NET_BUFFER_LIST * BufferedData;// Offset=0x70 Size=0x8
    };
    unsigned long ReceiveBacklogSize;// Offset=0x70 Size=0x4
    unsigned long DWnd;// Offset=0x78 Size=0x4
};
