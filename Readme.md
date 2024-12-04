U-Boot for Microchip PolarFire SoC Discovery Kit
====================================================================================

Overview
------------------------------------------------------------------------------------

### Introduction

This Repository provides a u-boot (mchp-fpga-2024.09) image and boot scripts for Microchip PolarFire SoC Discovery Kit.

### Note

**The U-boot Image provided in this repository is not official.**    
**I modified it to my liking. Please handle with care.**    

### Features

* Hardware
  + MPFS-DISCO-KIT : Microchip PolarFire SoC Discovery Kit

* U-Boot
  + Load uEnv.txt in partition 1 of mmc0 before autoboot
  + Enable bootmenu

Release
------------------------------------------------------------------------------------

The main branch contains only Reaeme.md.
For U-Boot image and boot scripts, please refer to the respective release tag listed below.

| U-Boot Version |    Extra Version             | Build Version | Release Tag |
|:---------------|:-----------------------------|:--------------|:------------|
| 2023.07.02     | linux4microchip+fpga-2024.09 | 1             | [v2024.09-1](https://github.com/ikwzm/MPFS-DISCO-KIT-U-Boot/tree/v2024.09-1) |
| 2023.07.02     | linux4microchip+fpga-2024.09 | 0             | [v2024.09](https://github.com/ikwzm/MPFS-DISCO-KIT-U-Boot/tree/v2024.09) |

Download
------------------------------------------------------------------------------------

```console
shell$ export RELEASE_TAG=v2024.09-1
shell$ wget https://github.com/ikwzm/MPFS-DISCO-KIT-U-Boot/archive/refs/tags/$RELEASE_TAG.tar.gz
shell$ tar xfz $RELEASE_TAG.tar.gz
shell$ cd MPFS-DISCO-KIT-U-Boot-$RELEASE_TAG
```

