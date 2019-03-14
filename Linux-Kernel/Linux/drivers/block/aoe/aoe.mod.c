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
	{ 0xfc032b9d, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x90e32429, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xa8109599, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x34f80151, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xf0e0a296, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x6f7f1a6f, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x95dc1b95, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xf92ed216, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xa3faa39c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc7ec6c27, __VMLINUX_SYMBOL_STR(strspn) },
	{ 0x70752a38, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xfe90c4a6, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xfffae983, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x78084a20, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xb5a57d8a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xf34c039a, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf13a6c95, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x57e8006b, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xd5b03b51, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xe6246ed4, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2c346f30, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x6c1ce5ce, __VMLINUX_SYMBOL_STR(strcspn) },
	{ 0x60ceba45, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x5c480b34, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x456913ac, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x27168320, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x51e77c97, __VMLINUX_SYMBOL_STR(pfn_valid) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x8ab8ad77, __VMLINUX_SYMBOL_STR(__blk_run_queue) },
	{ 0x77e71afb, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x44b5ee9a, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x882e57e5, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x7c5b837a, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x93de854a, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xaad8c7d6, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0xa8344bad, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfc982daa, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xed98fa6c, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xf14c5dcc, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xdcab5c07, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xff771bd, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xf5a03b27, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x69b7bd75, __VMLINUX_SYMBOL_STR(blk_peek_request) },
	{ 0x40100300, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x6dec5a3e, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbeef10b4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x8ca64545, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0xcba1c24c, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x64c3e13e, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x62451f4, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0xc144892b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3e3ec986, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xa44b9436, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x75b9f0e4, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xa412e273, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x9ba94644, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xbda2195, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xdc044e36, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x48da9d64, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x154c7db9, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0xe1dff2d, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xf4bfa21, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x4c890c25, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x10ed43f0, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x73ad200d, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xdd31568b, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x6d36d466, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4a69ceea, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0xad050f2b, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x4a395dbd, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x689e06e, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6282e515, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0xcd12d02f, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x1163f0a7, __VMLINUX_SYMBOL_STR(blk_max_low_pfn) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xfaaa86c8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x81f8afb7, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x7529a1e4, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x65961174, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x3bc2aed3, __VMLINUX_SYMBOL_STR(bdget_disk) },
	{ 0xa39472b5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xb888c45e, __VMLINUX_SYMBOL_STR(__blk_end_request) },
	{ 0x40c34399, __VMLINUX_SYMBOL_STR(bdput) },
	{ 0x57a0db17, __VMLINUX_SYMBOL_STR(blk_start_request) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "48E7597167B2E6ABFE67504");