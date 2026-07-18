enum _SSH_HUB_EVENT
{
    SSH_Event_IdleTimer=1,
    SSH_Event_SuspendHubSucceeded=2,
    SSH_Event_SuspendHubFailed=3,
    SSH_Event_HardReset=4,
    SSH_Event_GetPortStatus=5,
    SSH_Event_ResumeHub=6,
    SSH_Event_ResumeHubComplete=7,
    SSH_Event_PropagateResume=8,
    SSH_Event_ResumeHubFailed=9
};
