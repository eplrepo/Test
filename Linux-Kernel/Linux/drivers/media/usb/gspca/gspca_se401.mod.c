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
	{ 0x88093685, __VMLINUX_SYMBOL_STR(v4l2_ctrl_cluster) },
	{ 0x2558d6ca, __VMLINUX_SYMBOL_STR(gspca_suspend) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9d73ab63, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0xf909cba2, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0xf3f55b0, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x801a6415, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0xff3e3628, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x684037a, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0x82b04bfc, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x26f02757, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x68d7f004, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x19111933, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0xdbd38f0, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x6897ade, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,gspca_main";

MODULE_ALIAS("usb:v03E8p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p030Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v047Dp5001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v047Dp5002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v047Dp5003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DFAD9577DDBA63DF8784A10");