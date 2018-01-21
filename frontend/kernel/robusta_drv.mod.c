#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc6c01fa, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x92a94ad2, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb493c9a4, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x2a6bc1e3, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xd1f6681f, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0xdedb6611, __VMLINUX_SYMBOL_STR(try_wait_for_completion) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x16abfc10, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x5d8dbaec, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xe6a34ec1, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0xbd9210be, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x9e4f33bd, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x1ad490a0, __VMLINUX_SYMBOL_STR(bdbm_dm_init) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x75e82745, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x6699beaf, __VMLINUX_SYMBOL_STR(bdbm_dm_exit) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x763f6ebe, __VMLINUX_SYMBOL_STR(vfs_read) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd396edd5, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x391afe42, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x156a8a59, __VMLINUX_SYMBOL_STR(down_trylock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5e3ef3d6, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x6dc6dd56, __VMLINUX_SYMBOL_STR(down) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xeacc6fc3, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x913d5b77, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x5665082b, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x179ea56, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x81fcd7c8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x2bfaa528, __VMLINUX_SYMBOL_STR(bdbm_dm_get_inf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0xf42bf609, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xe1e7691f, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0xf8749efa, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0xab132e4b, __VMLINUX_SYMBOL_STR(vfs_write) },
	{ 0x823de7ac, __VMLINUX_SYMBOL_STR(filp_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=risa_dev_ramdrive";


MODULE_INFO(srcversion, "03C2E7D41A20D66BDBFA427");
