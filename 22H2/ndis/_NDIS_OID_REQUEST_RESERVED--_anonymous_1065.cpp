union _NDIS_OID_REQUEST_RESERVED::_anonymous_1065// Size=0x18 (Id=1065)
{
    union // Size=0x18 (Id=0)
    {
        unsigned long long StartCycle;// Offset=0x0 Size=0x8
        struct _NDIS_REQUEST_XLATION_CONTEXT * pOidXlationContext;// Offset=0x0 Size=0x8
        unsigned long OriginalBufferLength;// Offset=0x8 Size=0x4
        unsigned long SavedOid;// Offset=0x0 Size=0x4
        void * SavedInfoBuf;// Offset=0x8 Size=0x8
        unsigned long SavedInfoBufLen;// Offset=0x10 Size=0x4
        unsigned long RequestBuffer;// Offset=0x14 Size=0x4
        struct <unnamed-type-IovContext>// Size=0x10 (Id=9187)
        {
            struct _NDIS_VF_BLOCK * VFBlock;// Offset=0x0 Size=0x8
            struct _NDIS_VPORT_BLOCK * VPortBlock;// Offset=0x8 Size=0x8
        };
        struct _NDIS_OID_REQUEST_RESERVED::_anonymous_1069::<unnamed-type-IovContext> IovContext;// Offset=0x0 Size=0x10
        struct <unnamed-type-PMContext>// Size=0x18 (Id=9193)
        {
            struct _NDIS_WOL_XLATION_CONTEXT * WolXlationContext;// Offset=0x0 Size=0x8
            unsigned long WolPatternId;// Offset=0x8 Size=0x4
            struct _NDIS_PACKET_PATTERN_ENTRY * SourcePacketEntry;// Offset=0x10 Size=0x8
        };
        struct _NDIS_OID_REQUEST_RESERVED::_anonymous_1070::<unnamed-type-PMContext> PMContext;// Offset=0x0 Size=0x18
        struct <unnamed-type-OffloadParamsContext>// Size=0x1 (Id=9200)
        {
            unsigned char SkipRegistryUpdate:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _NDIS_OID_REQUEST_RESERVED::_anonymous_1071::<unnamed-type-OffloadParamsContext> OffloadParamsContext;// Offset=0x0 Size=0x1
    };
};
