cmd_drivers/video/backlight/lcd.ko := arm-buildroot-linux-uclibcgnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/video/backlight/lcd.ko drivers/video/backlight/lcd.o drivers/video/backlight/lcd.mod.o ;  true