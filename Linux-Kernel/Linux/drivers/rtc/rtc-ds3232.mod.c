#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x13e75575, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x1ac52327, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xf8a844d1, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x7bd5aecd, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9c02c3c8, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x896fd2ee, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xad6d813b, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x9f5eb0af, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0xd487ceb2, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x534dd61c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4acc6ca1, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x9cd3a173, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0xd0aa57f3, __VMLINUX_SYMBOL_STR(devm_hwmon_device_register_with_info) },
	{ 0x16396722, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5838f6c9, __VMLINUX_SYMBOL_STR(rtc_valid_tm) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0x16f5d457, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0x9792ee10, __VMLINUX_SYMBOL_STR(regmap_bulk_write) },
	{ 0x80ca5026, __VMLINUX_SYMBOL_STR(_bin2bcd) },
	{ 0x7095faf8, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb1f0c029, __VMLINUX_SYMBOL_STR(rtc_update_irq) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfa8e0169, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xade989e, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Cdallas,ds3232");
MODULE_ALIAS("of:N*T*Cdallas,ds3232C*");
MODULE_ALIAS("i2c:ds3232");

MODULE_INFO(srcversion, "511CFDB810782C2E923F11E");