#!/bin/bash

export ARCH=arm
#export CROSS_COMPILE=/opt/toolchains/arm-eabi-4.7/bin/arm-eabi-
export CROSS_COMPILE=/opt/toolchains/arm-cortex_a15-linux-gnueabihf-linaro_4.7.4-2014.04/bin/arm-eabi-
mkdir output

make -C $(pwd) O=output msm8916_sec_defconfig VARIANT_DEFCONFIG=msm8916_sec_fortunave3g_eur_defconfig SELINUX_DEFCONFIG=selinux_defconfig TIMA_DEFCONFIG=tima8916_defconfig
make -j5 -C $(pwd) O=output

cp output/arch/arm/boot/zImage $(pwd)/arch/arm/boot/zImage
