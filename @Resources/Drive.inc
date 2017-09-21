; Drives

[Variables]
Drive0=C:

[Include]
@IncludeHW=#@#HWiNFO.inc

; Drive 0 S.M.A.R.T

[DRV0_SMT_TMP]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#DRV0-SMT-SID#
HWiNFOSensorInstance=#DRV0-SMT-SIN#
HWiNFOEntryId=#DRV0-SMT-TMP#
HWiNFOType=CurrentValue

; Drive 0

[DRV0_TTL]
Measure=FreeDiskSpace
Drive=#Drive0#
Total=1
UpdateDivider=120
RegExpSubstitute=1
Substitute="[^0-9. ]":""

[DRV0_TTL_Unit]
Measure=FreeDiskSpace
Drive=#Drive0#
Total=1
UpdateDivider=120
RegExpSubstitute=1
Substitute="[0-9. ]":""

[DRV0_USD]
Measure=FreeDiskSpace
Drive=#Drive0#
InvertMeasure=1
UpdateDivider=120
RegExpSubstitute=1
Substitute="[^0-9. ]":""

[DRV0_USD_Unit]
Measure=FreeDiskSpace
Drive=#Drive0#
InvertMeasure=1
UpdateDivider=120
RegExpSubstitute=1
Substitute="[0-9. ]":""

[DRV0_FRE]
Measure=FreeDiskSpace
Drive=#Drive0#
UpdateDivider=120
RegExpSubstitute=1
Substitute="[^0-9. ]":""

[DRV0_FRE_Unit]
Measure=FreeDiskSpace
Drive=#Drive0#
UpdateDivider=120
RegExpSubstitute=1
Substitute="[0-9. ]":""

[DRV0_RR]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#DRV0-SID#
HWiNFOSensorInstance=#DRV0-SIN#
HWiNFOEntryId=#DRV0-RR#
HWiNFOType=CurrentValue

[DRV0_WR]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#DRV0-SID#
HWiNFOSensorInstance=#DRV0-SIN#
HWiNFOEntryId=#DRV0-WR#
HWiNFOType=CurrentValue