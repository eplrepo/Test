cmd_arch/arm/oprofile/oprofile.ko := arm-buildroot-linux-uclibcgnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o arch/arm/oprofile/oprofile.ko arch/arm/oprofile/oprofile.o arch/arm/oprofile/oprofile.mod.o ;  true