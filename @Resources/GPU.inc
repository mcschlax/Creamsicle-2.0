; GPU 0

[Include]
@IncludeHW=#@#HWiNFO.inc

[GPU0_NAME]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#GPU0-SID#
HWiNFOSensorInstance=#GPU0-SIN#
HWiNFOType=SensorName
RegExpSubstitute=1
Substitute="^(.*]: )":"","(: .*)$":"","NVIDIA GeForce GTX ":""

[GPU0_TMP]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#GPU0-SID#
HWiNFOSensorInstance=#GPU0-SIN#
HWiNFOEntryId=#GPU0-TMP#
HWiNFOType=CurrentValue

[GPU0_COR_VID]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#GPU0-SID#
HWiNFOSensorInstance=#GPU0-SIN#
HWiNFOEntryId=#GPU0-COR-VID#
HWiNFOType=CurrentValue

[GPU0_FAN]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#MOBO-SID#
HWiNFOSensorInstance=#MOBO-SIN#
HWiNFOEntryId=#MOBO-FAN-CH1#
HWiNFOType=CurrentValue

[GPU0_PWR]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#GPU0-SID#
HWiNFOSensorInstance=#GPU0-SIN#
HWiNFOEntryId=#GPU0-PWR#
HWiNFOType=CurrentValue

[GPU0_COR_CLK]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#GPU0-SID#
HWiNFOSensorInstance=#GPU0-SIN#
HWiNFOEntryId=#GPU0-COR-CLK#
HWiNFOType=CurrentValue

[GPU0_MEM_CLK]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#GPU0-SID#
HWiNFOSensorInstance=#GPU0-SIN#
HWiNFOEntryId=#GPU0-MEM-CLK#
HWiNFOType=CurrentValue

[GPU0_VID_CLK]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#GPU0-SID#
HWiNFOSensorInstance=#GPU0-SIN#
HWiNFOEntryId=#GPU0-VID-CLK#
HWiNFOType=CurrentValue

[GPU0_COR_LD]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#GPU0-SID#
HWiNFOSensorInstance=#GPU0-SIN#
HWiNFOEntryId=#GPU0-COR-LD#
HWiNFOType=CurrentValue

[GPU0_MEM_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#GPU0-SID#
HWiNFOSensorInstance=#GPU0-SIN#
HWiNFOEntryId=#GPU0-MEM-USE#
HWiNFOType=CurrentValue

[GPU0_MEM_USE_GB]
Measure=Calc
Formula=(GPU0_MEM_USE*1/1000)
DynamicVariables=1