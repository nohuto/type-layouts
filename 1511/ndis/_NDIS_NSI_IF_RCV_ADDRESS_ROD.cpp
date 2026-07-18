enum _NET_IF_RCV_ADDRESS_TYPE
{
    NET_IF_RCV_ADDRESS_TYPE_OTHER=1,
    NET_IF_RCV_ADDRESS_TYPE_VOLATILE=2,
    NET_IF_RCV_ADDRESS_TYPE_NON_VOLATILE=3
};

struct _NDIS_NSI_IF_RCV_ADDRESS_ROD// Size=0x8 (Id=879)
{
    enum _NET_IF_RCV_ADDRESS_TYPE ifRcvAddressType;// Offset=0x0 Size=0x4
    unsigned short ifRcvAddressLength;// Offset=0x4 Size=0x2
};
