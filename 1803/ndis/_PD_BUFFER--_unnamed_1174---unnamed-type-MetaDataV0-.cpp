struct _PD_BUFFER_VIRTUAL_SUBNET_INFO// Size=0x4 (Id=1788)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int VirtualSubnetId:24;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned int Reserved:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _PD_BUFFER_8021Q_INFO// Size=0x2 (Id=1614)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short UserPriority:3;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x3
        unsigned short CanonicalFormatId:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short VlanId:12;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

struct _PD_BUFFER::_unnamed_1174::<unnamed-type-MetaDataV0>// Size=0x30 (Id=1174)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long RxFilterContext;// Offset=0x0 Size=0x8
        unsigned long long GftFlowEntryId;// Offset=0x0 Size=0x8
    };
    unsigned long RxHashValue;// Offset=0x8 Size=0x4
    union // Size=0x14 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long RxIPHeaderChecksumSucceeded:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long RxTCPChecksumSucceeded:1;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long RxUDPChecksumSucceeded:1;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long RxIPHeaderChecksumFailed:1;// Offset=0xc Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long RxTCPChecksumFailed:1;// Offset=0xc Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long RxUDPChecksumFailed:1;// Offset=0xc Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long RxHashComputed:1;// Offset=0xc Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long RxHashWithL4PortNumbers:1;// Offset=0xc Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long RxGftDirectionIngress:1;// Offset=0xc Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long RxGftExceptionPacket:1;// Offset=0xc Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long RxGftCopyPacket:1;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long RxGftSamplePacket:1;// Offset=0xc Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long RxReserved1:4;// Offset=0xc Size=0x4 BitOffset=0xc BitSize=0x4
            unsigned long RxCoalescedSegCount:16;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x10
        };
        unsigned long RxRscTcpTimestampDelta;// Offset=0x10 Size=0x4
        unsigned long RxOffloads[2];// Offset=0xc Size=0x8
    };
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long TxIsIPv4:1;// Offset=0x14 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long TxIsIPv6:1;// Offset=0x14 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long TxTransportHeaderOffset:10;// Offset=0x14 Size=0x4 BitOffset=0x2 BitSize=0xa
            unsigned long TxMSS:20;// Offset=0x14 Size=0x4 BitOffset=0xc BitSize=0x14
            unsigned long TxComputeIPHeaderChecksum:1;// Offset=0x18 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long TxComputeTCPChecksum:1;// Offset=0x18 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long TxComputeUDPChecksum:1;// Offset=0x18 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long TxIsEncapsulatedPacket:1;// Offset=0x18 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long TxInnerPacketOffsetsValid:1;// Offset=0x18 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long TxReserved1:11;// Offset=0x18 Size=0x4 BitOffset=0x5 BitSize=0xb
            unsigned long TxInnerFrameOffset:8;// Offset=0x18 Size=0x4 BitOffset=0x10 BitSize=0x8
            unsigned long TxInnerIpHeaderRelativeOffset:6;// Offset=0x18 Size=0x4 BitOffset=0x18 BitSize=0x6
            unsigned long TxInnerIsIPv6:1;// Offset=0x18 Size=0x4 BitOffset=0x1e BitSize=0x1
            unsigned long TxInnerTcpOptionsPresent:1;// Offset=0x18 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
        unsigned long TxOffloads[2];// Offset=0x14 Size=0x8
    };
    struct _PD_BUFFER_VIRTUAL_SUBNET_INFO VirtualSubnetInfo;// Offset=0x1c Size=0x4
    struct _PD_BUFFER_8021Q_INFO Ieee8021qInfo;// Offset=0x20 Size=0x2
    unsigned short GftSourceVPortId;// Offset=0x22 Size=0x2
    unsigned long Reserved;// Offset=0x24 Size=0x4
    unsigned long long ProviderScratch;// Offset=0x28 Size=0x8
};
