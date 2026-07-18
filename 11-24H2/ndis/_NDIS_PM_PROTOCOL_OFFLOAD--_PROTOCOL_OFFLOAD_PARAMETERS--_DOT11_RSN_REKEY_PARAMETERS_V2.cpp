struct _NDIS_PM_PROTOCOL_OFFLOAD::_PROTOCOL_OFFLOAD_PARAMETERS::_DOT11_RSN_REKEY_PARAMETERS_V2// Size=0x60 (Id=2068)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    unsigned long long KeyReplayCounter;// Offset=0x8 Size=0x8
    unsigned long AuthAlgo;// Offset=0x10 Size=0x4
    unsigned long KCKLength;// Offset=0x14 Size=0x4
    unsigned long KEKLength;// Offset=0x18 Size=0x4
    unsigned char KCK[32];// Offset=0x1c Size=0x20
    unsigned char KEK[32];// Offset=0x3c Size=0x20
};
