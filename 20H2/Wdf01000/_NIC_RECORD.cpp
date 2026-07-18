struct _NIC_RECORD// Size=0x248 (Id=2753)
{
    wchar_t NICName[256];// Offset=0x0 Size=0x200
    unsigned long Index;// Offset=0x200 Size=0x4
    unsigned long PhysicalAddrLen;// Offset=0x204 Size=0x4
    wchar_t PhysicalAddr[8];// Offset=0x208 Size=0x10
    unsigned long Size;// Offset=0x218 Size=0x4
    long IpAddress;// Offset=0x21c Size=0x4
    long SubnetMask;// Offset=0x220 Size=0x4
    long DhcpServer;// Offset=0x224 Size=0x4
    long Gateway;// Offset=0x228 Size=0x4
    long PrimaryWinsServer;// Offset=0x22c Size=0x4
    long SecondaryWinsServer;// Offset=0x230 Size=0x4
    long DnsServer[4];// Offset=0x234 Size=0x10
    unsigned long Data;// Offset=0x244 Size=0x4
};
