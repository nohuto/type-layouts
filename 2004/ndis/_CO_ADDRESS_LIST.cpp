struct _CO_ADDRESS// Size=0x8 (Id=1125)
{
    unsigned long AddressSize;// Offset=0x0 Size=0x4
    unsigned char Address[1];// Offset=0x4 Size=0x1
};

struct _CO_ADDRESS_LIST// Size=0x10 (Id=1003)
{
    unsigned long NumberOfAddressesAvailable;// Offset=0x0 Size=0x4
    unsigned long NumberOfAddresses;// Offset=0x4 Size=0x4
    struct _CO_ADDRESS AddressList;// Offset=0x8 Size=0x8
};
