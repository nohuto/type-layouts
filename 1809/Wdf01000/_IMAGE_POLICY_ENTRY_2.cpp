enum _IMAGE_POLICY_ENTRY_TYPE
{
    ImagePolicyEntryTypeNone=0,
    ImagePolicyEntryTypeBool=1,
    ImagePolicyEntryTypeInt8=2,
    ImagePolicyEntryTypeUInt8=3,
    ImagePolicyEntryTypeInt16=4,
    ImagePolicyEntryTypeUInt16=5,
    ImagePolicyEntryTypeInt32=6,
    ImagePolicyEntryTypeUInt32=7,
    ImagePolicyEntryTypeInt64=8,
    ImagePolicyEntryTypeUInt64=9,
    ImagePolicyEntryTypeAnsiString=10,
    ImagePolicyEntryTypeUnicodeString=11,
    ImagePolicyEntryTypeOverride=12,
    ImagePolicyEntryTypeMaximum=13
};

enum _IMAGE_POLICY_ID
{
    ImagePolicyIdNone=0,
    ImagePolicyIdEtw=1,
    ImagePolicyIdDebug=2,
    ImagePolicyIdCrashDump=3,
    ImagePolicyIdCrashDumpKey=4,
    ImagePolicyIdCrashDumpKeyGuid=5,
    ImagePolicyIdParentSd=6,
    ImagePolicyIdParentSdRev=7,
    ImagePolicyIdSvn=8,
    ImagePolicyIdDeviceId=9,
    ImagePolicyIdCapability=10,
    ImagePolicyIdScenarioId=11,
    ImagePolicyIdMaximum=12
};

struct _IMAGE_POLICY_ENTRY// Size=0x10 (Id=2313)
{
    union // Size=0x8 (Id=0)
    {
        enum _IMAGE_POLICY_ENTRY_TYPE Type;// Offset=0x0 Size=0x4
        enum _IMAGE_POLICY_ID PolicyId;// Offset=0x4 Size=0x4
        union <unnamed-type-u>// Size=0x8 (Id=10189)
        {
            void * None;// Offset=0x0 Size=0x8
            unsigned char BoolValue;// Offset=0x0 Size=0x1
            char Int8Value;// Offset=0x0 Size=0x1
            unsigned char UInt8Value;// Offset=0x0 Size=0x1
            short Int16Value;// Offset=0x0 Size=0x2
            unsigned short UInt16Value;// Offset=0x0 Size=0x2
            int Int32Value;// Offset=0x0 Size=0x4
            unsigned int UInt32Value;// Offset=0x0 Size=0x4
            long long Int64Value;// Offset=0x0 Size=0x8
            unsigned long long UInt64Value;// Offset=0x0 Size=0x8
            char * AnsiStringValue;// Offset=0x0 Size=0x8
            wchar_t * UnicodeStringValue;// Offset=0x0 Size=0x8
        };
    };
    union _IMAGE_POLICY_ENTRY::<unnamed-type-u> u;// Offset=0x8 Size=0x8
};
