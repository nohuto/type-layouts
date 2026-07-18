union NVME_CDW11_FEATURES// Size=0x4 (Id=1172)
{
    union NVME_CDW11_FEATURE_NUMBER_OF_QUEUES NumberOfQueues;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURE_INTERRUPT_COALESCING InterruptCoalescing;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURE_INTERRUPT_VECTOR_CONFIG InterruptVectorConfig;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURE_LBA_RANGE_TYPE LbaRangeType;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURE_ARBITRATION Arbitration;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURE_VOLATILE_WRITE_CACHE VolatileWriteCache;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURE_ASYNC_EVENT_CONFIG AsyncEventConfig;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURE_POWER_MANAGEMENT PowerManagement;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURE_AUTO_POWER_STATE_TRANSITION AutoPowerStateTransition;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURE_TEMPERATURE_THRESHOLD TemperatureThreshold;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURE_ERROR_RECOVERY ErrorRecovery;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURE_HOST_MEMORY_BUFFER HostMemoryBuffer;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURE_WRITE_ATOMICITY_NORMAL WriteAtomicityNormal;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURE_NON_OPERATIONAL_POWER_STATE NonOperationalPowerState;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURE_IO_COMMAND_SET_PROFILE IoCommandSetProfile;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURE_ERROR_INJECTION ErrorInjection;// Offset=0x0 Size=0x4
    struct NVME_CDW11_FEATURE_HOST_IDENTIFIER HostIdentifier;// Offset=0x0 Size=0x4
    struct NVME_CDW11_FEATURE_RESERVATION_PERSISTENCE ReservationPersistence;// Offset=0x0 Size=0x4
    struct NVME_CDW11_FEATURE_RESERVATION_NOTIFICATION_MASK ReservationNotificationMask;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURE_GET_HOST_METADATA GetHostMetadata;// Offset=0x0 Size=0x4
    union NVME_CDW11_FEATURE_SET_HOST_METADATA SetHostMetadata;// Offset=0x0 Size=0x4
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
