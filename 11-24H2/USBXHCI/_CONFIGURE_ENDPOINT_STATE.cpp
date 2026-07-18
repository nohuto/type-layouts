enum _CONFIGURE_ENDPOINT_STATE
{
    ConfigureEndpointState_Uninitialized=0,
    ConfigureEndpointState_ValidateConfigureEndpointRequest=1,
    ConfigureEndpointState_CheckIfAnyHardwareAssistedOffloadModeIsEnabled=2,
    ConfigureEndpointState_CheckIfAnyOffloadedEndpointsInDisableList=3,
    ConfigureEndpointState_SendStopEndpointToOffloadedEndpoints=4,
    ConfigureEndpointState_DropEndpoints=5,
    ConfigureEndpointState_UnassignPinsForOffloadedEndpoints=6,
    ConfigureEndpointState_CheckIfAnyOffloadedEndpointsInEnableList=7,
    ConfigureEndpointState_AssignPinsForEndpointsToOffload=8,
    ConfigureEndpointState_CheckIfDropEndpointPerformedEarlier=9,
    ConfigureEndpointState_AddEndpoints=10,
    ConfigureEndpointState_AddAndDropEndpoints=11,
    ConfigureEndpointState_CompleteConfigureEndpointRequest=12,
    ConfigureEndpointState_CompleteConfigureEndpointRequestAndInvokeRecovery=13,
    ConfigureEndpointState_UnhandledEventReceived=14
};
