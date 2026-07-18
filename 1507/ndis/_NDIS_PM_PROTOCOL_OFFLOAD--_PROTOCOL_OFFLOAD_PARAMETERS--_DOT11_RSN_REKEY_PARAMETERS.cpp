struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_DOT11_RSN_REKEY_PARAMETERS// Size=0x30 (Id=1680)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    unsigned char KCK[16];// Offset=0x4 Size=0x10
    unsigned char KEK[16];// Offset=0x14 Size=0x10
    unsigned long long KeyReplayCounter;// Offset=0x28 Size=0x8
};
