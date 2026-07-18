struct _PD_BUFFER::_unnamed_1441::<unnamed-type-MetaDataV0>::_unnamed_1441::_unnamed_1441// Size=0x8 (Id=1441)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RxIPHeaderChecksumSucceeded:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long RxTCPChecksumSucceeded:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long RxUDPChecksumSucceeded:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long RxIPHeaderChecksumFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long RxTCPChecksumFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long RxUDPChecksumFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long RxHashComputed:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long RxHashWithL4PortNumbers:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long RxGftDirectionIngress:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long RxGftExceptionPacket:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long RxGftCopyPacket:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long RxGftSamplePacket:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long RxReserved1:4;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x4
        unsigned long RxCoalescedSegCount:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long RxRscTcpTimestampDelta;// Offset=0x4 Size=0x4
};
