struct _WDF_TRIAGE_INFO_V1_21// Size=0x60 (Id=1875)
{
    unsigned long WdfMajorVersion;// Offset=0x0 Size=0x4
    unsigned long WdfMinorVersion;// Offset=0x4 Size=0x4
    unsigned long TriageInfoMajorVersion;// Offset=0x8 Size=0x4
    unsigned long TriageInfoMinorVersion;// Offset=0xc Size=0x4
    void * Reserved;// Offset=0x10 Size=0x8
    struct _WDFOBJECT_TRIAGE_INFO_V1_21 * WdfObjectTriageInfo;// Offset=0x18 Size=0x8
    struct _WDFCONTEXT_TRIAGE_INFO_V1_21 * WdfContextTriageInfo;// Offset=0x20 Size=0x8
    struct _WDFCONTEXTTYPE_TRIAGE_INFO_V1_21 * WdfContextTypeTriageInfo;// Offset=0x28 Size=0x8
    struct _WDFQUEUE_TRIAGE_INFO_V1_21 * WdfQueueTriageInfo;// Offset=0x30 Size=0x8
    struct _WDFFWDPROGRESS_TRIAGE_INFO_V1_21 * WdfFwdProgressTriageInfo;// Offset=0x38 Size=0x8
    struct _WDFIRPQUEUE_TRIAGE_INFO_V1_21 * WdfIrpQueueTriageInfo;// Offset=0x40 Size=0x8
    struct _WDFREQUEST_TRIAGE_INFO_V1_21 * WdfRequestTriageInfo;// Offset=0x48 Size=0x8
    struct _WDFDEVICE_TRIAGE_INFO_V1_21 * WdfDeviceTriageInfo;// Offset=0x50 Size=0x8
    struct _WDFIRP_TRIAGE_INFO_V1_21 * WdfIrpTriageInfo;// Offset=0x58 Size=0x8
};
