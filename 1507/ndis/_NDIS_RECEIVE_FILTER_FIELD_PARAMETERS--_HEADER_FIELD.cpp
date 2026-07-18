enum _NDIS_MAC_HEADER_FIELD
{
    NdisMacHeaderFieldUndefined=0,
    NdisMacHeaderFieldDestinationAddress=1,
    NdisMacHeaderFieldSourceAddress=2,
    NdisMacHeaderFieldProtocol=3,
    NdisMacHeaderFieldVlanId=4,
    NdisMacHeaderFieldPriority=5,
    NdisMacHeaderFieldPacketType=6,
    NdisMacHeaderFieldMaximum=7
};

enum _NDIS_ARP_HEADER_FIELD
{
    NdisARPHeaderFieldUndefined=0,
    NdisARPHeaderFieldOperation=1,
    NdisARPHeaderFieldSPA=2,
    NdisARPHeaderFieldTPA=3,
    NdisARPHeaderFieldMaximum=4
};

enum _NDIS_IPV4_HEADER_FIELD
{
    NdisIPv4HeaderFieldUndefined=0,
    NdisIPv4HeaderFieldProtocol=1,
    NdisIPv4HeaderFieldMaximum=2
};

enum _NDIS_IPV6_HEADER_FIELD
{
    NdisIPv6HeaderFieldUndefined=0,
    NdisIPv6HeaderFieldProtocol=1,
    NdisIPv6HeaderFieldMaximum=2
};

enum _NDIS_UDP_HEADER_FIELD
{
    NdisUdpHeaderFieldUndefined=0,
    NdisUdpHeaderFieldDestinationPort=1,
    NdisUdpHeaderFieldMaximum=2
};

union _NDIS_RECEIVE_FILTER_FIELD_PARAMETERS::_HEADER_FIELD// Size=0x4 (Id=1047)
{
    enum _NDIS_MAC_HEADER_FIELD MacHeaderField;// Offset=0x0 Size=0x4
    enum _NDIS_ARP_HEADER_FIELD ArpHeaderField;// Offset=0x0 Size=0x4
    enum _NDIS_IPV4_HEADER_FIELD IPv4HeaderField;// Offset=0x0 Size=0x4
    enum _NDIS_IPV6_HEADER_FIELD IPv6HeaderField;// Offset=0x0 Size=0x4
    enum _NDIS_UDP_HEADER_FIELD UdpHeaderField;// Offset=0x0 Size=0x4
};
