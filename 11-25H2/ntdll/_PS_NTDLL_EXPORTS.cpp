struct _PS_NTDLL_EXPORTS// Size=0xa8 (Id=140)
{
    void * LdrSystemDllInitBlock;// Offset=0x0 Size=0x8
    void * LdrInitializeThunk;// Offset=0x8 Size=0x8
    void * RtlUserThreadStart;// Offset=0x10 Size=0x8
    void * RtlUserFiberStart;// Offset=0x18 Size=0x8
    void * KiUserExceptionDispatcher;// Offset=0x20 Size=0x8
    void * KiUserApcDispatcher;// Offset=0x28 Size=0x8
    void * KiUserCallbackDispatcher;// Offset=0x30 Size=0x8
    void * KiUserCallbackDispatcherReturn;// Offset=0x38 Size=0x8
    void * KiRaiseUserExceptionDispatcher;// Offset=0x40 Size=0x8
    void * ExpInterlockedPopEntrySListEnd;// Offset=0x48 Size=0x8
    void * ExpInterlockedPopEntrySListFault;// Offset=0x50 Size=0x8
    void * ExpInterlockedPopEntrySListResume;// Offset=0x58 Size=0x8
    void * RtlpFreezeTimeBias;// Offset=0x60 Size=0x8
    void * KiUserInvertedFunctionTable;// Offset=0x68 Size=0x8
    void * WerReportExceptionWorker;// Offset=0x70 Size=0x8
    void * RtlCallEnclaveReturn;// Offset=0x78 Size=0x8
    void * RtlEnclaveCallDispatch;// Offset=0x80 Size=0x8
    void * RtlEnclaveCallDispatchReturn;// Offset=0x88 Size=0x8
    void * RtlRaiseExceptionForReturnAddressHijack;// Offset=0x90 Size=0x8
    void * KiUserEmulationDispatcher;// Offset=0x98 Size=0x8
    void * LdrHotPatchNotify;// Offset=0xa0 Size=0x8
};
