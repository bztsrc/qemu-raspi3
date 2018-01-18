QEMU Raspberry Pi 3 support
===========================

This is a non-official fork of qemu that implements machine type "raspi3". For the original qemu source, visit
[qemu github repo](https://github.com/qemu/qemu). I've minimized the patch to hw/arm/bcm2836.c and hw/arm/raspi.c files.

To configure, build and install, I've used these commands:

```sh
./configure --target-list=aarch64-softmmu,aarch64-linux-user --enable-modules --enable-tcg-interpreter --enable-debug-tcg --python=/usr/bin/python2.7
make -j4
sudo make install
```

After that, you can use it with:

```sh
qemu-system-aarch64 -M raspi3 -kernel kernel8.img
```

This patch is provided as-is, without any kind of warranty in the hope that it will be useful.

bzt
