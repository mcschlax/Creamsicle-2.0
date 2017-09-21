; System RAM

[Include]
@IncludeHW=#@#HWiNFO.inc

[SYS_MEM_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#SYS-SID#
HWiNFOSensorInstance=#SYS-SIN#
HWiNFOEntryId=#SYS-MEM-USE#
HWiNFOType=CurrentValue

[SYS_MEM_USE_GB]
Measure=Calc
Formula=(SYS_MEM_USE*1/1000)
DynamicVariables=1

[SYS_MEM_MAX]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#SYS-SID#
HWiNFOSensorInstance=#SYS-SIN#
HWiNFOEntryId=#SYS-MEM-MAX#
HWiNFOType=CurrentValue

[SYS_MEM_MAX_GB]
Measure=Calc
Formula=(SYS_MEM_MAX*1/1000)
DynamicVariables=1

[SYS_MEM_LD]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#SYS-SID#
HWiNFOSensorInstance=#SYS-SIN#
HWiNFOEntryId=#SYS-MEM-LD#
HWiNFOType=CurrentValue

; Memory Timings

[RAM_CLK]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#RAM-MEM-SID#
HWiNFOSensorInstance=#RAM-MEM-SIN#
HWiNFOEntryId=#RAM-CLK#
HWiNFOType=CurrentValue

[RAM_T_CAS]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#RAM-MEM-SID#
HWiNFOSensorInstance=#RAM-MEM-SIN#
HWiNFOEntryId=#RAM-T-CAS#
HWiNFOType=CurrentValue

[RAM_T_RCD]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#RAM-MEM-SID#
HWiNFOSensorInstance=#RAM-MEM-SIN#
HWiNFOEntryId=#RAM-T-RCD#
HWiNFOType=CurrentValue

[RAM_T_RP]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#RAM-MEM-SID#
HWiNFOSensorInstance=#RAM-MEM-SIN#
HWiNFOEntryId=#RAM-T-RP#
HWiNFOType=CurrentValue

[RAM_T_RAS]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#RAM-MEM-SID#
HWiNFOSensorInstance=#RAM-MEM-SIN#
HWiNFOEntryId=#RAM-T-RAS#
HWiNFOType=CurrentValue

[RAM_T_RFC]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#RAM-MEM-SID#
HWiNFOSensorInstance=#RAM-MEM-SIN#
HWiNFOEntryId=#RAM-T-RFC#
HWiNFOType=CurrentValue