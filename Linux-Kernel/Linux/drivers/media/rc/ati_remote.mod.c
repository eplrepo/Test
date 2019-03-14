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
	{ 0x31e8ba3d, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0xa3faa39c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x93a5f065, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x82b04bfc, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x6897ade, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xf811ecfb, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xf8ac2e35, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x67db99b8, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x7b6fd1e, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0xdfd0c515, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x54b8b402, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xfaf8f001, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xf76fb8be, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x4c890c25, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa8109599, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x98dfb43, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9e52ac12, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4d4db2b0, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x38dad6e5, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xe2dfa9be, __VMLINUX_SYMBOL_STR(rc_keyup) },
	{ 0x74a5d73b, __VMLINUX_SYMBOL_STR(rc_keydown_notimeout) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x31eb174a, __VMLINUX_SYMBOL_STR(rc_g_keycode_from_table) },
	{ 0xff3e3628, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7095faf8, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x534dd61c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x43497351, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x653e8626, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x10d5b6b6, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x6ebc1f5f, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x896fd2ee, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BC7p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0008d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0A43BABFF7679B8E2CD2553");