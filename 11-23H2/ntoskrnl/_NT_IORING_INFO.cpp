enum _NT_IORING_CREATE_REQUIRED_FLAGS
{
    NT_IORING_CREATE_REQUIRED_FLAG_NONE=0
};

enum _NT_IORING_CREATE_ADVISORY_FLAGS
{
    NT_IORING_CREATE_ADVISORY_FLAG_NONE=0
};

struct _NT_IORING_CREATE_FLAGS// Size=0x8 (Id=1961)
{
    enum _NT_IORING_CREATE_REQUIRED_FLAGS Required;// Offset=0x0 Size=0x4
    enum _NT_IORING_CREATE_ADVISORY_FLAGS Advisory;// Offset=0x4 Size=0x4
};

struct _NT_IORING_INFO// Size=0x30 (Id=1594)
{
    enum IORING_VERSION IoRingVersion;// Offset=0x0 Size=0x4
    struct _NT_IORING_CREATE_FLAGS Flags;// Offset=0x4 Size=0x8
    unsigned int SubmissionQueueSize;// Offset=0xc Size=0x4
    unsigned int SubmissionQueueRingMask;// Offset=0x10 Size=0x4
    unsigned int CompletionQueueSize;// Offset=0x14 Size=0x4
    unsigned int CompletionQueueRingMask;// Offset=0x18 Size=0x4
    struct _NT_IORING_SUBMISSION_QUEUE * SubmissionQueue;// Offset=0x20 Size=0x8
    struct _NT_IORING_COMPLETION_QUEUE * CompletionQueue;// Offset=0x28 Size=0x8
};
