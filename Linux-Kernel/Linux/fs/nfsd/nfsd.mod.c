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
	{ 0xb8d63b90, __VMLINUX_SYMBOL_STR(get_acl) },
	{ 0xace205f, __VMLINUX_SYMBOL_STR(vfs_create) },
	{ 0x814ebcef, __VMLINUX_SYMBOL_STR(svcauth_gss_flavor) },
	{ 0xb58a08b3, __VMLINUX_SYMBOL_STR(d_path) },
	{ 0x90e32429, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xc7c1b12d, __VMLINUX_SYMBOL_STR(auth_domain_put) },
	{ 0xa8109599, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4204a869, __VMLINUX_SYMBOL_STR(rpc_destroy_wait_queue) },
	{ 0x4603f493, __VMLINUX_SYMBOL_STR(set_groups) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x6d116af7, __VMLINUX_SYMBOL_STR(locks_free_lock) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x5b27bcb, __VMLINUX_SYMBOL_STR(xdr_truncate_encode) },
	{ 0xe7997879, __VMLINUX_SYMBOL_STR(sunrpc_cache_update) },
	{ 0xf246c744, __VMLINUX_SYMBOL_STR(trace_handle_return) },
	{ 0x3c576505, __VMLINUX_SYMBOL_STR(vfs_setlease) },
	{ 0x95dc1b95, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x23ac376d, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0xd6e40008, __VMLINUX_SYMBOL_STR(__mnt_is_readonly) },
	{ 0xe4a6bd56, __VMLINUX_SYMBOL_STR(lease_get_mtime) },
	{ 0xf92ed216, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x36e33cdb, __VMLINUX_SYMBOL_STR(mntget) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x27c22ad4, __VMLINUX_SYMBOL_STR(inode_permission) },
	{ 0xb401d8d9, __VMLINUX_SYMBOL_STR(locks_start_grace) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x9fbe81e5, __VMLINUX_SYMBOL_STR(cache_destroy_net) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x49a4cc0, __VMLINUX_SYMBOL_STR(rpc_call_async) },
	{ 0xe4e4d73e, __VMLINUX_SYMBOL_STR(write_bytes_to_xdr_buf) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0x1d8e2e9c, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0x2068e934, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x685e31ca, __VMLINUX_SYMBOL_STR(groups_sort) },
	{ 0x64900b27, __VMLINUX_SYMBOL_STR(svc_pool_stats_open) },
	{ 0x9a80347, __VMLINUX_SYMBOL_STR(vfs_link) },
	{ 0x4b2d8697, __VMLINUX_SYMBOL_STR(svc_print_addr) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xc4cdce55, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0xfffae983, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x78084a20, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xaa03063b, __VMLINUX_SYMBOL_STR(rpc_unlink) },
	{ 0x38c9d41c, __VMLINUX_SYMBOL_STR(radix_tree_delete_item) },
	{ 0x8353193b, __VMLINUX_SYMBOL_STR(vfs_llseek) },
	{ 0xd84c3e8f, __VMLINUX_SYMBOL_STR(gss_mech_get) },
	{ 0xfacfcb06, __VMLINUX_SYMBOL_STR(lookup_one_len_unlocked) },
	{ 0xd8b1524f, __VMLINUX_SYMBOL_STR(svc_addsock) },
	{ 0xbfff2674, __VMLINUX_SYMBOL_STR(vfs_clone_file_range) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x48d3f107, __VMLINUX_SYMBOL_STR(put_rpccred) },
	{ 0x1c0f93ef, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x280dbc3, __VMLINUX_SYMBOL_STR(gss_mech_put) },
	{ 0xbb62d39a, __VMLINUX_SYMBOL_STR(rpc_init_wait_queue) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xd77f126b, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x48047c92, __VMLINUX_SYMBOL_STR(svc_proc_unregister) },
	{ 0xf13a6c95, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xdd0e700d, __VMLINUX_SYMBOL_STR(svc_find_xprt) },
	{ 0x36849e0f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x6462a844, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x26a3f9ab, __VMLINUX_SYMBOL_STR(dentry_open) },
	{ 0xb169233f, __VMLINUX_SYMBOL_STR(rpc_restart_call) },
	{ 0x3583d612, __VMLINUX_SYMBOL_STR(nlmsvc_ops) },
	{ 0xc09d0627, __VMLINUX_SYMBOL_STR(rpc_uaddr2sockaddr) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x6833b73d, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x11d87d16, __VMLINUX_SYMBOL_STR(cache_register_net) },
	{ 0x90fef6cf, __VMLINUX_SYMBOL_STR(vfs_mknod) },
	{ 0x643d9ba1, __VMLINUX_SYMBOL_STR(groups_free) },
	{ 0x93a5f065, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xfd792e2a, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x71fa908a, __VMLINUX_SYMBOL_STR(cache_flush) },
	{ 0xe4ca3b4f, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4bc3bc9b, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x4ab9a852, __VMLINUX_SYMBOL_STR(svc_seq_show) },
	{ 0x1a9f92d8, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0xc1f89414, __VMLINUX_SYMBOL_STR(vfs_symlink) },
	{ 0x9dd850b4, __VMLINUX_SYMBOL_STR(rpc_mkpipe_data) },
	{ 0x3a763bab, __VMLINUX_SYMBOL_STR(path_get) },
	{ 0xe49b7766, __VMLINUX_SYMBOL_STR(rpc_mkpipe_dentry) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x39a701c6, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0x5c480b34, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9a789277, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0x40c7247c, __VMLINUX_SYMBOL_STR(si_meminfo) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xc464b32a, __VMLINUX_SYMBOL_STR(mnt_drop_write) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xba430d86, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0x7befee0e, __VMLINUX_SYMBOL_STR(rpc_wake_up_next) },
	{ 0xd1f2a75b, __VMLINUX_SYMBOL_STR(svc_set_client) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb3687850, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_lock) },
	{ 0x9e974c84, __VMLINUX_SYMBOL_STR(vfs_rmdir) },
	{ 0x5676d799, __VMLINUX_SYMBOL_STR(unlock_rename) },
	{ 0x882e57e5, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xde9360ba, __VMLINUX_SYMBOL_STR(totalram_pages) },
	{ 0x828d4630, __VMLINUX_SYMBOL_STR(gss_pseudoflavor_to_service) },
	{ 0x195976f1, __VMLINUX_SYMBOL_STR(splice_direct_to_actor) },
	{ 0x305a3e4e, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xd4d7a32, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0xf7df7378, __VMLINUX_SYMBOL_STR(rpc_get_sb_net) },
	{ 0xe05a538f, __VMLINUX_SYMBOL_STR(svc_xprt_names) },
	{ 0x810519fd, __VMLINUX_SYMBOL_STR(hashlen_string) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xe938801d, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0x22e1d33f, __VMLINUX_SYMBOL_STR(vfs_iter_write) },
	{ 0xcc70b15b, __VMLINUX_SYMBOL_STR(cache_check) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7e4042a9, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x7e5c2cf2, __VMLINUX_SYMBOL_STR(vfs_lock_file) },
	{ 0x71f92bd5, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdd9020d0, __VMLINUX_SYMBOL_STR(rpc_queue_upcall) },
	{ 0x8302795c, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x77cfe13e, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xf4a9e9e7, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x772f2f71, __VMLINUX_SYMBOL_STR(locks_alloc_lock) },
	{ 0xb1e6a9a, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x25ca05b8, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x6b3a5027, __VMLINUX_SYMBOL_STR(svcauth_unix_purge) },
	{ 0xd6387855, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xb07abe2, __VMLINUX_SYMBOL_STR(unshare_fs_struct) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x5f84e6d4, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0xdea9e3b3, __VMLINUX_SYMBOL_STR(cache_seq_stop) },
	{ 0x3efed17e, __VMLINUX_SYMBOL_STR(svc_destroy) },
	{ 0xea839d91, __VMLINUX_SYMBOL_STR(idr_alloc_cyclic) },
	{ 0xb05f5cab, __VMLINUX_SYMBOL_STR(rpc_create) },
	{ 0x1b3a6b18, __VMLINUX_SYMBOL_STR(set_posix_acl) },
	{ 0x2aee63f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x73f3c209, __VMLINUX_SYMBOL_STR(sunrpc_cache_lookup) },
	{ 0xfb1dfea5, __VMLINUX_SYMBOL_STR(xdr_restrict_buflen) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xff771bd, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xf26a1f1c, __VMLINUX_SYMBOL_STR(simple_transaction_read) },
	{ 0x1aad3aad, __VMLINUX_SYMBOL_STR(svc_alien_sock) },
	{ 0x80951b28, __VMLINUX_SYMBOL_STR(rpcauth_get_gssinfo) },
	{ 0xbf5cc4cb, __VMLINUX_SYMBOL_STR(iov_iter_kvec) },
	{ 0x4a2c5081, __VMLINUX_SYMBOL_STR(vfs_getxattr) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x3821d699, __VMLINUX_SYMBOL_STR(crypto_shash_digest) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xd8e6be42, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0x5f66a728, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0xd8477f69, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xd69ef97d, __VMLINUX_SYMBOL_STR(posix_acl_alloc) },
	{ 0xc94dc341, __VMLINUX_SYMBOL_STR(mount_ns) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x7c228d48, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbbace36c, __VMLINUX_SYMBOL_STR(lock_rename) },
	{ 0xfd16e532, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x9112e2e0, __VMLINUX_SYMBOL_STR(svc_create_pooled) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x93d9a48, __VMLINUX_SYMBOL_STR(rpc_lookup_machine_cred) },
	{ 0x4dd7a28e, __VMLINUX_SYMBOL_STR(rpc_d_lookup_sb) },
	{ 0xe97f4ce5, __VMLINUX_SYMBOL_STR(qword_get) },
	{ 0xa7eedcc4, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0xc8e96dea, __VMLINUX_SYMBOL_STR(qword_addhex) },
	{ 0x941907a1, __VMLINUX_SYMBOL_STR(__splice_from_pipe) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xacb5fdf7, __VMLINUX_SYMBOL_STR(unix_domain_find) },
	{ 0xec686a79, __VMLINUX_SYMBOL_STR(svc_process) },
	{ 0xf11ee600, __VMLINUX_SYMBOL_STR(svc_rpcb_cleanup) },
	{ 0xda9fa7f6, __VMLINUX_SYMBOL_STR(svc_set_num_threads) },
	{ 0x6d2e0720, __VMLINUX_SYMBOL_STR(cache_seq_next) },
	{ 0x62fe035b, __VMLINUX_SYMBOL_STR(exportfs_encode_fh) },
	{ 0x3e3ec986, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xa44b9436, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x75b9f0e4, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xaf6d7a1f, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xad5042f9, __VMLINUX_SYMBOL_STR(perf_trace_run_bpf_submit) },
	{ 0xdaa78f75, __VMLINUX_SYMBOL_STR(vfs_get_link) },
	{ 0xaaecf75d, __VMLINUX_SYMBOL_STR(perf_trace_buf_alloc) },
	{ 0x928210d6, __VMLINUX_SYMBOL_STR(svc_age_temp_xprts_now) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x5dde96bc, __VMLINUX_SYMBOL_STR(lease_modify) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x1e2d205b, __VMLINUX_SYMBOL_STR(prepare_creds) },
	{ 0xa4e52342, __VMLINUX_SYMBOL_STR(nfsacl_encode) },
	{ 0xedcf6be4, __VMLINUX_SYMBOL_STR(qword_add) },
	{ 0x52f4b4e8, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0xa3408add, __VMLINUX_SYMBOL_STR(cache_unregister_net) },
	{ 0x81df25e8, __VMLINUX_SYMBOL_STR(__fsnotify_parent) },
	{ 0xe1802dec, __VMLINUX_SYMBOL_STR(svc_xprt_put) },
	{ 0x9e8fce0, __VMLINUX_SYMBOL_STR(simple_transaction_release) },
	{ 0x8af3ed3e, __VMLINUX_SYMBOL_STR(svc_create_xprt) },
	{ 0x997d395a, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x5f40ce68, __VMLINUX_SYMBOL_STR(rpc_pipe_generic_upcall) },
	{ 0x71304953, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0x16e297c3, __VMLINUX_SYMBOL_STR(bit_wait) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x9a4cb0e0, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x387e1639, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_register) },
	{ 0x5d8ea536, __VMLINUX_SYMBOL_STR(rpc_destroy_pipe_data) },
	{ 0xf7a71c, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0x6663c249, __VMLINUX_SYMBOL_STR(locks_init_lock) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x92c4af88, __VMLINUX_SYMBOL_STR(mnt_want_write) },
	{ 0x9d60f9c1, __VMLINUX_SYMBOL_STR(locks_release_private) },
	{ 0xa814c582, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xfb4b8bf5, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x58d2273e, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x8f417250, __VMLINUX_SYMBOL_STR(vfs_fallocate) },
	{ 0xc3c2670, __VMLINUX_SYMBOL_STR(vfs_iter_read) },
	{ 0x49be2b8b, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x9ed7da6a, __VMLINUX_SYMBOL_STR(exportfs_decode_fh) },
	{ 0xf2830ddc, __VMLINUX_SYMBOL_STR(cache_purge) },
	{ 0x3b46719f, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x34a1e00d, __VMLINUX_SYMBOL_STR(vfs_statfs) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0xdca6ad1d, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x550b7b2e, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0x7f9c7912, __VMLINUX_SYMBOL_STR(svc_proc_register) },
	{ 0x5d6b1aa6, __VMLINUX_SYMBOL_STR(vfs_mkdir) },
	{ 0xf4bfa21, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x623fac1d, __VMLINUX_SYMBOL_STR(locks_in_grace) },
	{ 0xbe118033, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x1e563e66, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0x89290368, __VMLINUX_SYMBOL_STR(rpc_put_sb_net) },
	{ 0x800fb92b, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0xb959961a, __VMLINUX_SYMBOL_STR(vfs_copy_file_range) },
	{ 0xbdb7bc00, __VMLINUX_SYMBOL_STR(rpc_sleep_on) },
	{ 0xc62d722e, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0xec1aa6ef, __VMLINUX_SYMBOL_STR(memzero_explicit) },
	{ 0x4c890c25, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8e813b12, __VMLINUX_SYMBOL_STR(posix_acl_from_mode) },
	{ 0x92fb0b02, __VMLINUX_SYMBOL_STR(nfsacl_decode) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0x414fe074, __VMLINUX_SYMBOL_STR(simple_transaction_set) },
	{ 0x6d77601b, __VMLINUX_SYMBOL_STR(sync_inode_metadata) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x7a6d5a81, __VMLINUX_SYMBOL_STR(vfs_unlink) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x73ad200d, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x3fa6b28c, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xae75042c, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x4215a929, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf4d74125, __VMLINUX_SYMBOL_STR(rpc_restart_call_prepare) },
	{ 0x9ab8767f, __VMLINUX_SYMBOL_STR(svc_shutdown_net) },
	{ 0x9e52ac12, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x2f8ebbe0, __VMLINUX_SYMBOL_STR(rpc_ntop) },
	{ 0x45d7f87, __VMLINUX_SYMBOL_STR(rpc_wake_up_queued_task) },
	{ 0x3e2b0ba6, __VMLINUX_SYMBOL_STR(groups_alloc) },
	{ 0x44a9ee45, __VMLINUX_SYMBOL_STR(rpc_pton) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x5d45292, __VMLINUX_SYMBOL_STR(follow_down) },
	{ 0xf661ccd, __VMLINUX_SYMBOL_STR(posix_unblock_lock) },
	{ 0x6d36d466, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xac2de413, __VMLINUX_SYMBOL_STR(xdr_commit_encode) },
	{ 0xc79e5a13, __VMLINUX_SYMBOL_STR(svc_exit_thread) },
	{ 0xcd7386b8, __VMLINUX_SYMBOL_STR(vfs_test_lock) },
	{ 0xe7584f41, __VMLINUX_SYMBOL_STR(svc_max_payload) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xadbe3131, __VMLINUX_SYMBOL_STR(simple_transaction_get) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x5d94c835, __VMLINUX_SYMBOL_STR(follow_up) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa06a15ad, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0x9b17393b, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x1f1516ea, __VMLINUX_SYMBOL_STR(fsnotify) },
	{ 0x9c643fab, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0xa221d0aa, __VMLINUX_SYMBOL_STR(svc_reserve) },
	{ 0x7a3642ff, __VMLINUX_SYMBOL_STR(svc_xprt_do_enqueue) },
	{ 0x31420ae5, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0xf36283c0, __VMLINUX_SYMBOL_STR(abort_creds) },
	{ 0x7472513f, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0xa02dba15, __VMLINUX_SYMBOL_STR(lockd_up) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xb71fdea8, __VMLINUX_SYMBOL_STR(lockd_down) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x98dfb43, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb86d6479, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0x757d242a, __VMLINUX_SYMBOL_STR(read_bytes_from_xdr_buf) },
	{ 0xc8b74c41, __VMLINUX_SYMBOL_STR(iterate_dir) },
	{ 0x1fe1e1ad, __VMLINUX_SYMBOL_STR(locks_end_grace) },
	{ 0xd6acb2c1, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xcb9bedef, __VMLINUX_SYMBOL_STR(nlmsvc_unlock_all_by_sb) },
	{ 0xb51a3724, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_unregister) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x25be75f5, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xddb9d0bd, __VMLINUX_SYMBOL_STR(cache_create_net) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xa7fcedd8, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8296f8de, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xa292a6cd, __VMLINUX_SYMBOL_STR(svc_recv) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x3c93ea25, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xefc3b616, __VMLINUX_SYMBOL_STR(__break_lease) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x9e679398, __VMLINUX_SYMBOL_STR(auth_domain_find) },
	{ 0xb63c1e4c, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0x2a628db, __VMLINUX_SYMBOL_STR(proc_create) },
	{ 0xc3b8b214, __VMLINUX_SYMBOL_STR(svc_bind) },
	{ 0x31e812ab, __VMLINUX_SYMBOL_STR(vfs_rename) },
	{ 0xfbf9ad52, __VMLINUX_SYMBOL_STR(rpc_shutdown_client) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x7109fed3, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0x2919b156, __VMLINUX_SYMBOL_STR(xdr_decode_string_inplace) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0xcfa93c24, __VMLINUX_SYMBOL_STR(notify_change) },
	{ 0x7e1c9041, __VMLINUX_SYMBOL_STR(opens_in_grace) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xe4280399, __VMLINUX_SYMBOL_STR(svc_close_xprt) },
	{ 0x6644b92e, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0xb4e54baa, __VMLINUX_SYMBOL_STR(cache_seq_start) },
	{ 0x1a952a83, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xa5d02a55, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xcaf3b277, __VMLINUX_SYMBOL_STR(setattr_prepare) },
	{ 0x200cefc9, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0xb859f38b, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0xe382e0ff, __VMLINUX_SYMBOL_STR(seq_path) },
	{ 0x77e35ccc, __VMLINUX_SYMBOL_STR(nlmsvc_unlock_all_by_ip) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x41d90e1c, __VMLINUX_SYMBOL_STR(locks_mandatory_area) },
	{ 0x16f04c2b, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0xef464c28, __VMLINUX_SYMBOL_STR(getboottime64) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CADBD7C85C7E2A34ADE3C1C");