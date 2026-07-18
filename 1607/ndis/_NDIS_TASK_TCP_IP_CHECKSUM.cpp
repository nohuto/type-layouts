struct _NDIS_TASK_TCP_IP_CHECKSUM// Size=0x10 (Id=840)
{
    union // Size=0xc (Id=0)
    {
        struct <unnamed-type-V4Transmit>// Size=0x4 (Id=10104)
        {
            unsigned long IpOptionsSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long TcpOptionsSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long TcpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long UdpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long IpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        };
        struct _NDIS_TASK_TCP_IP_CHECKSUM::<unnamed-type-V4Transmit> V4Transmit;// Offset=0x0 Size=0x4
        struct <unnamed-type-V4Receive>// Size=0x4 (Id=10111)
        {
            unsigned long IpOptionsSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long TcpOptionsSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long TcpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long UdpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long IpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        };
        struct _NDIS_TASK_TCP_IP_CHECKSUM::<unnamed-type-V4Receive> V4Receive;// Offset=0x4 Size=0x4
        struct <unnamed-type-V6Transmit>// Size=0x4 (Id=10118)
        {
            unsigned long IpOptionsSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long TcpOptionsSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long TcpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long UdpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        };
        struct _NDIS_TASK_TCP_IP_CHECKSUM::<unnamed-type-V6Transmit> V6Transmit;// Offset=0x8 Size=0x4
        struct <unnamed-type-V6Receive>// Size=0x4 (Id=10124)
        {
            unsigned long IpOptionsSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long TcpOptionsSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long TcpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long UdpChecksum:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        };
        struct _NDIS_TASK_TCP_IP_CHECKSUM::<unnamed-type-V6Receive> V6Receive;// Offset=0xc Size=0x4
    };
};
