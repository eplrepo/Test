cmd_lib/lib-ksyms.o := arm-buildroot-linux-uclibcgnueabihf-objdump -h lib/lib.a | sed -ne '/___ksymtab/s/.*+\([^ ]*\).*/EXTERN(\1)/p' >lib/.lib-ksyms.o.lds; rm -f lib/.lib_exports.o; echo | arm-buildroot-linux-uclibcgnueabihf-gcc -Wp,-MD,lib/.lib-ksyms.o.d  -nostdinc -isystem /home/epl/arjun/demo/Linux-Test-Framework/Cross-compiler/bin/../lib/gcc/arm-buildroot-linux-uclibcgnueabihf/6.4.0/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -fno-PIE -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float -DCC_HAVE_ASM_GOTO   -c -o lib/.lib_exports.o -x assembler -; arm-buildroot-linux-uclibcgnueabihf-ld -EL    -r -o lib/lib-ksyms.o -T lib/.lib-ksyms.o.lds lib/.lib_exports.o; rm lib/.lib_exports.o lib/.lib-ksyms.o.lds