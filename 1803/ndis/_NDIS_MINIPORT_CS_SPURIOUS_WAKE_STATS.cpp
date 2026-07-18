struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS// Size=0x2c (Id=1229)
{
    unsigned long WakeReasonUnspec;// Offset=0x0 Size=0x4
    unsigned long WakeReasonPacket;// Offset=0x4 Size=0x4
    unsigned long WakeReasonMediaDisconnect;// Offset=0x8 Size=0x4
    unsigned long WakeReasonMediaConnect;// Offset=0xc Size=0x4
    unsigned long WakeReasonWlanNLODiscovery;// Offset=0x10 Size=0x4
    unsigned long WakeReasonWlanApAssociationLost;// Offset=0x14 Size=0x4
    unsigned long WakeReasonWlanGTKHandshakeError;// Offset=0x18 Size=0x4
    unsigned long WakeReasonWlan4WayHandshakeRequest;// Offset=0x1c Size=0x4
    unsigned long WakeReasonWwanRegisterState;// Offset=0x20 Size=0x4
    unsigned long WakeReasonWwanSMSReceive;// Offset=0x24 Size=0x4
    unsigned long WakeReasonWwanUSSDReceive;// Offset=0x28 Size=0x4
};
