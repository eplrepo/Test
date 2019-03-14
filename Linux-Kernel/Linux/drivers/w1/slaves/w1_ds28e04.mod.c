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
	{ 0xa3faa39c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x5d72815c, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0x694436c, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x4c890c25, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa8109599, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8c916ed8, __VMLINUX_SYMBOL_STR(w1_next_pullup) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdcedef4a, __VMLINUX_SYMBOL_STR(w1_reset_bus) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd182a85b, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0x534dd61c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8ffdb3b8, __VMLINUX_SYMBOL_STR(crc16) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6a297b82, __VMLINUX_SYMBOL_STR(w1_read_block) },
	{ 0xe1c4e075, __VMLINUX_SYMBOL_STR(w1_write_block) },
	{ 0x3fcd8a07, __VMLINUX_SYMBOL_STR(w1_reset_select_slave) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x28118cb6, __VMLINUX_SYMBOL_STR(__get_user_1) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbb72d4fe, __VMLINUX_SYMBOL_STR(__put_user_1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "D6D6C61D2A84E8508290EC6");