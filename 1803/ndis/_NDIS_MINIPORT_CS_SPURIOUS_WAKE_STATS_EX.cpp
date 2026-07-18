struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX// Size=0x14 (Id=1444)
{
    unsigned long WakeReasonBadIndication;// Offset=0x0 Size=0x4
    unsigned long WakeReasonNoIndication;// Offset=0x4 Size=0x4
    unsigned long WakeReasonPacketDirectedMac;// Offset=0x8 Size=0x4
    unsigned long WakeReasonUnknown;// Offset=0xc Size=0x4
    unsigned long LastUnknownWakeReason;// Offset=0x10 Size=0x4
};
