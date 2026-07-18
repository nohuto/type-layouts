struct NVME_IO_POLLING_WORKER_CONTEXT// Size=0x20 (Id=1378)
{
    unsigned long TimerState;// Offset=0x0 Size=0x4
    unsigned long ProcessorIndex;// Offset=0x4 Size=0x4
    void * SubmissionQueue;// Offset=0x8 Size=0x8
    void * Timer;// Offset=0x10 Size=0x8
    struct _KDPC * PollingDPC;// Offset=0x18 Size=0x8
};
