U-Boot for Microchip PolarFire SoC Discovery Kit
====================================================================================

Download
------------------------------------------------------------------------------------

### u-boot-mchp-fpga-2024.09

```console
shell$ git clone --depth 1 --branch linux4microchip+fpga-2024.09 https://github.com/linux4microchip/u-boot-mchp.git u-boot-mchp-fpga-2024.09
```

### hart-software-services-v2024.09

```console
shell$ git clone --depth 1 --branch v2024.09 https://github.com/polarfire-soc/hart-software-services.git hart-software-services-v2024.09
```

Build
------------------------------------------------------------------------------------

### hss-payload-generator

```console
shell$ cd hart-software-services-v2024.09/tools/hss-payload-generator/
shell$ make
```

### u-boot

```console
shell$ cd u-boot-mchp-fpga-2024.09
shell$ export CROSS_COMPILE=riscv64-unknown-linux-gnu-
shell$ make microchip_mpfs_discokit_defconfig
shell$ ./scripts/kconfig/merge_config.sh .config ../files/mpfs-disco-kit.cfg
shell$ make
```

### uboot.img

```console
shell$ cd u-boot-mchp-fpga-2024.09
shell$ ../hart-software-services-v2024.09/tools/hss-payload-generator/hss-payload-generator -c ../files/uboot.yaml -v ../uboot.img
```

### uboot.env

```
shell$ cd u-boot-mchp-fpga-2024.09
shell$ grep CONFIG_ENV_SIZE .config
CONFIG_ENV_SIZE=0x2000
shell$ export CONFIG_ENV_SIZE=0x2000
shell$ tools/mkenvimage -s $CONFIG_ENV_SIZE ../files/uboot-env.txt -o ../uboot.env
```

### boot.scr

```
shell$ cd u-boot-mchp-fpga-2024.09
shell$ tools/mkimage -c none -A riscv -T script -d ../files/boot.cmd ../boot.scr
Image Name:   
Created:      Fri Nov 22 15:18:44 2024
Image Type:   RISC-V Linux Script (gzip compressed)
Data Size:    368 Bytes = 0.36 KiB = 0.00 MiB
Load Address: 00000000
Entry Point:  00000000
Contents:
   Image 0: 360 Bytes = 0.35 KiB = 0.00 MiB
```
