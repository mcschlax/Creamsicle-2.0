; CPU 0 Values

[Include]
@IncludeHW=#@#HWiNFO.inc

[CPU0_NAME]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOType=SensorName
RegExpSubstitute=1
Substitute="^(.*]: )":"","(: .*)$":"","Intel Core i(.*)-":""

[CPU0_COR0_VID]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR0-VID#
HWiNFOType=CurrentValue

[CPU0_COR1_VID]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR1-VID#
HWiNFOType=CurrentValue

[CPU0_COR2_VID]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR2-VID#
HWiNFOType=CurrentValue

[CPU0_COR3_VID]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR3-VID#
HWiNFOType=CurrentValue

[CPU0_AVG_VID]
Measure=Calc
Formula=(1/4*(CPU0_COR0_VID+CPU0_COR1_VID+CPU0_COR2_VID+CPU0_COR3_VID))
DynamicVariables=1

[CPU0_COR0_CLK]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR0-CLK#
HWiNFOType=CurrentValue

[CPU0_COR1_CLK]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR1-CLK#
HWiNFOType=CurrentValue

[CPU0_COR2_CLK]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR2-CLK#
HWiNFOType=CurrentValue

[CPU0_COR3_CLK]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR3-CLK#
HWiNFOType=CurrentValue

[CPU0_AVG_CLK]
Measure=Calc
Formula=(1/4*(CPU0_COR0_CLK+CPU0_COR1_CLK+CPU0_COR2_CLK+CPU0_COR3_CLK))
DynamicVariables=1

[CPU0_AVG_CLK_GHz]
Measure=Calc
Formula=(1/4*(CPU0_COR0_CLK+CPU0_COR1_CLK+CPU0_COR2_CLK+CPU0_COR3_CLK)*1/1000)
DynamicVariables=1

[CPU0_BUS_CLK]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-BUS-CLK#
HWiNFOType=CurrentValue

[CPU0_COR0_THD0_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR0-THD0-USE#
HWiNFOType=CurrentValue

[CPU0_COR0_THD1_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR0-THD1-USE#
HWiNFOType=CurrentValue

[CPU0_COR1_THD0_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR1-THD0-USE#
HWiNFOType=CurrentValue

[CPU0_COR1_THD1_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR1-THD1-USE#
HWiNFOType=CurrentValue

[CPU0_COR2_THD0_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR2-THD0-USE#
HWiNFOType=CurrentValue

[CPU0_COR2_THD1_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR2-THD1-USE#
HWiNFOType=CurrentValue

[CPU0_COR3_THD0_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR3-THD0-USE#
HWiNFOType=CurrentValue

[CPU0_COR3_THD1_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR3-THD1-USE#
HWiNFOType=CurrentValue

[CPU0_TOTL_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-TOTL-USE#
HWiNFOType=CurrentValue

; CPU0 Package

[CPU0_PKG_TMP]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-PKG-SID#
HWiNFOSensorInstance=#CPU0-PKG-SIN#
HWiNFOEntryId=#CPU0-PKG-TMP#
HWiNFOType=CurrentValue

[CPU0_PKG_PWR]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-PKG-SID#
HWiNFOSensorInstance=#CPU0-PKG-SIN#
HWiNFOEntryId=#CPU0-PKG-PWR#
HWiNFOType=CurrentValue

[CPU0_FAN]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#MOBO-SID#
HWiNFOSensorInstance=#MOBO-SIN#
HWiNFOEntryId=#MOBO-FAN-CH2#
HWiNFOType=CurrentValue