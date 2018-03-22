QEMU Raspberry Pi 3 support
===========================

Adds machine type "raspi3" to boot AArch64 kernels in qemu. This patch is provided as-is, without any
kind of warranty in the hope that it will be useful.

*IMPORTANT NOTE: Thanks to a good soul, this patch made it through to qemu mainline. As a consequence, sooner or later every
qemu binary will support "-M raspi3", therefore these patches not needed any more.*

Usage
-----

1. download latest [qemu source](https://github.com/qemu/qemu)
2. overwrite files from this repo (or if you prefer patches [diffs here](https://github.com/bztsrc/qemu-raspi3/tree/patches))
3. compile qemu

```sh
./configure --target-list=aarch64-softmmu --enable-modules --enable-tcg-interpreter --enable-debug-tcg --python=/usr/bin/python2.7
make -j4
```

4. install qemu

```sh
sudo make install
```

5. run with the following command

```sh
qemu-system-aarch64 -M raspi3 -kernel kernel8.img
```

Enjoy! Keep in mind that qemu's BCM2837 peripherals support is far from being perfect, but close enough.

bzt
