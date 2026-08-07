################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
Hardware\ copy/bsp_sht20.o: ../Hardware\ copy/bsp_sht20.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: Arm Compiler'
	"D:/TI/CCS/ccs/tools/compiler/ti-cgt-armllvm_3.2.2.LTS/bin/tiarmclang.exe" -c @"device.opt"  -march=thumbv6m -mcpu=cortex-m0plus -mfloat-abi=soft -mlittle-endian -mthumb -O2 -I"C:/Users/win/Videos/10_i2c" -I"C:/Users/win/Videos/10_i2c/Debug" -I"D:/TI/M0_SDK/mspm0_sdk_2_01_00_03/source/third_party/CMSIS/Core/Include" -I"D:/TI/M0_SDK/mspm0_sdk_2_01_00_03/source" -I"C:/Users/win/Videos/10_i2c/Hardware" -gdwarf-3 -MMD -MP -MF"Hardware copy/bsp_sht20.d_raw" -MT"Hardware\ copy/bsp_sht20.o"  $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


