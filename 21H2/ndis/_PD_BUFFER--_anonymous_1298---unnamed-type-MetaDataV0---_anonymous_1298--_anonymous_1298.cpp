struct _PD_BUFFER::_anonymous_1298::<unnamed-type-MetaDataV0>::_anonymous_1298::_anonymous_1298// Size=0x8 (Id=1298)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long TxIsIPv4:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long TxIsIPv6:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long TxTransportHeaderOffset:10;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0xa
        unsigned long TxMSS:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
        unsigned long TxComputeIPHeaderChecksum:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long TxComputeTCPChecksum:1;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long TxComputeUDPChecksum:1;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long TxIsEncapsulatedPacket:1;// Offset=0x4 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long TxInnerPacketOffsetsValid:1;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long TxReserved1:11;// Offset=0x4 Size=0x4 BitOffset=0x5 BitSize=0xb
        unsigned long TxInnerFrameOffset:8;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long TxInnerIpHeaderRelativeOffset:6;// Offset=0x4 Size=0x4 BitOffset=0x18 BitSize=0x6
        unsigned long TxInnerIsIPv6:1;// Offset=0x4 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long TxInnerTcpOptionsPresent:1;// Offset=0x4 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};
