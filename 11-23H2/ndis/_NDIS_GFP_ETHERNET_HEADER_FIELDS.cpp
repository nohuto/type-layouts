struct _NDIS_GFP_ETHERNET_HEADER_FIELDS// Size=0x14 (Id=899)
{
    unsigned char DestinationMacAddress[6];// Offset=0x0 Size=0x6
    unsigned char SourceMacAddress[6];// Offset=0x6 Size=0x6
    unsigned short EthType;// Offset=0xc Size=0x2
    unsigned short CustomerVlanId;// Offset=0xe Size=0x2
    unsigned short ProviderVlanId;// Offset=0x10 Size=0x2
    unsigned char Priority;// Offset=0x12 Size=0x1
};
